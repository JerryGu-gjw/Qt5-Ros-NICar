/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSerialTools;
    QWidget *centralwidget;
    QLabel *authersaid;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_7;
    QTabWidget *tabWidget;
    QWidget *tb_base;
    QTabWidget *tbw_main;
    QWidget *tb_camera;
    QLabel *lb_camImage;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comba_imageTopics;
    QPushButton *bt_playCam;
    QPushButton *bt_saveImg;
    QWidget *tb_rviz;
    QTabWidget *tbw_sub;
    QWidget *tab_con;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gb_connections;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lb_ipAdd;
    QLineEdit *li_ipAdd;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lb_ipPort;
    QLineEdit *li_ipPort;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *bt_connectR;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt_saveUrl;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *statusColor;
    QLabel *lb_statusSig;
    QLabel *lb_status;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lb_localIp;
    QLineEdit *li_localIpShow;
    QGroupBox *gb_topicLists;
    QPushButton *bt_refreshTopicsLists;
    QListWidget *lt_topics;
    QWidget *tab_image;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *li_saveNameRule;
    QPushButton *bt_setSaveNameRule;
    QTextBrowser *tb_chooseSaveDir;
    QPushButton *bt_chooseSaveDir;
    QWidget *tab_cv;
    QGroupBox *gb_imagePro;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *cb_2gray;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QComboBox *comba_2binary_type;
    QLabel *lb_2binary_threshold;
    QDoubleSpinBox *sb_2binary_threshold;
    QSlider *hs_2binary_threshold;
    QLabel *lb_2binary_maxval;
    QDoubleSpinBox *sb_2binary_maxval;
    QSlider *hs_2binary_maxval;
    QCheckBox *cb_2binary;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *cb_2canny;
    QGridLayout *gridLayout_2;
    QLabel *lb_2canny_ht;
    QLabel *lb_2canny_ks;
    QSlider *hs_2canny_ht;
    QDoubleSpinBox *sb_2canny_ht;
    QLabel *lb_2canny_lt;
    QDoubleSpinBox *sb_2canny_lt;
    QSlider *hs_2canny_lt;
    QComboBox *comba_2canny_ks;
    QCheckBox *cb_enhancement;
    QCheckBox *cb_laplacian;
    QCheckBox *cb_decompressed;
    QWidget *tab_map;
    QGroupBox *gb_baseInfo;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *lb_x;
    QLabel *lb_y;
    QLineEdit *li_y;
    QLabel *lb_z;
    QLineEdit *li_z;
    QLineEdit *li_x;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget5;
    QFormLayout *formLayout_2;
    QLabel *lb_temperature;
    QLineEdit *li_temperature;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QLabel *lb_line_x;
    QLineEdit *li_line_x;
    QLabel *lb_line_y;
    QLineEdit *li_line_y;
    QLabel *lb_line_z;
    QLineEdit *li_line_z;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_4;
    QLabel *lb_angel_x;
    QLineEdit *li_angle_x;
    QLabel *lb_angel_y;
    QLineEdit *li_angle_y;
    QLabel *lb_angel_z;
    QLineEdit *li_angle_z;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_9;
    QTextBrowser *tx_showInfo_terminal;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *li_Terminal;
    QPushButton *bt_run;
    QPushButton *bt_clearRun;
    QWidget *tab_2;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_8;
    QTextBrowser *tx_showInfo;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *li_sendM;
    QPushButton *bt_sendM;
    QPushButton *bt_clearSendM;
    QWidget *tab_runData;
    QMenuBar *menubar;
    QMenu *menutools;
    QMenu *menutools_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1177, 790);
        actionSerialTools = new QAction(MainWindow);
        actionSerialTools->setObjectName(QString::fromUtf8("actionSerialTools"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        authersaid = new QLabel(centralwidget);
        authersaid->setObjectName(QString::fromUtf8("authersaid"));
        authersaid->setEnabled(false);
        authersaid->setGeometry(QRect(840, 720, 321, 20));
        authersaid->setText(QString::fromUtf8("reserved by gujunwei email:jerrygu.gjw@gmail.com"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_7 = new QVBoxLayout(layoutWidget1);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1171, 741));
        tabWidget->setTabPosition(QTabWidget::South);
        tb_base = new QWidget();
        tb_base->setObjectName(QString::fromUtf8("tb_base"));
        tbw_main = new QTabWidget(tb_base);
        tbw_main->setObjectName(QString::fromUtf8("tbw_main"));
        tbw_main->setGeometry(QRect(10, 10, 611, 411));
        tbw_main->setTabPosition(QTabWidget::West);
        tb_camera = new QWidget();
        tb_camera->setObjectName(QString::fromUtf8("tb_camera"));
        lb_camImage = new QLabel(tb_camera);
        lb_camImage->setObjectName(QString::fromUtf8("lb_camImage"));
        lb_camImage->setGeometry(QRect(0, 0, 581, 371));
        lb_camImage->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        lb_camImage->setLineWidth(0);
        lb_camImage->setAlignment(Qt::AlignCenter);
        layoutWidget_2 = new QWidget(tb_camera);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 370, 581, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        comba_imageTopics = new QComboBox(layoutWidget_2);
        comba_imageTopics->setObjectName(QString::fromUtf8("comba_imageTopics"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comba_imageTopics->sizePolicy().hasHeightForWidth());
        comba_imageTopics->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(comba_imageTopics);

        bt_playCam = new QPushButton(layoutWidget_2);
        bt_playCam->setObjectName(QString::fromUtf8("bt_playCam"));
        bt_playCam->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bt_playCam->sizePolicy().hasHeightForWidth());
        bt_playCam->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(bt_playCam);

        bt_saveImg = new QPushButton(layoutWidget_2);
        bt_saveImg->setObjectName(QString::fromUtf8("bt_saveImg"));
        bt_saveImg->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bt_saveImg->sizePolicy().hasHeightForWidth());
        bt_saveImg->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(bt_saveImg);

        tbw_main->addTab(tb_camera, QString());
        tb_rviz = new QWidget();
        tb_rviz->setObjectName(QString::fromUtf8("tb_rviz"));
        tbw_main->addTab(tb_rviz, QString());
        tbw_sub = new QTabWidget(tb_base);
        tbw_sub->setObjectName(QString::fromUtf8("tbw_sub"));
        tbw_sub->setEnabled(true);
        tbw_sub->setGeometry(QRect(640, 10, 531, 411));
        tbw_sub->setTabPosition(QTabWidget::East);
        tab_con = new QWidget();
        tab_con->setObjectName(QString::fromUtf8("tab_con"));
        layoutWidget2 = new QWidget(tab_con);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 20, 461, 371));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gb_connections = new QGroupBox(layoutWidget2);
        gb_connections->setObjectName(QString::fromUtf8("gb_connections"));
        layoutWidget3 = new QWidget(gb_connections);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 30, 401, 101));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lb_ipAdd = new QLabel(layoutWidget3);
        lb_ipAdd->setObjectName(QString::fromUtf8("lb_ipAdd"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lb_ipAdd->sizePolicy().hasHeightForWidth());
        lb_ipAdd->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(lb_ipAdd);

        li_ipAdd = new QLineEdit(layoutWidget3);
        li_ipAdd->setObjectName(QString::fromUtf8("li_ipAdd"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(li_ipAdd->sizePolicy().hasHeightForWidth());
        li_ipAdd->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(li_ipAdd);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        lb_ipPort = new QLabel(layoutWidget3);
        lb_ipPort->setObjectName(QString::fromUtf8("lb_ipPort"));
        sizePolicy.setHeightForWidth(lb_ipPort->sizePolicy().hasHeightForWidth());
        lb_ipPort->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(lb_ipPort);

        li_ipPort = new QLineEdit(layoutWidget3);
        li_ipPort->setObjectName(QString::fromUtf8("li_ipPort"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(li_ipPort->sizePolicy().hasHeightForWidth());
        li_ipPort->setSizePolicy(sizePolicy5);
        li_ipPort->setMaximumSize(QSize(51, 16777215));

        horizontalLayout_4->addWidget(li_ipPort);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        bt_connectR = new QPushButton(layoutWidget3);
        bt_connectR->setObjectName(QString::fromUtf8("bt_connectR"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(bt_connectR->sizePolicy().hasHeightForWidth());
        bt_connectR->setSizePolicy(sizePolicy6);
        bt_connectR->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(bt_connectR);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bt_saveUrl = new QPushButton(layoutWidget3);
        bt_saveUrl->setObjectName(QString::fromUtf8("bt_saveUrl"));
        sizePolicy6.setHeightForWidth(bt_saveUrl->sizePolicy().hasHeightForWidth());
        bt_saveUrl->setSizePolicy(sizePolicy6);
        bt_saveUrl->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(bt_saveUrl);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        statusColor = new QLabel(layoutWidget3);
        statusColor->setObjectName(QString::fromUtf8("statusColor"));
        statusColor->setMaximumSize(QSize(10, 10));
        statusColor->setStyleSheet(QString::fromUtf8("background-color:rgb(164, 0, 0)"));

        horizontalLayout_3->addWidget(statusColor);

        lb_statusSig = new QLabel(layoutWidget3);
        lb_statusSig->setObjectName(QString::fromUtf8("lb_statusSig"));

        horizontalLayout_3->addWidget(lb_statusSig);

        lb_status = new QLabel(layoutWidget3);
        lb_status->setObjectName(QString::fromUtf8("lb_status"));

        horizontalLayout_3->addWidget(lb_status);


        horizontalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lb_localIp = new QLabel(layoutWidget3);
        lb_localIp->setObjectName(QString::fromUtf8("lb_localIp"));
        lb_localIp->setMaximumSize(QSize(65, 16777215));

        horizontalLayout_6->addWidget(lb_localIp);

        li_localIpShow = new QLineEdit(layoutWidget3);
        li_localIpShow->setObjectName(QString::fromUtf8("li_localIpShow"));
        li_localIpShow->setEnabled(false);

        horizontalLayout_6->addWidget(li_localIpShow);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_7);

        gb_topicLists = new QGroupBox(gb_connections);
        gb_topicLists->setObjectName(QString::fromUtf8("gb_topicLists"));
        gb_topicLists->setGeometry(QRect(0, 140, 459, 221));
        bt_refreshTopicsLists = new QPushButton(gb_topicLists);
        bt_refreshTopicsLists->setObjectName(QString::fromUtf8("bt_refreshTopicsLists"));
        bt_refreshTopicsLists->setGeometry(QRect(400, 0, 61, 21));
        lt_topics = new QListWidget(gb_topicLists);
        lt_topics->setObjectName(QString::fromUtf8("lt_topics"));
        lt_topics->setGeometry(QRect(0, 20, 461, 211));

        verticalLayout_2->addWidget(gb_connections);

        tbw_sub->addTab(tab_con, QString());
        tab_image = new QWidget();
        tab_image->setObjectName(QString::fromUtf8("tab_image"));
        layoutWidget_3 = new QWidget(tab_image);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 10, 481, 31));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        li_saveNameRule = new QLineEdit(layoutWidget_3);
        li_saveNameRule->setObjectName(QString::fromUtf8("li_saveNameRule"));
        sizePolicy6.setHeightForWidth(li_saveNameRule->sizePolicy().hasHeightForWidth());
        li_saveNameRule->setSizePolicy(sizePolicy6);

        horizontalLayout_8->addWidget(li_saveNameRule);

        bt_setSaveNameRule = new QPushButton(layoutWidget_3);
        bt_setSaveNameRule->setObjectName(QString::fromUtf8("bt_setSaveNameRule"));
        bt_setSaveNameRule->setEnabled(true);
        sizePolicy6.setHeightForWidth(bt_setSaveNameRule->sizePolicy().hasHeightForWidth());
        bt_setSaveNameRule->setSizePolicy(sizePolicy6);

        horizontalLayout_8->addWidget(bt_setSaveNameRule);

        tb_chooseSaveDir = new QTextBrowser(layoutWidget_3);
        tb_chooseSaveDir->setObjectName(QString::fromUtf8("tb_chooseSaveDir"));
        tb_chooseSaveDir->setEnabled(true);
        sizePolicy4.setHeightForWidth(tb_chooseSaveDir->sizePolicy().hasHeightForWidth());
        tb_chooseSaveDir->setSizePolicy(sizePolicy4);
        tb_chooseSaveDir->setMaximumSize(QSize(16777215, 27));

        horizontalLayout_8->addWidget(tb_chooseSaveDir);

        bt_chooseSaveDir = new QPushButton(layoutWidget_3);
        bt_chooseSaveDir->setObjectName(QString::fromUtf8("bt_chooseSaveDir"));
        bt_chooseSaveDir->setEnabled(true);
        sizePolicy6.setHeightForWidth(bt_chooseSaveDir->sizePolicy().hasHeightForWidth());
        bt_chooseSaveDir->setSizePolicy(sizePolicy6);

        horizontalLayout_8->addWidget(bt_chooseSaveDir);

        tbw_sub->addTab(tab_image, QString());
        tab_cv = new QWidget();
        tab_cv->setObjectName(QString::fromUtf8("tab_cv"));
        gb_imagePro = new QGroupBox(tab_cv);
        gb_imagePro->setObjectName(QString::fromUtf8("gb_imagePro"));
        gb_imagePro->setGeometry(QRect(0, 0, 501, 401));
        layoutWidget4 = new QWidget(gb_imagePro);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 20, 321, 283));
        verticalLayout_5 = new QVBoxLayout(layoutWidget4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        cb_2gray = new QCheckBox(layoutWidget4);
        cb_2gray->setObjectName(QString::fromUtf8("cb_2gray"));

        horizontalLayout_9->addWidget(cb_2gray);


        verticalLayout_5->addLayout(horizontalLayout_9);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comba_2binary_type = new QComboBox(layoutWidget4);
        comba_2binary_type->addItem(QString());
        comba_2binary_type->addItem(QString());
        comba_2binary_type->addItem(QString());
        comba_2binary_type->addItem(QString());
        comba_2binary_type->addItem(QString());
        comba_2binary_type->addItem(QString());
        comba_2binary_type->setObjectName(QString::fromUtf8("comba_2binary_type"));

        gridLayout->addWidget(comba_2binary_type, 1, 0, 1, 3);

        lb_2binary_threshold = new QLabel(layoutWidget4);
        lb_2binary_threshold->setObjectName(QString::fromUtf8("lb_2binary_threshold"));
        sizePolicy3.setHeightForWidth(lb_2binary_threshold->sizePolicy().hasHeightForWidth());
        lb_2binary_threshold->setSizePolicy(sizePolicy3);
        lb_2binary_threshold->setMaximumSize(QSize(70, 16777215));
        lb_2binary_threshold->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_2binary_threshold, 2, 0, 1, 1);

        sb_2binary_threshold = new QDoubleSpinBox(layoutWidget4);
        sb_2binary_threshold->setObjectName(QString::fromUtf8("sb_2binary_threshold"));
        sb_2binary_threshold->setMinimumSize(QSize(50, 0));
        sb_2binary_threshold->setMaximumSize(QSize(50, 16777215));
        sb_2binary_threshold->setDecimals(2);
        sb_2binary_threshold->setMinimum(0.000000000000000);
        sb_2binary_threshold->setMaximum(255.000000000000000);
        sb_2binary_threshold->setValue(100.000000000000000);

        gridLayout->addWidget(sb_2binary_threshold, 2, 1, 1, 1);

        hs_2binary_threshold = new QSlider(layoutWidget4);
        hs_2binary_threshold->setObjectName(QString::fromUtf8("hs_2binary_threshold"));
        sizePolicy4.setHeightForWidth(hs_2binary_threshold->sizePolicy().hasHeightForWidth());
        hs_2binary_threshold->setSizePolicy(sizePolicy4);
        hs_2binary_threshold->setMaximum(255);
        hs_2binary_threshold->setValue(100);
        hs_2binary_threshold->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hs_2binary_threshold, 2, 2, 1, 1);

        lb_2binary_maxval = new QLabel(layoutWidget4);
        lb_2binary_maxval->setObjectName(QString::fromUtf8("lb_2binary_maxval"));
        sizePolicy1.setHeightForWidth(lb_2binary_maxval->sizePolicy().hasHeightForWidth());
        lb_2binary_maxval->setSizePolicy(sizePolicy1);
        lb_2binary_maxval->setMaximumSize(QSize(70, 16777215));
        lb_2binary_maxval->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_2binary_maxval, 3, 0, 1, 1);

        sb_2binary_maxval = new QDoubleSpinBox(layoutWidget4);
        sb_2binary_maxval->setObjectName(QString::fromUtf8("sb_2binary_maxval"));
        sb_2binary_maxval->setMaximumSize(QSize(50, 16777215));
        sb_2binary_maxval->setMaximum(255.000000000000000);
        sb_2binary_maxval->setValue(255.000000000000000);

        gridLayout->addWidget(sb_2binary_maxval, 3, 1, 1, 1);

        hs_2binary_maxval = new QSlider(layoutWidget4);
        hs_2binary_maxval->setObjectName(QString::fromUtf8("hs_2binary_maxval"));
        sizePolicy4.setHeightForWidth(hs_2binary_maxval->sizePolicy().hasHeightForWidth());
        hs_2binary_maxval->setSizePolicy(sizePolicy4);
        hs_2binary_maxval->setMaximum(255);
        hs_2binary_maxval->setValue(255);
        hs_2binary_maxval->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hs_2binary_maxval, 3, 2, 1, 1);

        cb_2binary = new QCheckBox(layoutWidget4);
        cb_2binary->setObjectName(QString::fromUtf8("cb_2binary"));

        gridLayout->addWidget(cb_2binary, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        cb_2canny = new QCheckBox(layoutWidget4);
        cb_2canny->setObjectName(QString::fromUtf8("cb_2canny"));

        verticalLayout_4->addWidget(cb_2canny);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        lb_2canny_ht = new QLabel(layoutWidget4);
        lb_2canny_ht->setObjectName(QString::fromUtf8("lb_2canny_ht"));
        sizePolicy3.setHeightForWidth(lb_2canny_ht->sizePolicy().hasHeightForWidth());
        lb_2canny_ht->setSizePolicy(sizePolicy3);
        lb_2canny_ht->setMinimumSize(QSize(70, 0));
        lb_2canny_ht->setMaximumSize(QSize(70, 16777215));
        lb_2canny_ht->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_2canny_ht, 1, 0, 1, 1);

        lb_2canny_ks = new QLabel(layoutWidget4);
        lb_2canny_ks->setObjectName(QString::fromUtf8("lb_2canny_ks"));
        sizePolicy1.setHeightForWidth(lb_2canny_ks->sizePolicy().hasHeightForWidth());
        lb_2canny_ks->setSizePolicy(sizePolicy1);
        lb_2canny_ks->setMinimumSize(QSize(70, 0));
        lb_2canny_ks->setMaximumSize(QSize(70, 16777215));
        lb_2canny_ks->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_2canny_ks, 2, 0, 1, 1);

        hs_2canny_ht = new QSlider(layoutWidget4);
        hs_2canny_ht->setObjectName(QString::fromUtf8("hs_2canny_ht"));
        sizePolicy4.setHeightForWidth(hs_2canny_ht->sizePolicy().hasHeightForWidth());
        hs_2canny_ht->setSizePolicy(sizePolicy4);
        hs_2canny_ht->setMaximum(255);
        hs_2canny_ht->setValue(100);
        hs_2canny_ht->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(hs_2canny_ht, 1, 2, 1, 1);

        sb_2canny_ht = new QDoubleSpinBox(layoutWidget4);
        sb_2canny_ht->setObjectName(QString::fromUtf8("sb_2canny_ht"));
        sb_2canny_ht->setMinimumSize(QSize(50, 0));
        sb_2canny_ht->setMaximumSize(QSize(50, 16777215));
        sb_2canny_ht->setDecimals(2);
        sb_2canny_ht->setMinimum(0.000000000000000);
        sb_2canny_ht->setMaximum(255.000000000000000);
        sb_2canny_ht->setValue(100.000000000000000);

        gridLayout_2->addWidget(sb_2canny_ht, 1, 1, 1, 1);

        lb_2canny_lt = new QLabel(layoutWidget4);
        lb_2canny_lt->setObjectName(QString::fromUtf8("lb_2canny_lt"));
        sizePolicy3.setHeightForWidth(lb_2canny_lt->sizePolicy().hasHeightForWidth());
        lb_2canny_lt->setSizePolicy(sizePolicy3);
        lb_2canny_lt->setMaximumSize(QSize(70, 16777215));
        lb_2canny_lt->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_2canny_lt, 0, 0, 1, 1);

        sb_2canny_lt = new QDoubleSpinBox(layoutWidget4);
        sb_2canny_lt->setObjectName(QString::fromUtf8("sb_2canny_lt"));
        sb_2canny_lt->setMinimumSize(QSize(50, 0));
        sb_2canny_lt->setMaximumSize(QSize(50, 16777215));
        sb_2canny_lt->setDecimals(2);
        sb_2canny_lt->setMinimum(0.000000000000000);
        sb_2canny_lt->setMaximum(255.000000000000000);
        sb_2canny_lt->setValue(10.000000000000000);

        gridLayout_2->addWidget(sb_2canny_lt, 0, 1, 1, 1);

        hs_2canny_lt = new QSlider(layoutWidget4);
        hs_2canny_lt->setObjectName(QString::fromUtf8("hs_2canny_lt"));
        sizePolicy4.setHeightForWidth(hs_2canny_lt->sizePolicy().hasHeightForWidth());
        hs_2canny_lt->setSizePolicy(sizePolicy4);
        hs_2canny_lt->setMaximum(255);
        hs_2canny_lt->setValue(10);
        hs_2canny_lt->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(hs_2canny_lt, 0, 2, 1, 1);

        comba_2canny_ks = new QComboBox(layoutWidget4);
        comba_2canny_ks->addItem(QString());
        comba_2canny_ks->addItem(QString());
        comba_2canny_ks->addItem(QString());
        comba_2canny_ks->setObjectName(QString::fromUtf8("comba_2canny_ks"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(comba_2canny_ks->sizePolicy().hasHeightForWidth());
        comba_2canny_ks->setSizePolicy(sizePolicy7);
        comba_2canny_ks->setMinimumSize(QSize(50, 0));
        comba_2canny_ks->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(comba_2canny_ks, 2, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);


        verticalLayout_5->addLayout(verticalLayout_4);

        cb_enhancement = new QCheckBox(gb_imagePro);
        cb_enhancement->setObjectName(QString::fromUtf8("cb_enhancement"));
        cb_enhancement->setGeometry(QRect(360, 30, 101, 23));
        cb_laplacian = new QCheckBox(gb_imagePro);
        cb_laplacian->setObjectName(QString::fromUtf8("cb_laplacian"));
        cb_laplacian->setGeometry(QRect(360, 60, 101, 23));
        cb_decompressed = new QCheckBox(gb_imagePro);
        cb_decompressed->setObjectName(QString::fromUtf8("cb_decompressed"));
        cb_decompressed->setGeometry(QRect(10, 320, 121, 23));
        tbw_sub->addTab(tab_cv, QString());
        tab_map = new QWidget();
        tab_map->setObjectName(QString::fromUtf8("tab_map"));
        tbw_sub->addTab(tab_map, QString());
        gb_baseInfo = new QGroupBox(tb_base);
        gb_baseInfo->setObjectName(QString::fromUtf8("gb_baseInfo"));
        gb_baseInfo->setGeometry(QRect(640, 440, 501, 261));
        groupBox = new QGroupBox(gb_baseInfo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 20, 151, 131));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lb_x = new QLabel(groupBox);
        lb_x->setObjectName(QString::fromUtf8("lb_x"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lb_x);

        lb_y = new QLabel(groupBox);
        lb_y->setObjectName(QString::fromUtf8("lb_y"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lb_y);

        li_y = new QLineEdit(groupBox);
        li_y->setObjectName(QString::fromUtf8("li_y"));
        li_y->setEnabled(true);
        li_y->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, li_y);

        lb_z = new QLabel(groupBox);
        lb_z->setObjectName(QString::fromUtf8("lb_z"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lb_z);

        li_z = new QLineEdit(groupBox);
        li_z->setObjectName(QString::fromUtf8("li_z"));
        li_z->setEnabled(true);
        li_z->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, li_z);

        li_x = new QLineEdit(groupBox);
        li_x->setObjectName(QString::fromUtf8("li_x"));
        li_x->setEnabled(true);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        li_x->setFont(font);
        li_x->setStyleSheet(QString::fromUtf8(""));
        li_x->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, li_x);

        groupBox_2 = new QGroupBox(gb_baseInfo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 150, 141, 80));
        layoutWidget5 = new QWidget(groupBox_2);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 40, 131, 27));
        formLayout_2 = new QFormLayout(layoutWidget5);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        lb_temperature = new QLabel(layoutWidget5);
        lb_temperature->setObjectName(QString::fromUtf8("lb_temperature"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, lb_temperature);

        li_temperature = new QLineEdit(layoutWidget5);
        li_temperature->setObjectName(QString::fromUtf8("li_temperature"));
        li_temperature->setEnabled(true);
        li_temperature->setDragEnabled(true);
        li_temperature->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, li_temperature);

        groupBox_3 = new QGroupBox(gb_baseInfo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(150, 20, 151, 131));
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        lb_line_x = new QLabel(groupBox_3);
        lb_line_x->setObjectName(QString::fromUtf8("lb_line_x"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, lb_line_x);

        li_line_x = new QLineEdit(groupBox_3);
        li_line_x->setObjectName(QString::fromUtf8("li_line_x"));
        li_line_x->setEnabled(true);
        li_line_x->setReadOnly(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, li_line_x);

        lb_line_y = new QLabel(groupBox_3);
        lb_line_y->setObjectName(QString::fromUtf8("lb_line_y"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, lb_line_y);

        li_line_y = new QLineEdit(groupBox_3);
        li_line_y->setObjectName(QString::fromUtf8("li_line_y"));
        li_line_y->setEnabled(true);
        li_line_y->setReadOnly(true);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, li_line_y);

        lb_line_z = new QLabel(groupBox_3);
        lb_line_z->setObjectName(QString::fromUtf8("lb_line_z"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, lb_line_z);

        li_line_z = new QLineEdit(groupBox_3);
        li_line_z->setObjectName(QString::fromUtf8("li_line_z"));
        li_line_z->setEnabled(true);
        li_line_z->setReadOnly(true);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, li_line_z);

        groupBox_4 = new QGroupBox(gb_baseInfo);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(300, 20, 151, 131));
        formLayout_4 = new QFormLayout(groupBox_4);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        lb_angel_x = new QLabel(groupBox_4);
        lb_angel_x->setObjectName(QString::fromUtf8("lb_angel_x"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, lb_angel_x);

        li_angle_x = new QLineEdit(groupBox_4);
        li_angle_x->setObjectName(QString::fromUtf8("li_angle_x"));
        li_angle_x->setEnabled(true);
        li_angle_x->setReadOnly(true);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, li_angle_x);

        lb_angel_y = new QLabel(groupBox_4);
        lb_angel_y->setObjectName(QString::fromUtf8("lb_angel_y"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, lb_angel_y);

        li_angle_y = new QLineEdit(groupBox_4);
        li_angle_y->setObjectName(QString::fromUtf8("li_angle_y"));
        li_angle_y->setEnabled(true);
        li_angle_y->setReadOnly(true);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, li_angle_y);

        lb_angel_z = new QLabel(groupBox_4);
        lb_angel_z->setObjectName(QString::fromUtf8("lb_angel_z"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, lb_angel_z);

        li_angle_z = new QLineEdit(groupBox_4);
        li_angle_z->setObjectName(QString::fromUtf8("li_angle_z"));
        li_angle_z->setEnabled(true);
        li_angle_z->setReadOnly(true);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, li_angle_z);

        tabWidget_2 = new QTabWidget(tb_base);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 430, 611, 271));
        tabWidget_2->setTabPosition(QTabWidget::West);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget_4 = new QWidget(tab);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(0, 0, 581, 261));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        tx_showInfo_terminal = new QTextBrowser(layoutWidget_4);
        tx_showInfo_terminal->setObjectName(QString::fromUtf8("tx_showInfo_terminal"));
        tx_showInfo_terminal->setMouseTracking(false);
        tx_showInfo_terminal->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_9->addWidget(tx_showInfo_terminal);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setSizeConstraint(QLayout::SetMaximumSize);
        li_Terminal = new QLineEdit(layoutWidget_4);
        li_Terminal->setObjectName(QString::fromUtf8("li_Terminal"));

        horizontalLayout_10->addWidget(li_Terminal);

        bt_run = new QPushButton(layoutWidget_4);
        bt_run->setObjectName(QString::fromUtf8("bt_run"));
        bt_run->setEnabled(true);

        horizontalLayout_10->addWidget(bt_run);

        bt_clearRun = new QPushButton(layoutWidget_4);
        bt_clearRun->setObjectName(QString::fromUtf8("bt_clearRun"));

        horizontalLayout_10->addWidget(bt_clearRun);


        verticalLayout_9->addLayout(horizontalLayout_10);

        tabWidget_2->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget6 = new QWidget(tab_2);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(0, 0, 551, 261));
        verticalLayout_8 = new QVBoxLayout(layoutWidget6);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        tx_showInfo = new QTextBrowser(layoutWidget6);
        tx_showInfo->setObjectName(QString::fromUtf8("tx_showInfo"));

        verticalLayout_8->addWidget(tx_showInfo);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        li_sendM = new QLineEdit(layoutWidget6);
        li_sendM->setObjectName(QString::fromUtf8("li_sendM"));

        horizontalLayout_2->addWidget(li_sendM);

        bt_sendM = new QPushButton(layoutWidget6);
        bt_sendM->setObjectName(QString::fromUtf8("bt_sendM"));
        bt_sendM->setEnabled(false);

        horizontalLayout_2->addWidget(bt_sendM);

        bt_clearSendM = new QPushButton(layoutWidget6);
        bt_clearSendM->setObjectName(QString::fromUtf8("bt_clearSendM"));

        horizontalLayout_2->addWidget(bt_clearSendM);


        verticalLayout_8->addLayout(horizontalLayout_2);

        tabWidget_2->addTab(tab_2, QString());
        tabWidget->addTab(tb_base, QString());
        tab_runData = new QWidget();
        tab_runData->setObjectName(QString::fromUtf8("tab_runData"));
        tabWidget->addTab(tab_runData, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1177, 22));
        menutools = new QMenu(menubar);
        menutools->setObjectName(QString::fromUtf8("menutools"));
        menutools_2 = new QMenu(menubar);
        menutools_2->setObjectName(QString::fromUtf8("menutools_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menutools->menuAction());
        menubar->addAction(menutools_2->menuAction());
        menutools_2->addAction(actionSerialTools);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tbw_main->setCurrentIndex(0);
        comba_imageTopics->setCurrentIndex(-1);
        tbw_sub->setCurrentIndex(0);
        comba_2binary_type->setCurrentIndex(0);
        comba_2canny_ks->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "NICar", nullptr));
        actionSerialTools->setText(QApplication::translate("MainWindow", "SerialTools", nullptr));
        lb_camImage->setText(QApplication::translate("MainWindow", "NO SIGNAL", nullptr));
        comba_imageTopics->setCurrentText(QString());
        bt_playCam->setText(QApplication::translate("MainWindow", "Play", nullptr));
        bt_saveImg->setText(QApplication::translate("MainWindow", "Save", nullptr));
        tbw_main->setTabText(tbw_main->indexOf(tb_camera), QApplication::translate("MainWindow", "Camera", nullptr));
        tbw_main->setTabText(tbw_main->indexOf(tb_rviz), QApplication::translate("MainWindow", "Rviz", nullptr));
        gb_connections->setTitle(QApplication::translate("MainWindow", "Ros_Master_URL", nullptr));
        lb_ipAdd->setText(QApplication::translate("MainWindow", "IP:", nullptr));
        li_ipAdd->setText(QString());
        li_ipAdd->setPlaceholderText(QString());
        lb_ipPort->setText(QApplication::translate("MainWindow", "Port:", nullptr));
        li_ipPort->setText(QString());
        li_ipPort->setPlaceholderText(QString());
        bt_connectR->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        bt_saveUrl->setText(QApplication::translate("MainWindow", "Save", nullptr));
        statusColor->setText(QString());
        lb_statusSig->setText(QApplication::translate("MainWindow", "Status:", nullptr));
        lb_status->setText(QApplication::translate("MainWindow", "Offline", nullptr));
        lb_localIp->setText(QApplication::translate("MainWindow", "Local IP:", nullptr));
        gb_topicLists->setTitle(QApplication::translate("MainWindow", "Topics", nullptr));
        bt_refreshTopicsLists->setText(QApplication::translate("MainWindow", "Refresh", nullptr));
        tbw_sub->setTabText(tbw_sub->indexOf(tab_con), QApplication::translate("MainWindow", "Connection", nullptr));
        li_saveNameRule->setPlaceholderText(QApplication::translate("MainWindow", "Pic Name Rule", nullptr));
        bt_setSaveNameRule->setText(QApplication::translate("MainWindow", "Set", nullptr));
        tb_chooseSaveDir->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tb_chooseSaveDir->setPlaceholderText(QApplication::translate("MainWindow", "Choose Save Dir", nullptr));
        bt_chooseSaveDir->setText(QApplication::translate("MainWindow", "Choose Dir", nullptr));
        tbw_sub->setTabText(tbw_sub->indexOf(tab_image), QApplication::translate("MainWindow", "Image", nullptr));
        gb_imagePro->setTitle(QApplication::translate("MainWindow", "Image Process", nullptr));
        cb_2gray->setText(QApplication::translate("MainWindow", "2Gray", nullptr));
        comba_2binary_type->setItemText(0, QApplication::translate("MainWindow", "CV_THRESH_BINARY", nullptr));
        comba_2binary_type->setItemText(1, QApplication::translate("MainWindow", "CV_THRESH_BINARY_INV", nullptr));
        comba_2binary_type->setItemText(2, QApplication::translate("MainWindow", "CV_THRESH_TRUNC", nullptr));
        comba_2binary_type->setItemText(3, QApplication::translate("MainWindow", "CV_THRESH_TOZERO", nullptr));
        comba_2binary_type->setItemText(4, QApplication::translate("MainWindow", "CV_THRESH_TOZERO_INV", nullptr));
        comba_2binary_type->setItemText(5, QApplication::translate("MainWindow", "CV_THRESH_OTSU", nullptr));

        comba_2binary_type->setCurrentText(QApplication::translate("MainWindow", "CV_THRESH_BINARY", nullptr));
        lb_2binary_threshold->setText(QApplication::translate("MainWindow", "Threshold", nullptr));
        lb_2binary_maxval->setText(QApplication::translate("MainWindow", "MaxValue", nullptr));
        cb_2binary->setText(QApplication::translate("MainWindow", "2Binary", nullptr));
        cb_2canny->setText(QApplication::translate("MainWindow", "2Canny", nullptr));
        lb_2canny_ht->setText(QApplication::translate("MainWindow", "High Thre", nullptr));
        lb_2canny_ks->setText(QApplication::translate("MainWindow", "Ker Size", nullptr));
        lb_2canny_lt->setText(QApplication::translate("MainWindow", "Low Thre", nullptr));
        comba_2canny_ks->setItemText(0, QApplication::translate("MainWindow", "3", nullptr));
        comba_2canny_ks->setItemText(1, QApplication::translate("MainWindow", "5", nullptr));
        comba_2canny_ks->setItemText(2, QApplication::translate("MainWindow", "7", nullptr));

        comba_2canny_ks->setCurrentText(QApplication::translate("MainWindow", "3", nullptr));
        cb_enhancement->setText(QApplication::translate("MainWindow", "NightBoost", nullptr));
        cb_laplacian->setText(QApplication::translate("MainWindow", "Laplacian", nullptr));
        cb_decompressed->setText(QApplication::translate("MainWindow", "Decompressed", nullptr));
        tbw_sub->setTabText(tbw_sub->indexOf(tab_cv), QApplication::translate("MainWindow", "CV", nullptr));
        tbw_sub->setTabText(tbw_sub->indexOf(tab_map), QApplication::translate("MainWindow", "Map", nullptr));
        gb_baseInfo->setTitle(QApplication::translate("MainWindow", "  NICar INFO", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\226\271\345\220\221", nullptr));
        lb_x->setText(QApplication::translate("MainWindow", "X :", nullptr));
        lb_y->setText(QApplication::translate("MainWindow", "Y :", nullptr));
        lb_z->setText(QApplication::translate("MainWindow", "Z :", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\270\251\345\272\246", nullptr));
        lb_temperature->setText(QApplication::translate("MainWindow", "T(C)  :", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\347\272\277\345\212\240\351\200\237\345\272\246", nullptr));
        lb_line_x->setText(QApplication::translate("MainWindow", "X :", nullptr));
        lb_line_y->setText(QApplication::translate("MainWindow", "Y :", nullptr));
        lb_line_z->setText(QApplication::translate("MainWindow", "Z :", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\350\247\222\351\200\237\345\272\246", nullptr));
        lb_angel_x->setText(QApplication::translate("MainWindow", "X :", nullptr));
        lb_angel_y->setText(QApplication::translate("MainWindow", "Y :", nullptr));
        lb_angel_z->setText(QApplication::translate("MainWindow", "Z :", nullptr));
        bt_run->setText(QApplication::translate("MainWindow", "Run", nullptr));
        bt_clearRun->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("MainWindow", "Terminal", nullptr));
        bt_sendM->setText(QApplication::translate("MainWindow", "Send", nullptr));
        bt_clearSendM->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("MainWindow", "Socket", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tb_base), QApplication::translate("MainWindow", "Base", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_runData), QApplication::translate("MainWindow", "Data", nullptr));
        menutools->setTitle(QApplication::translate("MainWindow", "files", nullptr));
        menutools_2->setTitle(QApplication::translate("MainWindow", "tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
