#include "../include/ros_node.h"

RosNode::RosNode(void)
{
    qRegisterMetaType<QVariant>("QVariant");
    if (ros::isStarted())
    {
        ros::shutdown();
        ros::waitForShutdown();
    }
    wait();
}

bool RosNode::nodeInit(const std::string &master_url, const std::string &host_url)
{
    std::map<std::string, std::string> remappings;
    remappings["__master"] = master_url;
    remappings["__hostname"] = host_url;
    ros::init(remappings, "NICar_master", ros::init_options::AnonymousName);
    if (!ros::master::check())
    {
        emit sendInfoMes("Unable to find ros master in the IP!Please check : ");
        emit sendInfoMes("1) If the IP address and the Port is right!");
        emit sendInfoMes("2) If the master node is satrted!");
        return false;
    }
    ros::start();
    topicsManager();
    start();
    emit sendInfoMes("Connected to ROS!");
    return true;
}

void RosNode::topicsManager(void)
{
    ros::NodeHandle nh;
    imu_sub = nh.subscribe<sensor_msgs::Imu>("imu/data", 100, &RosNode::imuCallback, this);
    temper_sub = nh.subscribe<sensor_msgs::Temperature>("temperature", 100, &RosNode::tempCallback, this);
}

void RosNode::sub_image(QString top_name)
{
    ros::NodeHandle n;
    image_transport::ImageTransport it_(n);
    image_sub = it_.subscribe(top_name.toStdString(), 100, &RosNode::imageCallback, this);
}

void RosNode::sub_stop_image()
{
    image_sub.shutdown();
}

void RosNode::run()
{
    ros::Duration initDur(0.1);
    while (ros::ok())
    {
        ros::spinOnce();
        initDur.sleep();
    }
    std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    Q_EMIT rosShutdown();
}

void RosNode::imuCallback(const sensor_msgs::Imu::ConstPtr &msg)
{
    currentImu = *msg;
    imuMsg imuData;
    imuData.Orientation.x = currentImu.orientation.x;
    imuData.Orientation.y = currentImu.orientation.y;
    imuData.Orientation.z = currentImu.orientation.z;
    imuData.Orientation.covariance = currentImu.orientation_covariance;
    imuData.angularVelocity.x = currentImu.angular_velocity.x;
    imuData.angularVelocity.y = currentImu.angular_velocity.y;
    imuData.angularVelocity.z = currentImu.angular_velocity.z;
    imuData.angularVelocity.covariance = currentImu.angular_velocity_covariance;
    imuData.linearAcceleration.x = currentImu.linear_acceleration.x;
    imuData.linearAcceleration.y = currentImu.linear_acceleration.y;
    imuData.linearAcceleration.z = currentImu.linear_acceleration.z;
    imuData.linearAcceleration.covariance = currentImu.linear_acceleration_covariance;
    QVariant vImu;
    vImu.setValue(imuData);
    emit sendImu(vImu);
}

void RosNode::imageCallback(const sensor_msgs::ImageConstPtr &msg)
{
    try
    {
        cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
        des = cv_ptr->image;
        for (int i = 0; i < imageManager.returnImageProcessVector().size(); i++)
        {
            switch (imageManager.returnImageProcessVector()[i])
            {
            case _2Gray_V:
                cv::cvtColor(des, des, cv::COLOR_BGR2GRAY);
                break;
            case _2Binary_V:
                cv::threshold(
                    des,
                    des,
                    img._binaryConfig.threshold,
                    img._binaryConfig.max_value, (img._binaryConfig.threshold_type == 5) ? 8 : img._binaryConfig.threshold_type);
                break;
            case _2Canny_V:
                cv::Canny(des, des, img._cannyConfig.lowThreshold, img._cannyConfig.highThreshold, img._cannyConfig.Kernel_size);
                break;
            case _nightBoost_V:
                des = imageManager.logEnhance(des);
                break;
            case _laplacian_V:
                des = imageManager.Laplacian(des);
                break;
            }
        }

        QImage im = imageManager.Mat2QImage(des);
        emit sendImage(im);
    }
    catch (cv_bridge::Exception &e)
    {
        emit sendTemperature("Error 1002 : Get Image Failed!");
    }
}

void RosNode::tempCallback(const sensor_msgs::Temperature::ConstPtr &temp)
{
    currentTemp = *temp;
    QString tempVal = QString::number(currentTemp.temperature);
    emit sendTemperature(tempVal);
}

QMap<QString, QString> RosNode::get_topic_list()
{
    ros::master::V_TopicInfo topic_list;
    ros::master::getTopics(topic_list);
    QMap<QString, QString> res;
    for (auto topic : topic_list)
    {
        res.insert(QString::fromStdString(topic.name), QString::fromStdString(topic.datatype));
    }
    return res;
}

cv::Mat RosNode::getPicture(void)
{
    return cv_ptr->image;
}

RosNode::~RosNode(void)
{
    if (ros::isStarted())
    {
        ros::shutdown();
        ros::waitForShutdown();
    }
    wait();
}