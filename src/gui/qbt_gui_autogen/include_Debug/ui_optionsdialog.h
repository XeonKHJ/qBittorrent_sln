/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/fspathedit.h"

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *hsplitter;
    QListWidget *tabSelection;
    QStackedWidget *tabOption;
    QWidget *tabBehaviorPage;
    QVBoxLayout *verticalLayout_10;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *UISettingsBox;
    QGridLayout *gridLayout_81;
    QGroupBox *checkUseCustomTheme;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_16;
    FileSystemPathLineEdit *customThemeFilePath;
    QSpacerItem *horizontalSpacer_111;
    QLabel *label_9;
    QCheckBox *checkUseSystemIcon;
    QComboBox *comboI18n;
    QLabel *label_15;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *confirmDeletion;
    QCheckBox *checkAltRowColors;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkHideZero;
    QComboBox *comboHideZero;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_14;
    QLabel *lblDlList_2;
    QComboBox *actionTorrentDlOnDblClBox;
    QLabel *lblUploadList;
    QComboBox *actionTorrentFnOnDblClBox;
    QSpacerItem *horizontalSpacer_12;
    QGroupBox *systrayBox;
    QVBoxLayout *verticalLayout_12;
    QCheckBox *checkStartup;
    QCheckBox *checkShowSplash;
    QCheckBox *checkStartMinimized;
    QCheckBox *checkProgramExitConfirm;
    QCheckBox *checkProgramAutoExitConfirm;
    QGroupBox *checkShowSystray;
    QVBoxLayout *verticalLayout_22;
    QCheckBox *checkMinimizeToSysTray;
    QCheckBox *checkCloseToSystray;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelTrayIconStyle;
    QComboBox *comboTrayIcon;
    QSpacerItem *horizontalSpacer_13;
    QGroupBox *groupFileAssociation;
    QVBoxLayout *verticalLayout_28;
    QCheckBox *checkAssociateTorrents;
    QCheckBox *checkAssociateMagnetLinks;
    QCheckBox *checkProgramUpdates;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_16;
    QCheckBox *checkPreventFromSuspendWhenDownloading;
    QCheckBox *checkPreventFromSuspendWhenSeeding;
    QGroupBox *checkFileLog;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    FileSystemPathLineEdit *textFileLogPath;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkFileLogBackup;
    QSpinBox *spinFileLogSize;
    QSpacerItem *horizontalSpacer_100;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkFileLogDelete;
    QSpinBox *spinFileLogAge;
    QComboBox *comboFileLogAgeType;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_4;
    QWidget *tabDownloadsPage;
    QVBoxLayout *verticalLayout_13;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *torrentAdditionBox;
    QVBoxLayout *torrentAdditionBoxLayout;
    QGroupBox *checkAdditionDialog;
    QVBoxLayout *verticalLayout_18;
    QCheckBox *checkAdditionDialogFront;
    QHBoxLayout *horizontalLayout_19;
    QLabel *contentLayoutLabel;
    QComboBox *contentLayoutComboBox;
    QSpacerItem *horizontalSpacer_20;
    QCheckBox *checkStartPaused;
    QGroupBox *deleteTorrentBox;
    QVBoxLayout *deleteTorrentBoxLayout;
    QCheckBox *deleteCancelledTorrentBox;
    QHBoxLayout *deleteTorrentWarningLayout;
    QLabel *deleteTorrentWarningIcon;
    QLabel *deleteTorrentWarningLabel;
    QCheckBox *checkPreallocateAll;
    QCheckBox *checkAppendqB;
    QCheckBox *checkRecursiveDownload;
    QGroupBox *groupSavingManagement;
    QVBoxLayout *groupSavingManagementLayout;
    QGridLayout *gridLayout_3;
    QLabel *label_40;
    QHBoxLayout *horizontalLayout_70;
    QComboBox *comboSavingMode;
    QSpacerItem *horizontalSpacer_160;
    QLabel *labelTorrentCategoryChanged;
    QHBoxLayout *horizontalLayout_14;
    QComboBox *comboTorrentCategoryChanged;
    QSpacerItem *horizontalSpacer_17;
    QLabel *labelCategoryDefaultPathChanged;
    QHBoxLayout *horizontalLayout_15;
    QComboBox *comboCategoryDefaultPathChanged;
    QSpacerItem *horizontalSpacer_18;
    QLabel *labelCategoryChanged;
    QHBoxLayout *horizontalLayout_17;
    QComboBox *comboCategoryChanged;
    QSpacerItem *horizontalSpacer_19;
    QCheckBox *checkUseSubcategories;
    QGridLayout *gridLayout_4;
    FileSystemPathLineEdit *textTempPath;
    QCheckBox *checkExportDirFin;
    QLabel *labelSavePath;
    QCheckBox *checkExportDir;
    QCheckBox *checkTempFolder;
    FileSystemPathLineEdit *textExportDirFin;
    FileSystemPathLineEdit *textSavePath;
    FileSystemPathLineEdit *textExportDir;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_38;
    QHBoxLayout *horizontalLayout_16;
    QTreeView *scanFoldersView;
    QVBoxLayout *verticalLayout_37;
    QPushButton *addWatchedFolderButton;
    QPushButton *editWatchedFolderButton;
    QPushButton *removeWatchedFolderButton;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupMailNotification;
    QVBoxLayout *verticalLayout_171;
    QGridLayout *gridLayout_9;
    QLineEdit *lineEditDestEmail;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditSmtpServer;
    QLineEdit *senderEmailTxt;
    QLabel *label_25;
    QCheckBox *checkSmtpSSL;
    QGroupBox *groupMailNotifAuth;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *mailNotifUsername;
    QLabel *label_8;
    QLineEdit *mailNotifPassword;
    QGroupBox *autoRunBox;
    QVBoxLayout *verticalLayout_19;
    QLineEdit *lineEditAutoRun;
    QCheckBox *autoRunConsole;
    QLabel *labelAutoRunParam;
    QWidget *tabConnectionPage;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_24;
    QComboBox *comboProtocol;
    QSpacerItem *horizontalSpacer_23;
    QGroupBox *ListeningPortBox;
    QVBoxLayout *listeningPortLayout;
    QHBoxLayout *listeningPortLayout2;
    QLabel *lbl_ports;
    QSpinBox *spinPort;
    QPushButton *randomButton;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *checkUPnP;
    QGroupBox *nbConnecBox;
    QGridLayout *gridLayout;
    QSpinBox *spinMaxUploadsPerTorrent;
    QCheckBox *checkMaxConnecsPerTorrent;
    QCheckBox *checkMaxConnecs;
    QSpinBox *spinMaxConnec;
    QSpinBox *spinMaxConnecPerTorrent;
    QCheckBox *checkMaxUploadsPerTorrent;
    QCheckBox *checkMaxUploads;
    QSpinBox *spinMaxUploads;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupProxy;
    QVBoxLayout *verticalLayout_29;
    QHBoxLayout *proxyTypeLayout;
    QLabel *ProxyType_lbl;
    QComboBox *comboProxyType;
    QLabel *lblProxyIP;
    QLineEdit *textProxyIP;
    QLabel *lblProxyPort;
    QSpinBox *spinProxyPort;
    QCheckBox *checkProxyPeerConnecs;
    QCheckBox *isProxyOnlyForTorrents;
    QGroupBox *checkProxyAuth;
    QVBoxLayout *verticalLayout_24;
    QGridLayout *gridLayout_12;
    QLabel *lblProxyUsername;
    QLineEdit *textProxyUsername;
    QLabel *lblProxyPassword;
    QLineEdit *textProxyPassword;
    QLabel *label_23;
    QGroupBox *groupIPFilter;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *checkIPFilter;
    FileSystemPathLineEdit *textFilterPath;
    QToolButton *IpFilterRefreshBtn;
    QPushButton *banListButton;
    QCheckBox *checkIpFilterTrackers;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabSpeedPage;
    QVBoxLayout *verticalLayout_34;
    QScrollArea *scrollArea_9;
    QWidget *scrollAreaWidgetContents_9;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *rateLimitBox;
    QGridLayout *rateLimitBoxLayout;
    QSpinBox *spinUploadLimit;
    QSpinBox *spinDownloadLimit;
    QLabel *labelGlobalRate;
    QSpacerItem *horizontalSpacer;
    QLabel *label_10;
    QLabel *label_11;
    QGroupBox *altRateLimitBox;
    QGridLayout *gridLayout_6;
    QSpinBox *spinDownloadLimitAlt;
    QLabel *labelAltRate;
    QGroupBox *groupBoxSchedule;
    QGridLayout *gridLayout_7;
    QLabel *label_6;
    QTimeEdit *timeEditScheduleTo;
    QLabel *label_17;
    QTimeEdit *timeEditScheduleFrom;
    QLabel *label_18;
    QComboBox *comboBoxScheduleDays;
    QSpacerItem *horizontalSpacer_8;
    QSpinBox *spinUploadLimitAlt;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_13;
    QLabel *label_14;
    QGroupBox *rateLimitsGroupBox;
    QVBoxLayout *verticalLayout_30;
    QCheckBox *checkLimituTPConnections;
    QCheckBox *checkLimitTransportOverhead;
    QCheckBox *checkLimitLocalPeerRate;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabBitTorrentPage;
    QVBoxLayout *verticalLayout_15;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *AddBTFeaturesBox;
    QVBoxLayout *verticalLayout_14;
    QCheckBox *checkDHT;
    QCheckBox *checkPeX;
    QCheckBox *checkLSD;
    QHBoxLayout *hboxLayout;
    QLabel *lbl_encryption;
    QComboBox *comboEncryption;
    QSpacerItem *spacerItem;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkAnonymousMode;
    QLabel *label_anonymous;
    QSpacerItem *horizontalSpacer_14;
    QGroupBox *checkEnableQueueing;
    QGridLayout *gridLayout_2;
    QLabel *label_max_active_dl;
    QSpinBox *spinMaxActiveDownloads;
    QLabel *label_max_active_up;
    QSpinBox *spinMaxActiveUploads;
    QLabel *maxActiveTorrents_lbl;
    QSpinBox *spinMaxActiveTorrents;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *checkIgnoreSlowTorrentsForQueueing;
    QGridLayout *gridLayout_13;
    QSpinBox *spinDownloadRateForSlowTorrents;
    QSpinBox *spinUploadRateForSlowTorrents;
    QLabel *labelUploadRateForSlowTorrents;
    QLabel *labelDownloadRateForSlowTorrents;
    QSpacerItem *horizontalSpacer_9;
    QSpinBox *spinSlowTorrentsInactivityTimer;
    QLabel *labelSlowTorrentInactivityTimer;
    QGroupBox *seedingLimitsBox;
    QGridLayout *gridLayout_91;
    QSpinBox *spinMaxSeedingMinutes;
    QCheckBox *checkMaxSeedingMinutes;
    QLabel *label;
    QComboBox *comboRatioLimitAct;
    QCheckBox *checkMaxRatio;
    QDoubleSpinBox *spinMaxRatio;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *checkEnableAddTrackers;
    QGridLayout *gridLayout_16;
    QPlainTextEdit *textTrackers;
    QSpacerItem *verticalSpacer_8;
    QWidget *tabRSSPage;
    QVBoxLayout *verticalLayout_25;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_27;
    QGroupBox *groupRSSReader;
    QVBoxLayout *verticalLayout_26;
    QCheckBox *checkRSSEnable;
    QGridLayout *gridLayout_5;
    QLabel *label_111;
    QSpinBox *spinRSSMaxArticlesPerFeed;
    QLabel *label_12;
    QSpinBox *spinRSSRefreshInterval;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupRSSAutoDownloader;
    QVBoxLayout *verticalLayout_21;
    QCheckBox *checkRSSAutoDownloaderEnable;
    QPushButton *btnEditRules;
    QGroupBox *groupRSSSmartEpisodeFilter;
    QVBoxLayout *verticalLayout_31;
    QCheckBox *checkSmartFilterDownloadRepacks;
    QLabel *label_5;
    QPlainTextEdit *textSmartEpisodeFilters;
    QSpacerItem *verticalSpacer_5;
    QWidget *tabWebuiPage;
    QVBoxLayout *tabWebuiPageLayout;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_23;
    QGroupBox *checkWebUi;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblWebUiAddress;
    QLineEdit *textWebUiAddress;
    QLabel *lblWebUiPort;
    QSpinBox *spinWebUiPort;
    QCheckBox *checkWebUIUPnP;
    QGroupBox *checkWebUiHttps;
    QGridLayout *gridLayout_11;
    QLabel *lblWebUiKey;
    QLabel *lblWebUiCrt;
    QLabel *lblSslCertStatus;
    QLabel *lblSslKeyStatus;
    QLabel *lblWebUIInfo;
    FileSystemPathLineEdit *textWebUIHttpsCert;
    FileSystemPathLineEdit *textWebUIHttpsKey;
    QGroupBox *groupWebUiAuth;
    QVBoxLayout *verticalLayout_35;
    QGridLayout *gridLayout_8;
    QLabel *lblWebUiUsername;
    QLineEdit *textWebUiUsername;
    QLabel *lblWebUiPassword;
    QLineEdit *textWebUiPassword;
    QCheckBox *checkBypassLocalAuth;
    QCheckBox *checkBypassAuthSubnetWhitelist;
    QPushButton *IPSubnetWhitelistButton;
    QGridLayout *gridLayout_10;
    QLabel *lblBanCounter;
    QSpacerItem *horizontalSpacer_15;
    QSpinBox *spinBanCounter;
    QLabel *lblBanDuration;
    QSpinBox *spinBanDuration;
    QHBoxLayout *horizontalLayout_13;
    QLabel *lblSessionTimeout;
    QSpinBox *spinSessionTimeout;
    QSpacerItem *horizontalSpacer_11;
    QGroupBox *groupAltWebUI;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelWebUIRootFolder;
    FileSystemPathLineEdit *textWebUIRootFolder;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_33;
    QCheckBox *checkClickjacking;
    QCheckBox *checkCSRFProtection;
    QCheckBox *checkSecureCookie;
    QGroupBox *groupHostHeaderValidation;
    QVBoxLayout *verticalLayout_32;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelServerDomains;
    QLineEdit *textServerDomains;
    QGroupBox *groupWebUIAddCustomHTTPHeaders;
    QVBoxLayout *verticalLayout_8;
    QPlainTextEdit *textWebUICustomHTTPHeaders;
    QGroupBox *groupEnableReverseProxySupport;
    QVBoxLayout *verticalLayout_331;
    QHBoxLayout *horizontalLayout_131;
    QLabel *lblReverseProxiesList;
    QLineEdit *textTrustedReverseProxiesList;
    QGroupBox *checkDynDNS;
    QFormLayout *formLayout_5;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboDNSService;
    QPushButton *registerDNSBtn;
    QLabel *label_20;
    QLineEdit *domainNameTxt;
    QLabel *label_21;
    QLineEdit *DNSUsernameTxt;
    QLabel *label_22;
    QLineEdit *DNSPasswordTxt;
    QSpacerItem *verticalSpacer;
    QWidget *tabAdvancedPage;
    QVBoxLayout *advPageLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QString::fromUtf8("OptionsDialog"));
        OptionsDialog->resize(779, 591);
        verticalLayout_3 = new QVBoxLayout(OptionsDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        hsplitter = new QSplitter(OptionsDialog);
        hsplitter->setObjectName(QString::fromUtf8("hsplitter"));
        hsplitter->setOrientation(Qt::Horizontal);
        hsplitter->setChildrenCollapsible(false);
        tabSelection = new QListWidget(hsplitter);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        new QListWidgetItem(tabSelection);
        tabSelection->setObjectName(QString::fromUtf8("tabSelection"));
        tabSelection->setLayoutDirection(Qt::LeftToRight);
        tabSelection->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabSelection->setMovement(QListView::Static);
        tabSelection->setFlow(QListView::TopToBottom);
        tabSelection->setProperty("isWrapping", QVariant(false));
        tabSelection->setResizeMode(QListView::Adjust);
        tabSelection->setViewMode(QListView::IconMode);
        hsplitter->addWidget(tabSelection);
        tabOption = new QStackedWidget(hsplitter);
        tabOption->setObjectName(QString::fromUtf8("tabOption"));
        tabBehaviorPage = new QWidget();
        tabBehaviorPage->setObjectName(QString::fromUtf8("tabBehaviorPage"));
        verticalLayout_10 = new QVBoxLayout(tabBehaviorPage);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(tabBehaviorPage);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 501, 893));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        UISettingsBox = new QGroupBox(scrollAreaWidgetContents);
        UISettingsBox->setObjectName(QString::fromUtf8("UISettingsBox"));
        gridLayout_81 = new QGridLayout(UISettingsBox);
        gridLayout_81->setObjectName(QString::fromUtf8("gridLayout_81"));
        checkUseCustomTheme = new QGroupBox(UISettingsBox);
        checkUseCustomTheme->setObjectName(QString::fromUtf8("checkUseCustomTheme"));
        checkUseCustomTheme->setCheckable(true);
        horizontalLayout_18 = new QHBoxLayout(checkUseCustomTheme);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_16 = new QLabel(checkUseCustomTheme);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_18->addWidget(label_16);

        customThemeFilePath = new FileSystemPathLineEdit(checkUseCustomTheme);
        customThemeFilePath->setObjectName(QString::fromUtf8("customThemeFilePath"));

        horizontalLayout_18->addWidget(customThemeFilePath);


        gridLayout_81->addWidget(checkUseCustomTheme, 3, 0, 1, 3);

        horizontalSpacer_111 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_81->addItem(horizontalSpacer_111, 1, 2, 1, 1);

        label_9 = new QLabel(UISettingsBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_81->addWidget(label_9, 1, 0, 1, 1);

        checkUseSystemIcon = new QCheckBox(UISettingsBox);
        checkUseSystemIcon->setObjectName(QString::fromUtf8("checkUseSystemIcon"));

        gridLayout_81->addWidget(checkUseSystemIcon, 2, 0, 1, 2);

        comboI18n = new QComboBox(UISettingsBox);
        comboI18n->setObjectName(QString::fromUtf8("comboI18n"));
        comboI18n->setMinimumSize(QSize(0, 0));
        comboI18n->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        comboI18n->setModelColumn(0);

        gridLayout_81->addWidget(comboI18n, 1, 1, 1, 1);

        label_15 = new QLabel(UISettingsBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QFont font;
        font.setItalic(true);
        label_15->setFont(font);

        gridLayout_81->addWidget(label_15, 0, 0, 1, 2);


        verticalLayout_9->addWidget(UISettingsBox);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        confirmDeletion = new QCheckBox(groupBox_4);
        confirmDeletion->setObjectName(QString::fromUtf8("confirmDeletion"));
        confirmDeletion->setChecked(true);

        verticalLayout_4->addWidget(confirmDeletion);

        checkAltRowColors = new QCheckBox(groupBox_4);
        checkAltRowColors->setObjectName(QString::fromUtf8("checkAltRowColors"));
        checkAltRowColors->setChecked(true);

        verticalLayout_4->addWidget(checkAltRowColors);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkHideZero = new QCheckBox(groupBox_4);
        checkHideZero->setObjectName(QString::fromUtf8("checkHideZero"));

        horizontalLayout->addWidget(checkHideZero);

        comboHideZero = new QComboBox(groupBox_4);
        comboHideZero->addItem(QString());
        comboHideZero->addItem(QString());
        comboHideZero->setObjectName(QString::fromUtf8("comboHideZero"));

        horizontalLayout->addWidget(comboHideZero);

        horizontalSpacer_10 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);


        verticalLayout_4->addLayout(horizontalLayout);

        groupBox_7 = new QGroupBox(groupBox_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_14 = new QGridLayout(groupBox_7);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        lblDlList_2 = new QLabel(groupBox_7);
        lblDlList_2->setObjectName(QString::fromUtf8("lblDlList_2"));

        gridLayout_14->addWidget(lblDlList_2, 0, 0, 1, 1);

        actionTorrentDlOnDblClBox = new QComboBox(groupBox_7);
        actionTorrentDlOnDblClBox->addItem(QString());
        actionTorrentDlOnDblClBox->addItem(QString());
        actionTorrentDlOnDblClBox->addItem(QString());
        actionTorrentDlOnDblClBox->addItem(QString());
        actionTorrentDlOnDblClBox->setObjectName(QString::fromUtf8("actionTorrentDlOnDblClBox"));

        gridLayout_14->addWidget(actionTorrentDlOnDblClBox, 0, 1, 1, 1);

        lblUploadList = new QLabel(groupBox_7);
        lblUploadList->setObjectName(QString::fromUtf8("lblUploadList"));

        gridLayout_14->addWidget(lblUploadList, 1, 0, 1, 1);

        actionTorrentFnOnDblClBox = new QComboBox(groupBox_7);
        actionTorrentFnOnDblClBox->addItem(QString());
        actionTorrentFnOnDblClBox->addItem(QString());
        actionTorrentFnOnDblClBox->addItem(QString());
        actionTorrentFnOnDblClBox->addItem(QString());
        actionTorrentFnOnDblClBox->setObjectName(QString::fromUtf8("actionTorrentFnOnDblClBox"));

        gridLayout_14->addWidget(actionTorrentFnOnDblClBox, 1, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_12, 0, 2, 1, 1);


        verticalLayout_4->addWidget(groupBox_7);


        verticalLayout_9->addWidget(groupBox_4);

        systrayBox = new QGroupBox(scrollAreaWidgetContents);
        systrayBox->setObjectName(QString::fromUtf8("systrayBox"));
        verticalLayout_12 = new QVBoxLayout(systrayBox);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        checkStartup = new QCheckBox(systrayBox);
        checkStartup->setObjectName(QString::fromUtf8("checkStartup"));

        verticalLayout_12->addWidget(checkStartup);

        checkShowSplash = new QCheckBox(systrayBox);
        checkShowSplash->setObjectName(QString::fromUtf8("checkShowSplash"));
        checkShowSplash->setChecked(true);

        verticalLayout_12->addWidget(checkShowSplash);

        checkStartMinimized = new QCheckBox(systrayBox);
        checkStartMinimized->setObjectName(QString::fromUtf8("checkStartMinimized"));

        verticalLayout_12->addWidget(checkStartMinimized);

        checkProgramExitConfirm = new QCheckBox(systrayBox);
        checkProgramExitConfirm->setObjectName(QString::fromUtf8("checkProgramExitConfirm"));
        checkProgramExitConfirm->setChecked(true);

        verticalLayout_12->addWidget(checkProgramExitConfirm);

        checkProgramAutoExitConfirm = new QCheckBox(systrayBox);
        checkProgramAutoExitConfirm->setObjectName(QString::fromUtf8("checkProgramAutoExitConfirm"));
        checkProgramAutoExitConfirm->setChecked(true);

        verticalLayout_12->addWidget(checkProgramAutoExitConfirm);

        checkShowSystray = new QGroupBox(systrayBox);
        checkShowSystray->setObjectName(QString::fromUtf8("checkShowSystray"));
        checkShowSystray->setCheckable(true);
        verticalLayout_22 = new QVBoxLayout(checkShowSystray);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        checkMinimizeToSysTray = new QCheckBox(checkShowSystray);
        checkMinimizeToSysTray->setObjectName(QString::fromUtf8("checkMinimizeToSysTray"));
        checkMinimizeToSysTray->setChecked(false);

        verticalLayout_22->addWidget(checkMinimizeToSysTray);

        checkCloseToSystray = new QCheckBox(checkShowSystray);
        checkCloseToSystray->setObjectName(QString::fromUtf8("checkCloseToSystray"));

        verticalLayout_22->addWidget(checkCloseToSystray);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelTrayIconStyle = new QLabel(checkShowSystray);
        labelTrayIconStyle->setObjectName(QString::fromUtf8("labelTrayIconStyle"));

        horizontalLayout_4->addWidget(labelTrayIconStyle);

        comboTrayIcon = new QComboBox(checkShowSystray);
        comboTrayIcon->addItem(QString());
        comboTrayIcon->addItem(QString());
        comboTrayIcon->addItem(QString());
        comboTrayIcon->setObjectName(QString::fromUtf8("comboTrayIcon"));

        horizontalLayout_4->addWidget(comboTrayIcon);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_13);


        verticalLayout_22->addLayout(horizontalLayout_4);


        verticalLayout_12->addWidget(checkShowSystray);

        groupFileAssociation = new QGroupBox(systrayBox);
        groupFileAssociation->setObjectName(QString::fromUtf8("groupFileAssociation"));
        verticalLayout_28 = new QVBoxLayout(groupFileAssociation);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        checkAssociateTorrents = new QCheckBox(groupFileAssociation);
        checkAssociateTorrents->setObjectName(QString::fromUtf8("checkAssociateTorrents"));

        verticalLayout_28->addWidget(checkAssociateTorrents);

        checkAssociateMagnetLinks = new QCheckBox(groupFileAssociation);
        checkAssociateMagnetLinks->setObjectName(QString::fromUtf8("checkAssociateMagnetLinks"));

        verticalLayout_28->addWidget(checkAssociateMagnetLinks);


        verticalLayout_12->addWidget(groupFileAssociation);

        checkProgramUpdates = new QCheckBox(systrayBox);
        checkProgramUpdates->setObjectName(QString::fromUtf8("checkProgramUpdates"));

        verticalLayout_12->addWidget(checkProgramUpdates);


        verticalLayout_9->addWidget(systrayBox);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_16 = new QVBoxLayout(groupBox);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        checkPreventFromSuspendWhenDownloading = new QCheckBox(groupBox);
        checkPreventFromSuspendWhenDownloading->setObjectName(QString::fromUtf8("checkPreventFromSuspendWhenDownloading"));

        verticalLayout_16->addWidget(checkPreventFromSuspendWhenDownloading);

        checkPreventFromSuspendWhenSeeding = new QCheckBox(groupBox);
        checkPreventFromSuspendWhenSeeding->setObjectName(QString::fromUtf8("checkPreventFromSuspendWhenSeeding"));

        verticalLayout_16->addWidget(checkPreventFromSuspendWhenSeeding);


        verticalLayout_9->addWidget(groupBox);

        checkFileLog = new QGroupBox(scrollAreaWidgetContents);
        checkFileLog->setObjectName(QString::fromUtf8("checkFileLog"));
        checkFileLog->setCheckable(true);
        checkFileLog->setChecked(true);
        verticalLayout_11 = new QVBoxLayout(checkFileLog);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(checkFileLog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_4);

        textFileLogPath = new FileSystemPathLineEdit(checkFileLog);
        textFileLogPath->setObjectName(QString::fromUtf8("textFileLogPath"));

        horizontalLayout_7->addWidget(textFileLogPath);


        verticalLayout_11->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        checkFileLogBackup = new QCheckBox(checkFileLog);
        checkFileLogBackup->setObjectName(QString::fromUtf8("checkFileLogBackup"));

        horizontalLayout_8->addWidget(checkFileLogBackup);

        spinFileLogSize = new QSpinBox(checkFileLog);
        spinFileLogSize->setObjectName(QString::fromUtf8("spinFileLogSize"));
        spinFileLogSize->setMinimum(1);
        spinFileLogSize->setMaximum(1024000);
        spinFileLogSize->setValue(65);

        horizontalLayout_8->addWidget(spinFileLogSize);

        horizontalSpacer_100 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_100);


        verticalLayout_11->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        checkFileLogDelete = new QCheckBox(checkFileLog);
        checkFileLogDelete->setObjectName(QString::fromUtf8("checkFileLogDelete"));

        horizontalLayout_9->addWidget(checkFileLogDelete);

        spinFileLogAge = new QSpinBox(checkFileLog);
        spinFileLogAge->setObjectName(QString::fromUtf8("spinFileLogAge"));
        spinFileLogAge->setMinimum(1);
        spinFileLogAge->setMaximum(365);
        spinFileLogAge->setValue(6);

        horizontalLayout_9->addWidget(spinFileLogAge);

        comboFileLogAgeType = new QComboBox(checkFileLog);
        comboFileLogAgeType->addItem(QString());
        comboFileLogAgeType->addItem(QString());
        comboFileLogAgeType->addItem(QString());
        comboFileLogAgeType->setObjectName(QString::fromUtf8("comboFileLogAgeType"));

        horizontalLayout_9->addWidget(comboFileLogAgeType);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_16);


        verticalLayout_11->addLayout(horizontalLayout_9);


        verticalLayout_9->addWidget(checkFileLog);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_10->addWidget(scrollArea);

        tabOption->addWidget(tabBehaviorPage);
        tabDownloadsPage = new QWidget();
        tabDownloadsPage->setObjectName(QString::fromUtf8("tabDownloadsPage"));
        verticalLayout_13 = new QVBoxLayout(tabDownloadsPage);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(tabDownloadsPage);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 591, 1138));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        torrentAdditionBox = new QGroupBox(scrollAreaWidgetContents_2);
        torrentAdditionBox->setObjectName(QString::fromUtf8("torrentAdditionBox"));
        torrentAdditionBoxLayout = new QVBoxLayout(torrentAdditionBox);
        torrentAdditionBoxLayout->setObjectName(QString::fromUtf8("torrentAdditionBoxLayout"));
        checkAdditionDialog = new QGroupBox(torrentAdditionBox);
        checkAdditionDialog->setObjectName(QString::fromUtf8("checkAdditionDialog"));
        checkAdditionDialog->setCheckable(true);
        verticalLayout_18 = new QVBoxLayout(checkAdditionDialog);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        checkAdditionDialogFront = new QCheckBox(checkAdditionDialog);
        checkAdditionDialogFront->setObjectName(QString::fromUtf8("checkAdditionDialogFront"));
        checkAdditionDialogFront->setChecked(true);

        verticalLayout_18->addWidget(checkAdditionDialogFront);


        torrentAdditionBoxLayout->addWidget(checkAdditionDialog);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        contentLayoutLabel = new QLabel(torrentAdditionBox);
        contentLayoutLabel->setObjectName(QString::fromUtf8("contentLayoutLabel"));

        horizontalLayout_19->addWidget(contentLayoutLabel);

        contentLayoutComboBox = new QComboBox(torrentAdditionBox);
        contentLayoutComboBox->addItem(QString());
        contentLayoutComboBox->addItem(QString());
        contentLayoutComboBox->addItem(QString());
        contentLayoutComboBox->setObjectName(QString::fromUtf8("contentLayoutComboBox"));

        horizontalLayout_19->addWidget(contentLayoutComboBox);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_20);


        torrentAdditionBoxLayout->addLayout(horizontalLayout_19);

        checkStartPaused = new QCheckBox(torrentAdditionBox);
        checkStartPaused->setObjectName(QString::fromUtf8("checkStartPaused"));

        torrentAdditionBoxLayout->addWidget(checkStartPaused);

        deleteTorrentBox = new QGroupBox(torrentAdditionBox);
        deleteTorrentBox->setObjectName(QString::fromUtf8("deleteTorrentBox"));
        deleteTorrentBox->setCheckable(true);
        deleteTorrentBox->setChecked(false);
        deleteTorrentBoxLayout = new QVBoxLayout(deleteTorrentBox);
        deleteTorrentBoxLayout->setObjectName(QString::fromUtf8("deleteTorrentBoxLayout"));
        deleteCancelledTorrentBox = new QCheckBox(deleteTorrentBox);
        deleteCancelledTorrentBox->setObjectName(QString::fromUtf8("deleteCancelledTorrentBox"));

        deleteTorrentBoxLayout->addWidget(deleteCancelledTorrentBox);

        deleteTorrentWarningLayout = new QHBoxLayout();
        deleteTorrentWarningLayout->setObjectName(QString::fromUtf8("deleteTorrentWarningLayout"));
        deleteTorrentWarningIcon = new QLabel(deleteTorrentBox);
        deleteTorrentWarningIcon->setObjectName(QString::fromUtf8("deleteTorrentWarningIcon"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(deleteTorrentWarningIcon->sizePolicy().hasHeightForWidth());
        deleteTorrentWarningIcon->setSizePolicy(sizePolicy2);
        deleteTorrentWarningIcon->setText(QString::fromUtf8("<>"));

        deleteTorrentWarningLayout->addWidget(deleteTorrentWarningIcon);

        deleteTorrentWarningLabel = new QLabel(deleteTorrentBox);
        deleteTorrentWarningLabel->setObjectName(QString::fromUtf8("deleteTorrentWarningLabel"));

        deleteTorrentWarningLayout->addWidget(deleteTorrentWarningLabel);


        deleteTorrentBoxLayout->addLayout(deleteTorrentWarningLayout);


        torrentAdditionBoxLayout->addWidget(deleteTorrentBox);


        verticalLayout->addWidget(torrentAdditionBox);

        checkPreallocateAll = new QCheckBox(scrollAreaWidgetContents_2);
        checkPreallocateAll->setObjectName(QString::fromUtf8("checkPreallocateAll"));

        verticalLayout->addWidget(checkPreallocateAll);

        checkAppendqB = new QCheckBox(scrollAreaWidgetContents_2);
        checkAppendqB->setObjectName(QString::fromUtf8("checkAppendqB"));

        verticalLayout->addWidget(checkAppendqB);

        checkRecursiveDownload = new QCheckBox(scrollAreaWidgetContents_2);
        checkRecursiveDownload->setObjectName(QString::fromUtf8("checkRecursiveDownload"));

        verticalLayout->addWidget(checkRecursiveDownload);

        groupSavingManagement = new QGroupBox(scrollAreaWidgetContents_2);
        groupSavingManagement->setObjectName(QString::fromUtf8("groupSavingManagement"));
        groupSavingManagementLayout = new QVBoxLayout(groupSavingManagement);
        groupSavingManagementLayout->setObjectName(QString::fromUtf8("groupSavingManagementLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_40 = new QLabel(groupSavingManagement);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_3->addWidget(label_40, 0, 0, 1, 1);

        horizontalLayout_70 = new QHBoxLayout();
        horizontalLayout_70->setSpacing(10);
        horizontalLayout_70->setObjectName(QString::fromUtf8("horizontalLayout_70"));
        comboSavingMode = new QComboBox(groupSavingManagement);
        comboSavingMode->addItem(QString());
        comboSavingMode->addItem(QString());
        comboSavingMode->setObjectName(QString::fromUtf8("comboSavingMode"));

        horizontalLayout_70->addWidget(comboSavingMode);

        horizontalSpacer_160 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_70->addItem(horizontalSpacer_160);


        gridLayout_3->addLayout(horizontalLayout_70, 0, 1, 1, 1);

        labelTorrentCategoryChanged = new QLabel(groupSavingManagement);
        labelTorrentCategoryChanged->setObjectName(QString::fromUtf8("labelTorrentCategoryChanged"));

        gridLayout_3->addWidget(labelTorrentCategoryChanged, 1, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        comboTorrentCategoryChanged = new QComboBox(groupSavingManagement);
        comboTorrentCategoryChanged->addItem(QString());
        comboTorrentCategoryChanged->addItem(QString());
        comboTorrentCategoryChanged->setObjectName(QString::fromUtf8("comboTorrentCategoryChanged"));

        horizontalLayout_14->addWidget(comboTorrentCategoryChanged);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_17);


        gridLayout_3->addLayout(horizontalLayout_14, 1, 1, 1, 1);

        labelCategoryDefaultPathChanged = new QLabel(groupSavingManagement);
        labelCategoryDefaultPathChanged->setObjectName(QString::fromUtf8("labelCategoryDefaultPathChanged"));

        gridLayout_3->addWidget(labelCategoryDefaultPathChanged, 2, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        comboCategoryDefaultPathChanged = new QComboBox(groupSavingManagement);
        comboCategoryDefaultPathChanged->addItem(QString());
        comboCategoryDefaultPathChanged->addItem(QString());
        comboCategoryDefaultPathChanged->setObjectName(QString::fromUtf8("comboCategoryDefaultPathChanged"));

        horizontalLayout_15->addWidget(comboCategoryDefaultPathChanged);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_18);


        gridLayout_3->addLayout(horizontalLayout_15, 2, 1, 1, 1);

        labelCategoryChanged = new QLabel(groupSavingManagement);
        labelCategoryChanged->setObjectName(QString::fromUtf8("labelCategoryChanged"));

        gridLayout_3->addWidget(labelCategoryChanged, 3, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        comboCategoryChanged = new QComboBox(groupSavingManagement);
        comboCategoryChanged->addItem(QString());
        comboCategoryChanged->addItem(QString());
        comboCategoryChanged->setObjectName(QString::fromUtf8("comboCategoryChanged"));

        horizontalLayout_17->addWidget(comboCategoryChanged);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_19);


        gridLayout_3->addLayout(horizontalLayout_17, 3, 1, 1, 1);


        groupSavingManagementLayout->addLayout(gridLayout_3);

        checkUseSubcategories = new QCheckBox(groupSavingManagement);
        checkUseSubcategories->setObjectName(QString::fromUtf8("checkUseSubcategories"));

        groupSavingManagementLayout->addWidget(checkUseSubcategories);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        textTempPath = new FileSystemPathLineEdit(groupSavingManagement);
        textTempPath->setObjectName(QString::fromUtf8("textTempPath"));

        gridLayout_4->addWidget(textTempPath, 1, 1, 1, 1);

        checkExportDirFin = new QCheckBox(groupSavingManagement);
        checkExportDirFin->setObjectName(QString::fromUtf8("checkExportDirFin"));

        gridLayout_4->addWidget(checkExportDirFin, 3, 0, 1, 1);

        labelSavePath = new QLabel(groupSavingManagement);
        labelSavePath->setObjectName(QString::fromUtf8("labelSavePath"));

        gridLayout_4->addWidget(labelSavePath, 0, 0, 1, 1);

        checkExportDir = new QCheckBox(groupSavingManagement);
        checkExportDir->setObjectName(QString::fromUtf8("checkExportDir"));

        gridLayout_4->addWidget(checkExportDir, 2, 0, 1, 1);

        checkTempFolder = new QCheckBox(groupSavingManagement);
        checkTempFolder->setObjectName(QString::fromUtf8("checkTempFolder"));

        gridLayout_4->addWidget(checkTempFolder, 1, 0, 1, 1);

        textExportDirFin = new FileSystemPathLineEdit(groupSavingManagement);
        textExportDirFin->setObjectName(QString::fromUtf8("textExportDirFin"));

        gridLayout_4->addWidget(textExportDirFin, 3, 1, 1, 1);

        textSavePath = new FileSystemPathLineEdit(groupSavingManagement);
        textSavePath->setObjectName(QString::fromUtf8("textSavePath"));

        gridLayout_4->addWidget(textSavePath, 0, 1, 1, 1);

        textExportDir = new FileSystemPathLineEdit(groupSavingManagement);
        textExportDir->setObjectName(QString::fromUtf8("textExportDir"));

        gridLayout_4->addWidget(textExportDir, 2, 1, 1, 1);


        groupSavingManagementLayout->addLayout(gridLayout_4);


        verticalLayout->addWidget(groupSavingManagement);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_38 = new QVBoxLayout(groupBox_2);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        scanFoldersView = new QTreeView(groupBox_2);
        scanFoldersView->setObjectName(QString::fromUtf8("scanFoldersView"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(scanFoldersView->sizePolicy().hasHeightForWidth());
        scanFoldersView->setSizePolicy(sizePolicy3);
        scanFoldersView->setMinimumSize(QSize(250, 150));
        scanFoldersView->setEditTriggers(QAbstractItemView::AllEditTriggers);
        scanFoldersView->setSelectionMode(QAbstractItemView::SingleSelection);
        scanFoldersView->setSelectionBehavior(QAbstractItemView::SelectRows);
        scanFoldersView->setTextElideMode(Qt::ElideNone);
        scanFoldersView->setRootIsDecorated(false);
        scanFoldersView->header()->setDefaultSectionSize(80);
        scanFoldersView->header()->setStretchLastSection(false);

        horizontalLayout_16->addWidget(scanFoldersView);

        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setObjectName(QString::fromUtf8("verticalLayout_37"));
        addWatchedFolderButton = new QPushButton(groupBox_2);
        addWatchedFolderButton->setObjectName(QString::fromUtf8("addWatchedFolderButton"));

        verticalLayout_37->addWidget(addWatchedFolderButton);

        editWatchedFolderButton = new QPushButton(groupBox_2);
        editWatchedFolderButton->setObjectName(QString::fromUtf8("editWatchedFolderButton"));
        editWatchedFolderButton->setEnabled(false);

        verticalLayout_37->addWidget(editWatchedFolderButton);

        removeWatchedFolderButton = new QPushButton(groupBox_2);
        removeWatchedFolderButton->setObjectName(QString::fromUtf8("removeWatchedFolderButton"));
        removeWatchedFolderButton->setEnabled(false);

        verticalLayout_37->addWidget(removeWatchedFolderButton);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_37->addItem(verticalSpacer_6);


        horizontalLayout_16->addLayout(verticalLayout_37);


        verticalLayout_38->addLayout(horizontalLayout_16);


        verticalLayout->addWidget(groupBox_2);

        groupMailNotification = new QGroupBox(scrollAreaWidgetContents_2);
        groupMailNotification->setObjectName(QString::fromUtf8("groupMailNotification"));
        groupMailNotification->setCheckable(true);
        groupMailNotification->setChecked(false);
        verticalLayout_171 = new QVBoxLayout(groupMailNotification);
        verticalLayout_171->setObjectName(QString::fromUtf8("verticalLayout_171"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        lineEditDestEmail = new QLineEdit(groupMailNotification);
        lineEditDestEmail->setObjectName(QString::fromUtf8("lineEditDestEmail"));

        gridLayout_9->addWidget(lineEditDestEmail, 1, 1, 1, 1);

        label_2 = new QLabel(groupMailNotification);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_9->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupMailNotification);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_9->addWidget(label_3, 2, 0, 1, 1);

        lineEditSmtpServer = new QLineEdit(groupMailNotification);
        lineEditSmtpServer->setObjectName(QString::fromUtf8("lineEditSmtpServer"));

        gridLayout_9->addWidget(lineEditSmtpServer, 2, 1, 1, 1);

        senderEmailTxt = new QLineEdit(groupMailNotification);
        senderEmailTxt->setObjectName(QString::fromUtf8("senderEmailTxt"));

        gridLayout_9->addWidget(senderEmailTxt, 0, 1, 1, 1);

        label_25 = new QLabel(groupMailNotification);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_9->addWidget(label_25, 0, 0, 1, 1);


        verticalLayout_171->addLayout(gridLayout_9);

        checkSmtpSSL = new QCheckBox(groupMailNotification);
        checkSmtpSSL->setObjectName(QString::fromUtf8("checkSmtpSSL"));

        verticalLayout_171->addWidget(checkSmtpSSL);

        groupMailNotifAuth = new QGroupBox(groupMailNotification);
        groupMailNotifAuth->setObjectName(QString::fromUtf8("groupMailNotifAuth"));
        groupMailNotifAuth->setCheckable(true);
        groupMailNotifAuth->setChecked(false);
        formLayout_2 = new QFormLayout(groupMailNotifAuth);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_7 = new QLabel(groupMailNotifAuth);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        mailNotifUsername = new QLineEdit(groupMailNotifAuth);
        mailNotifUsername->setObjectName(QString::fromUtf8("mailNotifUsername"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mailNotifUsername);

        label_8 = new QLabel(groupMailNotifAuth);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        mailNotifPassword = new QLineEdit(groupMailNotifAuth);
        mailNotifPassword->setObjectName(QString::fromUtf8("mailNotifPassword"));
        mailNotifPassword->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mailNotifPassword);


        verticalLayout_171->addWidget(groupMailNotifAuth);


        verticalLayout->addWidget(groupMailNotification);

        autoRunBox = new QGroupBox(scrollAreaWidgetContents_2);
        autoRunBox->setObjectName(QString::fromUtf8("autoRunBox"));
        autoRunBox->setCheckable(true);
        autoRunBox->setChecked(false);
        verticalLayout_19 = new QVBoxLayout(autoRunBox);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        lineEditAutoRun = new QLineEdit(autoRunBox);
        lineEditAutoRun->setObjectName(QString::fromUtf8("lineEditAutoRun"));

        verticalLayout_19->addWidget(lineEditAutoRun);

        autoRunConsole = new QCheckBox(autoRunBox);
        autoRunConsole->setObjectName(QString::fromUtf8("autoRunConsole"));

        verticalLayout_19->addWidget(autoRunConsole);

        labelAutoRunParam = new QLabel(autoRunBox);
        labelAutoRunParam->setObjectName(QString::fromUtf8("labelAutoRunParam"));
        labelAutoRunParam->setWordWrap(true);

        verticalLayout_19->addWidget(labelAutoRunParam);


        verticalLayout->addWidget(autoRunBox);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_13->addWidget(scrollArea_2);

        tabOption->addWidget(tabDownloadsPage);
        tabConnectionPage = new QWidget();
        tabConnectionPage->setObjectName(QString::fromUtf8("tabConnectionPage"));
        verticalLayout_6 = new QVBoxLayout(tabConnectionPage);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QScrollArea(tabConnectionPage);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 501, 745));
        verticalLayout_20 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_24 = new QLabel(scrollAreaWidgetContents_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_12->addWidget(label_24);

        comboProtocol = new QComboBox(scrollAreaWidgetContents_3);
        comboProtocol->addItem(QString());
        comboProtocol->addItem(QString::fromUtf8("TCP"));
        comboProtocol->addItem(QString::fromUtf8("\316\274TP"));
        comboProtocol->setObjectName(QString::fromUtf8("comboProtocol"));

        horizontalLayout_12->addWidget(comboProtocol);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_23);


        verticalLayout_20->addLayout(horizontalLayout_12);

        ListeningPortBox = new QGroupBox(scrollAreaWidgetContents_3);
        ListeningPortBox->setObjectName(QString::fromUtf8("ListeningPortBox"));
        listeningPortLayout = new QVBoxLayout(ListeningPortBox);
        listeningPortLayout->setObjectName(QString::fromUtf8("listeningPortLayout"));
        listeningPortLayout2 = new QHBoxLayout();
        listeningPortLayout2->setObjectName(QString::fromUtf8("listeningPortLayout2"));
        lbl_ports = new QLabel(ListeningPortBox);
        lbl_ports->setObjectName(QString::fromUtf8("lbl_ports"));

        listeningPortLayout2->addWidget(lbl_ports);

        spinPort = new QSpinBox(ListeningPortBox);
        spinPort->setObjectName(QString::fromUtf8("spinPort"));
        spinPort->setMaximum(65535);

        listeningPortLayout2->addWidget(spinPort);

        randomButton = new QPushButton(ListeningPortBox);
        randomButton->setObjectName(QString::fromUtf8("randomButton"));

        listeningPortLayout2->addWidget(randomButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        listeningPortLayout2->addItem(horizontalSpacer_4);


        listeningPortLayout->addLayout(listeningPortLayout2);

        checkUPnP = new QCheckBox(ListeningPortBox);
        checkUPnP->setObjectName(QString::fromUtf8("checkUPnP"));
        checkUPnP->setChecked(true);

        listeningPortLayout->addWidget(checkUPnP);


        verticalLayout_20->addWidget(ListeningPortBox);

        nbConnecBox = new QGroupBox(scrollAreaWidgetContents_3);
        nbConnecBox->setObjectName(QString::fromUtf8("nbConnecBox"));
        gridLayout = new QGridLayout(nbConnecBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinMaxUploadsPerTorrent = new QSpinBox(nbConnecBox);
        spinMaxUploadsPerTorrent->setObjectName(QString::fromUtf8("spinMaxUploadsPerTorrent"));
        spinMaxUploadsPerTorrent->setMaximum(500);
        spinMaxUploadsPerTorrent->setValue(4);

        gridLayout->addWidget(spinMaxUploadsPerTorrent, 3, 1, 1, 1);

        checkMaxConnecsPerTorrent = new QCheckBox(nbConnecBox);
        checkMaxConnecsPerTorrent->setObjectName(QString::fromUtf8("checkMaxConnecsPerTorrent"));
        checkMaxConnecsPerTorrent->setChecked(true);

        gridLayout->addWidget(checkMaxConnecsPerTorrent, 1, 0, 1, 1);

        checkMaxConnecs = new QCheckBox(nbConnecBox);
        checkMaxConnecs->setObjectName(QString::fromUtf8("checkMaxConnecs"));
        checkMaxConnecs->setChecked(true);

        gridLayout->addWidget(checkMaxConnecs, 0, 0, 1, 1);

        spinMaxConnec = new QSpinBox(nbConnecBox);
        spinMaxConnec->setObjectName(QString::fromUtf8("spinMaxConnec"));
        spinMaxConnec->setEnabled(true);
        spinMaxConnec->setMinimum(2);
        spinMaxConnec->setMaximum(2000);
        spinMaxConnec->setValue(500);

        gridLayout->addWidget(spinMaxConnec, 0, 1, 1, 1);

        spinMaxConnecPerTorrent = new QSpinBox(nbConnecBox);
        spinMaxConnecPerTorrent->setObjectName(QString::fromUtf8("spinMaxConnecPerTorrent"));
        spinMaxConnecPerTorrent->setMinimum(2);
        spinMaxConnecPerTorrent->setMaximum(2000);
        spinMaxConnecPerTorrent->setValue(100);

        gridLayout->addWidget(spinMaxConnecPerTorrent, 1, 1, 1, 1);

        checkMaxUploadsPerTorrent = new QCheckBox(nbConnecBox);
        checkMaxUploadsPerTorrent->setObjectName(QString::fromUtf8("checkMaxUploadsPerTorrent"));

        gridLayout->addWidget(checkMaxUploadsPerTorrent, 3, 0, 1, 1);

        checkMaxUploads = new QCheckBox(nbConnecBox);
        checkMaxUploads->setObjectName(QString::fromUtf8("checkMaxUploads"));

        gridLayout->addWidget(checkMaxUploads, 2, 0, 1, 1);

        spinMaxUploads = new QSpinBox(nbConnecBox);
        spinMaxUploads->setObjectName(QString::fromUtf8("spinMaxUploads"));
        spinMaxUploads->setMaximum(2000);
        spinMaxUploads->setValue(8);

        gridLayout->addWidget(spinMaxUploads, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        verticalLayout_20->addWidget(nbConnecBox);

        groupProxy = new QGroupBox(scrollAreaWidgetContents_3);
        groupProxy->setObjectName(QString::fromUtf8("groupProxy"));
        groupProxy->setEnabled(true);
        verticalLayout_29 = new QVBoxLayout(groupProxy);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        proxyTypeLayout = new QHBoxLayout();
        proxyTypeLayout->setObjectName(QString::fromUtf8("proxyTypeLayout"));
        ProxyType_lbl = new QLabel(groupProxy);
        ProxyType_lbl->setObjectName(QString::fromUtf8("ProxyType_lbl"));

        proxyTypeLayout->addWidget(ProxyType_lbl);

        comboProxyType = new QComboBox(groupProxy);
        comboProxyType->addItem(QString());
        comboProxyType->addItem(QString());
        comboProxyType->addItem(QString());
        comboProxyType->addItem(QString());
        comboProxyType->setObjectName(QString::fromUtf8("comboProxyType"));

        proxyTypeLayout->addWidget(comboProxyType);

        lblProxyIP = new QLabel(groupProxy);
        lblProxyIP->setObjectName(QString::fromUtf8("lblProxyIP"));
        lblProxyIP->setEnabled(false);

        proxyTypeLayout->addWidget(lblProxyIP);

        textProxyIP = new QLineEdit(groupProxy);
        textProxyIP->setObjectName(QString::fromUtf8("textProxyIP"));
        textProxyIP->setEnabled(false);

        proxyTypeLayout->addWidget(textProxyIP);

        lblProxyPort = new QLabel(groupProxy);
        lblProxyPort->setObjectName(QString::fromUtf8("lblProxyPort"));
        lblProxyPort->setEnabled(false);

        proxyTypeLayout->addWidget(lblProxyPort);

        spinProxyPort = new QSpinBox(groupProxy);
        spinProxyPort->setObjectName(QString::fromUtf8("spinProxyPort"));
        spinProxyPort->setEnabled(false);
        spinProxyPort->setMinimum(1);
        spinProxyPort->setMaximum(65535);
        spinProxyPort->setValue(8080);

        proxyTypeLayout->addWidget(spinProxyPort);


        verticalLayout_29->addLayout(proxyTypeLayout);

        checkProxyPeerConnecs = new QCheckBox(groupProxy);
        checkProxyPeerConnecs->setObjectName(QString::fromUtf8("checkProxyPeerConnecs"));
        checkProxyPeerConnecs->setEnabled(false);

        verticalLayout_29->addWidget(checkProxyPeerConnecs);

        isProxyOnlyForTorrents = new QCheckBox(groupProxy);
        isProxyOnlyForTorrents->setObjectName(QString::fromUtf8("isProxyOnlyForTorrents"));
        isProxyOnlyForTorrents->setChecked(false);

        verticalLayout_29->addWidget(isProxyOnlyForTorrents);

        checkProxyAuth = new QGroupBox(groupProxy);
        checkProxyAuth->setObjectName(QString::fromUtf8("checkProxyAuth"));
        checkProxyAuth->setEnabled(false);
        checkProxyAuth->setCheckable(true);
        checkProxyAuth->setChecked(false);
        verticalLayout_24 = new QVBoxLayout(checkProxyAuth);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        lblProxyUsername = new QLabel(checkProxyAuth);
        lblProxyUsername->setObjectName(QString::fromUtf8("lblProxyUsername"));

        gridLayout_12->addWidget(lblProxyUsername, 0, 0, 1, 1);

        textProxyUsername = new QLineEdit(checkProxyAuth);
        textProxyUsername->setObjectName(QString::fromUtf8("textProxyUsername"));

        gridLayout_12->addWidget(textProxyUsername, 0, 1, 1, 1);

        lblProxyPassword = new QLabel(checkProxyAuth);
        lblProxyPassword->setObjectName(QString::fromUtf8("lblProxyPassword"));

        gridLayout_12->addWidget(lblProxyPassword, 1, 0, 1, 1);

        textProxyPassword = new QLineEdit(checkProxyAuth);
        textProxyPassword->setObjectName(QString::fromUtf8("textProxyPassword"));
        textProxyPassword->setEchoMode(QLineEdit::Password);

        gridLayout_12->addWidget(textProxyPassword, 1, 1, 1, 1);


        verticalLayout_24->addLayout(gridLayout_12);

        label_23 = new QLabel(checkProxyAuth);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_24->addWidget(label_23);


        verticalLayout_29->addWidget(checkProxyAuth);


        verticalLayout_20->addWidget(groupProxy);

        groupIPFilter = new QGroupBox(scrollAreaWidgetContents_3);
        groupIPFilter->setObjectName(QString::fromUtf8("groupIPFilter"));
        verticalLayout_17 = new QVBoxLayout(groupIPFilter);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        checkIPFilter = new QCheckBox(groupIPFilter);
        checkIPFilter->setObjectName(QString::fromUtf8("checkIPFilter"));

        horizontalLayout_11->addWidget(checkIPFilter);

        textFilterPath = new FileSystemPathLineEdit(groupIPFilter);
        textFilterPath->setObjectName(QString::fromUtf8("textFilterPath"));

        horizontalLayout_11->addWidget(textFilterPath);

        IpFilterRefreshBtn = new QToolButton(groupIPFilter);
        IpFilterRefreshBtn->setObjectName(QString::fromUtf8("IpFilterRefreshBtn"));
        IpFilterRefreshBtn->setMinimumSize(QSize(0, 25));

        horizontalLayout_11->addWidget(IpFilterRefreshBtn);


        verticalLayout_17->addLayout(horizontalLayout_11);

        banListButton = new QPushButton(groupIPFilter);
        banListButton->setObjectName(QString::fromUtf8("banListButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(banListButton->sizePolicy().hasHeightForWidth());
        banListButton->setSizePolicy(sizePolicy4);

        verticalLayout_17->addWidget(banListButton);

        checkIpFilterTrackers = new QCheckBox(groupIPFilter);
        checkIpFilterTrackers->setObjectName(QString::fromUtf8("checkIpFilterTrackers"));

        verticalLayout_17->addWidget(checkIpFilterTrackers);


        verticalLayout_20->addWidget(groupIPFilter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_3);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_6->addWidget(scrollArea_3);

        tabOption->addWidget(tabConnectionPage);
        tabSpeedPage = new QWidget();
        tabSpeedPage->setObjectName(QString::fromUtf8("tabSpeedPage"));
        verticalLayout_34 = new QVBoxLayout(tabSpeedPage);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        verticalLayout_34->setContentsMargins(0, 0, 0, 0);
        scrollArea_9 = new QScrollArea(tabSpeedPage);
        scrollArea_9->setObjectName(QString::fromUtf8("scrollArea_9"));
        scrollArea_9->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 516, 525));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_9);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        rateLimitBox = new QGroupBox(scrollAreaWidgetContents_9);
        rateLimitBox->setObjectName(QString::fromUtf8("rateLimitBox"));
        rateLimitBoxLayout = new QGridLayout(rateLimitBox);
        rateLimitBoxLayout->setObjectName(QString::fromUtf8("rateLimitBoxLayout"));
        spinUploadLimit = new QSpinBox(rateLimitBox);
        spinUploadLimit->setObjectName(QString::fromUtf8("spinUploadLimit"));
        spinUploadLimit->setMaximum(2000000);
        spinUploadLimit->setValue(100);

        rateLimitBoxLayout->addWidget(spinUploadLimit, 0, 2, 1, 1);

        spinDownloadLimit = new QSpinBox(rateLimitBox);
        spinDownloadLimit->setObjectName(QString::fromUtf8("spinDownloadLimit"));
        spinDownloadLimit->setMaximum(2000000);
        spinDownloadLimit->setValue(100);

        rateLimitBoxLayout->addWidget(spinDownloadLimit, 1, 2, 1, 1);

        labelGlobalRate = new QLabel(rateLimitBox);
        labelGlobalRate->setObjectName(QString::fromUtf8("labelGlobalRate"));

        rateLimitBoxLayout->addWidget(labelGlobalRate, 0, 0, 2, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        rateLimitBoxLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        label_10 = new QLabel(rateLimitBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        rateLimitBoxLayout->addWidget(label_10, 0, 1, 1, 1);

        label_11 = new QLabel(rateLimitBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        rateLimitBoxLayout->addWidget(label_11, 1, 1, 1, 1);


        verticalLayout_5->addWidget(rateLimitBox);

        altRateLimitBox = new QGroupBox(scrollAreaWidgetContents_9);
        altRateLimitBox->setObjectName(QString::fromUtf8("altRateLimitBox"));
        gridLayout_6 = new QGridLayout(altRateLimitBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        spinDownloadLimitAlt = new QSpinBox(altRateLimitBox);
        spinDownloadLimitAlt->setObjectName(QString::fromUtf8("spinDownloadLimitAlt"));
        spinDownloadLimitAlt->setMaximum(2000000);
        spinDownloadLimitAlt->setValue(10);

        gridLayout_6->addWidget(spinDownloadLimitAlt, 1, 2, 1, 1);

        labelAltRate = new QLabel(altRateLimitBox);
        labelAltRate->setObjectName(QString::fromUtf8("labelAltRate"));

        gridLayout_6->addWidget(labelAltRate, 0, 0, 2, 1);

        groupBoxSchedule = new QGroupBox(altRateLimitBox);
        groupBoxSchedule->setObjectName(QString::fromUtf8("groupBoxSchedule"));
        groupBoxSchedule->setCheckable(true);
        groupBoxSchedule->setChecked(false);
        gridLayout_7 = new QGridLayout(groupBoxSchedule);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_6 = new QLabel(groupBoxSchedule);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_7->addWidget(label_6, 0, 0, 1, 1);

        timeEditScheduleTo = new QTimeEdit(groupBoxSchedule);
        timeEditScheduleTo->setObjectName(QString::fromUtf8("timeEditScheduleTo"));
        timeEditScheduleTo->setWrapping(true);
        timeEditScheduleTo->setDisplayFormat(QString::fromUtf8("hh:mm"));
        timeEditScheduleTo->setTime(QTime(20, 0, 0));

        gridLayout_7->addWidget(timeEditScheduleTo, 0, 3, 1, 1);

        label_17 = new QLabel(groupBoxSchedule);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_7->addWidget(label_17, 0, 2, 1, 1);

        timeEditScheduleFrom = new QTimeEdit(groupBoxSchedule);
        timeEditScheduleFrom->setObjectName(QString::fromUtf8("timeEditScheduleFrom"));
        timeEditScheduleFrom->setWrapping(true);
        timeEditScheduleFrom->setDisplayFormat(QString::fromUtf8("hh:mm"));
        timeEditScheduleFrom->setCalendarPopup(false);
        timeEditScheduleFrom->setTime(QTime(8, 0, 0));

        gridLayout_7->addWidget(timeEditScheduleFrom, 0, 1, 1, 1);

        label_18 = new QLabel(groupBoxSchedule);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_7->addWidget(label_18, 1, 0, 1, 1);

        comboBoxScheduleDays = new QComboBox(groupBoxSchedule);
        comboBoxScheduleDays->addItem(QString());
        comboBoxScheduleDays->addItem(QString());
        comboBoxScheduleDays->addItem(QString());
        comboBoxScheduleDays->setObjectName(QString::fromUtf8("comboBoxScheduleDays"));
        sizePolicy4.setHeightForWidth(comboBoxScheduleDays->sizePolicy().hasHeightForWidth());
        comboBoxScheduleDays->setSizePolicy(sizePolicy4);

        gridLayout_7->addWidget(comboBoxScheduleDays, 1, 1, 1, 3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_8, 0, 4, 1, 1);


        gridLayout_6->addWidget(groupBoxSchedule, 2, 0, 1, 4);

        spinUploadLimitAlt = new QSpinBox(altRateLimitBox);
        spinUploadLimitAlt->setObjectName(QString::fromUtf8("spinUploadLimitAlt"));
        spinUploadLimitAlt->setMaximum(2000000);
        spinUploadLimitAlt->setValue(10);

        gridLayout_6->addWidget(spinUploadLimitAlt, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        label_13 = new QLabel(altRateLimitBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_6->addWidget(label_13, 0, 1, 1, 1);

        label_14 = new QLabel(altRateLimitBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_6->addWidget(label_14, 1, 1, 1, 1);


        verticalLayout_5->addWidget(altRateLimitBox);

        rateLimitsGroupBox = new QGroupBox(scrollAreaWidgetContents_9);
        rateLimitsGroupBox->setObjectName(QString::fromUtf8("rateLimitsGroupBox"));
        verticalLayout_30 = new QVBoxLayout(rateLimitsGroupBox);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        checkLimituTPConnections = new QCheckBox(rateLimitsGroupBox);
        checkLimituTPConnections->setObjectName(QString::fromUtf8("checkLimituTPConnections"));

        verticalLayout_30->addWidget(checkLimituTPConnections);

        checkLimitTransportOverhead = new QCheckBox(rateLimitsGroupBox);
        checkLimitTransportOverhead->setObjectName(QString::fromUtf8("checkLimitTransportOverhead"));

        verticalLayout_30->addWidget(checkLimitTransportOverhead);

        checkLimitLocalPeerRate = new QCheckBox(rateLimitsGroupBox);
        checkLimitLocalPeerRate->setObjectName(QString::fromUtf8("checkLimitLocalPeerRate"));

        verticalLayout_30->addWidget(checkLimitLocalPeerRate);


        verticalLayout_5->addWidget(rateLimitsGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        scrollArea_9->setWidget(scrollAreaWidgetContents_9);

        verticalLayout_34->addWidget(scrollArea_9);

        tabOption->addWidget(tabSpeedPage);
        tabBitTorrentPage = new QWidget();
        tabBitTorrentPage->setObjectName(QString::fromUtf8("tabBitTorrentPage"));
        verticalLayout_15 = new QVBoxLayout(tabBitTorrentPage);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        scrollArea_4 = new QScrollArea(tabBitTorrentPage);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 513, 679));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        AddBTFeaturesBox = new QGroupBox(scrollAreaWidgetContents_4);
        AddBTFeaturesBox->setObjectName(QString::fromUtf8("AddBTFeaturesBox"));
        verticalLayout_14 = new QVBoxLayout(AddBTFeaturesBox);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        checkDHT = new QCheckBox(AddBTFeaturesBox);
        checkDHT->setObjectName(QString::fromUtf8("checkDHT"));
        checkDHT->setChecked(true);

        verticalLayout_14->addWidget(checkDHT);

        checkPeX = new QCheckBox(AddBTFeaturesBox);
        checkPeX->setObjectName(QString::fromUtf8("checkPeX"));
        checkPeX->setChecked(true);

        verticalLayout_14->addWidget(checkPeX);

        checkLSD = new QCheckBox(AddBTFeaturesBox);
        checkLSD->setObjectName(QString::fromUtf8("checkLSD"));
        checkLSD->setChecked(true);

        verticalLayout_14->addWidget(checkLSD);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lbl_encryption = new QLabel(AddBTFeaturesBox);
        lbl_encryption->setObjectName(QString::fromUtf8("lbl_encryption"));

        hboxLayout->addWidget(lbl_encryption);

        comboEncryption = new QComboBox(AddBTFeaturesBox);
        comboEncryption->addItem(QString());
        comboEncryption->addItem(QString());
        comboEncryption->addItem(QString());
        comboEncryption->setObjectName(QString::fromUtf8("comboEncryption"));

        hboxLayout->addWidget(comboEncryption);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        verticalLayout_14->addLayout(hboxLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        checkAnonymousMode = new QCheckBox(AddBTFeaturesBox);
        checkAnonymousMode->setObjectName(QString::fromUtf8("checkAnonymousMode"));

        horizontalLayout_6->addWidget(checkAnonymousMode);

        label_anonymous = new QLabel(AddBTFeaturesBox);
        label_anonymous->setObjectName(QString::fromUtf8("label_anonymous"));
        label_anonymous->setOpenExternalLinks(true);

        horizontalLayout_6->addWidget(label_anonymous);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);


        verticalLayout_14->addLayout(horizontalLayout_6);


        verticalLayout_7->addWidget(AddBTFeaturesBox);

        checkEnableQueueing = new QGroupBox(scrollAreaWidgetContents_4);
        checkEnableQueueing->setObjectName(QString::fromUtf8("checkEnableQueueing"));
        checkEnableQueueing->setCheckable(true);
        checkEnableQueueing->setChecked(false);
        gridLayout_2 = new QGridLayout(checkEnableQueueing);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_max_active_dl = new QLabel(checkEnableQueueing);
        label_max_active_dl->setObjectName(QString::fromUtf8("label_max_active_dl"));

        gridLayout_2->addWidget(label_max_active_dl, 0, 0, 1, 1);

        spinMaxActiveDownloads = new QSpinBox(checkEnableQueueing);
        spinMaxActiveDownloads->setObjectName(QString::fromUtf8("spinMaxActiveDownloads"));
        spinMaxActiveDownloads->setMinimum(-1);
        spinMaxActiveDownloads->setMaximum(999);
        spinMaxActiveDownloads->setValue(3);

        gridLayout_2->addWidget(spinMaxActiveDownloads, 0, 1, 1, 1);

        label_max_active_up = new QLabel(checkEnableQueueing);
        label_max_active_up->setObjectName(QString::fromUtf8("label_max_active_up"));

        gridLayout_2->addWidget(label_max_active_up, 1, 0, 1, 1);

        spinMaxActiveUploads = new QSpinBox(checkEnableQueueing);
        spinMaxActiveUploads->setObjectName(QString::fromUtf8("spinMaxActiveUploads"));
        spinMaxActiveUploads->setMinimum(-1);
        spinMaxActiveUploads->setMaximum(999);
        spinMaxActiveUploads->setValue(3);

        gridLayout_2->addWidget(spinMaxActiveUploads, 1, 1, 1, 1);

        maxActiveTorrents_lbl = new QLabel(checkEnableQueueing);
        maxActiveTorrents_lbl->setObjectName(QString::fromUtf8("maxActiveTorrents_lbl"));

        gridLayout_2->addWidget(maxActiveTorrents_lbl, 2, 0, 1, 1);

        spinMaxActiveTorrents = new QSpinBox(checkEnableQueueing);
        spinMaxActiveTorrents->setObjectName(QString::fromUtf8("spinMaxActiveTorrents"));
        spinMaxActiveTorrents->setMinimum(-1);
        spinMaxActiveTorrents->setMaximum(999);
        spinMaxActiveTorrents->setValue(5);

        gridLayout_2->addWidget(spinMaxActiveTorrents, 2, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        checkIgnoreSlowTorrentsForQueueing = new QGroupBox(checkEnableQueueing);
        checkIgnoreSlowTorrentsForQueueing->setObjectName(QString::fromUtf8("checkIgnoreSlowTorrentsForQueueing"));
        checkIgnoreSlowTorrentsForQueueing->setCheckable(true);
        checkIgnoreSlowTorrentsForQueueing->setChecked(false);
        gridLayout_13 = new QGridLayout(checkIgnoreSlowTorrentsForQueueing);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        spinDownloadRateForSlowTorrents = new QSpinBox(checkIgnoreSlowTorrentsForQueueing);
        spinDownloadRateForSlowTorrents->setObjectName(QString::fromUtf8("spinDownloadRateForSlowTorrents"));
        spinDownloadRateForSlowTorrents->setMaximum(2000000);
        spinDownloadRateForSlowTorrents->setValue(2);

        gridLayout_13->addWidget(spinDownloadRateForSlowTorrents, 0, 1, 1, 1);

        spinUploadRateForSlowTorrents = new QSpinBox(checkIgnoreSlowTorrentsForQueueing);
        spinUploadRateForSlowTorrents->setObjectName(QString::fromUtf8("spinUploadRateForSlowTorrents"));
        spinUploadRateForSlowTorrents->setMaximum(2000000);
        spinUploadRateForSlowTorrents->setValue(2);

        gridLayout_13->addWidget(spinUploadRateForSlowTorrents, 1, 1, 1, 1);

        labelUploadRateForSlowTorrents = new QLabel(checkIgnoreSlowTorrentsForQueueing);
        labelUploadRateForSlowTorrents->setObjectName(QString::fromUtf8("labelUploadRateForSlowTorrents"));

        gridLayout_13->addWidget(labelUploadRateForSlowTorrents, 1, 0, 1, 1);

        labelDownloadRateForSlowTorrents = new QLabel(checkIgnoreSlowTorrentsForQueueing);
        labelDownloadRateForSlowTorrents->setObjectName(QString::fromUtf8("labelDownloadRateForSlowTorrents"));

        gridLayout_13->addWidget(labelDownloadRateForSlowTorrents, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_9, 0, 2, 1, 1);

        spinSlowTorrentsInactivityTimer = new QSpinBox(checkIgnoreSlowTorrentsForQueueing);
        spinSlowTorrentsInactivityTimer->setObjectName(QString::fromUtf8("spinSlowTorrentsInactivityTimer"));
        spinSlowTorrentsInactivityTimer->setMinimum(1);
        spinSlowTorrentsInactivityTimer->setMaximum(999999);
        spinSlowTorrentsInactivityTimer->setValue(60);

        gridLayout_13->addWidget(spinSlowTorrentsInactivityTimer, 2, 1, 1, 1);

        labelSlowTorrentInactivityTimer = new QLabel(checkIgnoreSlowTorrentsForQueueing);
        labelSlowTorrentInactivityTimer->setObjectName(QString::fromUtf8("labelSlowTorrentInactivityTimer"));

        gridLayout_13->addWidget(labelSlowTorrentInactivityTimer, 2, 0, 1, 1);


        gridLayout_2->addWidget(checkIgnoreSlowTorrentsForQueueing, 3, 0, 1, 3);


        verticalLayout_7->addWidget(checkEnableQueueing);

        seedingLimitsBox = new QGroupBox(scrollAreaWidgetContents_4);
        seedingLimitsBox->setObjectName(QString::fromUtf8("seedingLimitsBox"));
        gridLayout_91 = new QGridLayout(seedingLimitsBox);
        gridLayout_91->setObjectName(QString::fromUtf8("gridLayout_91"));
        spinMaxSeedingMinutes = new QSpinBox(seedingLimitsBox);
        spinMaxSeedingMinutes->setObjectName(QString::fromUtf8("spinMaxSeedingMinutes"));
        spinMaxSeedingMinutes->setEnabled(false);
        spinMaxSeedingMinutes->setMaximum(9999999);
        spinMaxSeedingMinutes->setValue(1440);

        gridLayout_91->addWidget(spinMaxSeedingMinutes, 2, 1, 1, 1);

        checkMaxSeedingMinutes = new QCheckBox(seedingLimitsBox);
        checkMaxSeedingMinutes->setObjectName(QString::fromUtf8("checkMaxSeedingMinutes"));

        gridLayout_91->addWidget(checkMaxSeedingMinutes, 2, 0, 1, 1);

        label = new QLabel(seedingLimitsBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_91->addWidget(label, 3, 0, 1, 1);

        comboRatioLimitAct = new QComboBox(seedingLimitsBox);
        comboRatioLimitAct->addItem(QString());
        comboRatioLimitAct->addItem(QString());
        comboRatioLimitAct->addItem(QString());
        comboRatioLimitAct->addItem(QString());
        comboRatioLimitAct->setObjectName(QString::fromUtf8("comboRatioLimitAct"));
        comboRatioLimitAct->setEnabled(false);

        gridLayout_91->addWidget(comboRatioLimitAct, 3, 1, 1, 1);

        checkMaxRatio = new QCheckBox(seedingLimitsBox);
        checkMaxRatio->setObjectName(QString::fromUtf8("checkMaxRatio"));

        gridLayout_91->addWidget(checkMaxRatio, 1, 0, 1, 1);

        spinMaxRatio = new QDoubleSpinBox(seedingLimitsBox);
        spinMaxRatio->setObjectName(QString::fromUtf8("spinMaxRatio"));
        spinMaxRatio->setEnabled(false);
        spinMaxRatio->setMaximum(9998.000000000000000);
        spinMaxRatio->setSingleStep(0.050000000000000);
        spinMaxRatio->setValue(1.000000000000000);

        gridLayout_91->addWidget(spinMaxRatio, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_91->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        verticalLayout_7->addWidget(seedingLimitsBox);

        checkEnableAddTrackers = new QGroupBox(scrollAreaWidgetContents_4);
        checkEnableAddTrackers->setObjectName(QString::fromUtf8("checkEnableAddTrackers"));
        checkEnableAddTrackers->setCheckable(true);
        checkEnableAddTrackers->setChecked(false);
        gridLayout_16 = new QGridLayout(checkEnableAddTrackers);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        textTrackers = new QPlainTextEdit(checkEnableAddTrackers);
        textTrackers->setObjectName(QString::fromUtf8("textTrackers"));

        gridLayout_16->addWidget(textTrackers, 0, 0, 1, 1);


        verticalLayout_7->addWidget(checkEnableAddTrackers);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_8);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_15->addWidget(scrollArea_4);

        tabOption->addWidget(tabBitTorrentPage);
        tabRSSPage = new QWidget();
        tabRSSPage->setObjectName(QString::fromUtf8("tabRSSPage"));
        verticalLayout_25 = new QVBoxLayout(tabRSSPage);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        scrollArea_5 = new QScrollArea(tabRSSPage);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 516, 525));
        verticalLayout_27 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        groupRSSReader = new QGroupBox(scrollAreaWidgetContents_5);
        groupRSSReader->setObjectName(QString::fromUtf8("groupRSSReader"));
        verticalLayout_26 = new QVBoxLayout(groupRSSReader);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        checkRSSEnable = new QCheckBox(groupRSSReader);
        checkRSSEnable->setObjectName(QString::fromUtf8("checkRSSEnable"));

        verticalLayout_26->addWidget(checkRSSEnable);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_111 = new QLabel(groupRSSReader);
        label_111->setObjectName(QString::fromUtf8("label_111"));

        gridLayout_5->addWidget(label_111, 0, 0, 1, 1);

        spinRSSMaxArticlesPerFeed = new QSpinBox(groupRSSReader);
        spinRSSMaxArticlesPerFeed->setObjectName(QString::fromUtf8("spinRSSMaxArticlesPerFeed"));
        spinRSSMaxArticlesPerFeed->setMaximum(9999);
        spinRSSMaxArticlesPerFeed->setValue(100);

        gridLayout_5->addWidget(spinRSSMaxArticlesPerFeed, 1, 1, 1, 1);

        label_12 = new QLabel(groupRSSReader);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 1, 0, 1, 1);

        spinRSSRefreshInterval = new QSpinBox(groupRSSReader);
        spinRSSRefreshInterval->setObjectName(QString::fromUtf8("spinRSSRefreshInterval"));
        spinRSSRefreshInterval->setMinimum(1);
        spinRSSRefreshInterval->setMaximum(999999);
        spinRSSRefreshInterval->setValue(5);

        gridLayout_5->addWidget(spinRSSRefreshInterval, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        verticalLayout_26->addLayout(gridLayout_5);


        verticalLayout_27->addWidget(groupRSSReader);

        groupRSSAutoDownloader = new QGroupBox(scrollAreaWidgetContents_5);
        groupRSSAutoDownloader->setObjectName(QString::fromUtf8("groupRSSAutoDownloader"));
        verticalLayout_21 = new QVBoxLayout(groupRSSAutoDownloader);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        checkRSSAutoDownloaderEnable = new QCheckBox(groupRSSAutoDownloader);
        checkRSSAutoDownloaderEnable->setObjectName(QString::fromUtf8("checkRSSAutoDownloaderEnable"));

        verticalLayout_21->addWidget(checkRSSAutoDownloaderEnable);

        btnEditRules = new QPushButton(groupRSSAutoDownloader);
        btnEditRules->setObjectName(QString::fromUtf8("btnEditRules"));

        verticalLayout_21->addWidget(btnEditRules);


        verticalLayout_27->addWidget(groupRSSAutoDownloader);

        groupRSSSmartEpisodeFilter = new QGroupBox(scrollAreaWidgetContents_5);
        groupRSSSmartEpisodeFilter->setObjectName(QString::fromUtf8("groupRSSSmartEpisodeFilter"));
        verticalLayout_31 = new QVBoxLayout(groupRSSSmartEpisodeFilter);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        checkSmartFilterDownloadRepacks = new QCheckBox(groupRSSSmartEpisodeFilter);
        checkSmartFilterDownloadRepacks->setObjectName(QString::fromUtf8("checkSmartFilterDownloadRepacks"));

        verticalLayout_31->addWidget(checkSmartFilterDownloadRepacks);

        label_5 = new QLabel(groupRSSSmartEpisodeFilter);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_31->addWidget(label_5);

        textSmartEpisodeFilters = new QPlainTextEdit(groupRSSSmartEpisodeFilter);
        textSmartEpisodeFilters->setObjectName(QString::fromUtf8("textSmartEpisodeFilters"));

        verticalLayout_31->addWidget(textSmartEpisodeFilters);


        verticalLayout_27->addWidget(groupRSSSmartEpisodeFilter);

        verticalSpacer_5 = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_5);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_25->addWidget(scrollArea_5);

        tabOption->addWidget(tabRSSPage);
        tabWebuiPage = new QWidget();
        tabWebuiPage->setObjectName(QString::fromUtf8("tabWebuiPage"));
        tabWebuiPageLayout = new QVBoxLayout(tabWebuiPage);
        tabWebuiPageLayout->setObjectName(QString::fromUtf8("tabWebuiPageLayout"));
        tabWebuiPageLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea_7 = new QScrollArea(tabWebuiPage);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 501, 636));
        verticalLayout_23 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        checkWebUi = new QGroupBox(scrollAreaWidgetContents_7);
        checkWebUi->setObjectName(QString::fromUtf8("checkWebUi"));
        checkWebUi->setCheckable(true);
        checkWebUi->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(checkWebUi);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblWebUiAddress = new QLabel(checkWebUi);
        lblWebUiAddress->setObjectName(QString::fromUtf8("lblWebUiAddress"));

        horizontalLayout_2->addWidget(lblWebUiAddress);

        textWebUiAddress = new QLineEdit(checkWebUi);
        textWebUiAddress->setObjectName(QString::fromUtf8("textWebUiAddress"));

        horizontalLayout_2->addWidget(textWebUiAddress);

        lblWebUiPort = new QLabel(checkWebUi);
        lblWebUiPort->setObjectName(QString::fromUtf8("lblWebUiPort"));

        horizontalLayout_2->addWidget(lblWebUiPort);

        spinWebUiPort = new QSpinBox(checkWebUi);
        spinWebUiPort->setObjectName(QString::fromUtf8("spinWebUiPort"));
        spinWebUiPort->setMinimum(1);
        spinWebUiPort->setMaximum(65535);
        spinWebUiPort->setValue(8080);

        horizontalLayout_2->addWidget(spinWebUiPort);


        verticalLayout_2->addLayout(horizontalLayout_2);

        checkWebUIUPnP = new QCheckBox(checkWebUi);
        checkWebUIUPnP->setObjectName(QString::fromUtf8("checkWebUIUPnP"));
        checkWebUIUPnP->setChecked(true);

        verticalLayout_2->addWidget(checkWebUIUPnP);

        checkWebUiHttps = new QGroupBox(checkWebUi);
        checkWebUiHttps->setObjectName(QString::fromUtf8("checkWebUiHttps"));
        checkWebUiHttps->setCheckable(true);
        checkWebUiHttps->setChecked(false);
        gridLayout_11 = new QGridLayout(checkWebUiHttps);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        lblWebUiKey = new QLabel(checkWebUiHttps);
        lblWebUiKey->setObjectName(QString::fromUtf8("lblWebUiKey"));

        gridLayout_11->addWidget(lblWebUiKey, 1, 1, 1, 1);

        lblWebUiCrt = new QLabel(checkWebUiHttps);
        lblWebUiCrt->setObjectName(QString::fromUtf8("lblWebUiCrt"));

        gridLayout_11->addWidget(lblWebUiCrt, 0, 1, 1, 1);

        lblSslCertStatus = new QLabel(checkWebUiHttps);
        lblSslCertStatus->setObjectName(QString::fromUtf8("lblSslCertStatus"));

        gridLayout_11->addWidget(lblSslCertStatus, 0, 0, 1, 1);

        lblSslKeyStatus = new QLabel(checkWebUiHttps);
        lblSslKeyStatus->setObjectName(QString::fromUtf8("lblSslKeyStatus"));

        gridLayout_11->addWidget(lblSslKeyStatus, 1, 0, 1, 1);

        lblWebUIInfo = new QLabel(checkWebUiHttps);
        lblWebUIInfo->setObjectName(QString::fromUtf8("lblWebUIInfo"));
        lblWebUIInfo->setOpenExternalLinks(true);

        gridLayout_11->addWidget(lblWebUIInfo, 2, 0, 1, 3);

        textWebUIHttpsCert = new FileSystemPathLineEdit(checkWebUiHttps);
        textWebUIHttpsCert->setObjectName(QString::fromUtf8("textWebUIHttpsCert"));

        gridLayout_11->addWidget(textWebUIHttpsCert, 0, 2, 1, 1);

        textWebUIHttpsKey = new FileSystemPathLineEdit(checkWebUiHttps);
        textWebUIHttpsKey->setObjectName(QString::fromUtf8("textWebUIHttpsKey"));

        gridLayout_11->addWidget(textWebUIHttpsKey, 1, 2, 1, 1);


        verticalLayout_2->addWidget(checkWebUiHttps);

        groupWebUiAuth = new QGroupBox(checkWebUi);
        groupWebUiAuth->setObjectName(QString::fromUtf8("groupWebUiAuth"));
        verticalLayout_35 = new QVBoxLayout(groupWebUiAuth);
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        lblWebUiUsername = new QLabel(groupWebUiAuth);
        lblWebUiUsername->setObjectName(QString::fromUtf8("lblWebUiUsername"));

        gridLayout_8->addWidget(lblWebUiUsername, 0, 0, 1, 1);

        textWebUiUsername = new QLineEdit(groupWebUiAuth);
        textWebUiUsername->setObjectName(QString::fromUtf8("textWebUiUsername"));

        gridLayout_8->addWidget(textWebUiUsername, 0, 1, 1, 1);

        lblWebUiPassword = new QLabel(groupWebUiAuth);
        lblWebUiPassword->setObjectName(QString::fromUtf8("lblWebUiPassword"));

        gridLayout_8->addWidget(lblWebUiPassword, 1, 0, 1, 1);

        textWebUiPassword = new QLineEdit(groupWebUiAuth);
        textWebUiPassword->setObjectName(QString::fromUtf8("textWebUiPassword"));
        textWebUiPassword->setEchoMode(QLineEdit::Password);

        gridLayout_8->addWidget(textWebUiPassword, 1, 1, 1, 1);


        verticalLayout_35->addLayout(gridLayout_8);

        checkBypassLocalAuth = new QCheckBox(groupWebUiAuth);
        checkBypassLocalAuth->setObjectName(QString::fromUtf8("checkBypassLocalAuth"));

        verticalLayout_35->addWidget(checkBypassLocalAuth);

        checkBypassAuthSubnetWhitelist = new QCheckBox(groupWebUiAuth);
        checkBypassAuthSubnetWhitelist->setObjectName(QString::fromUtf8("checkBypassAuthSubnetWhitelist"));

        verticalLayout_35->addWidget(checkBypassAuthSubnetWhitelist);

        IPSubnetWhitelistButton = new QPushButton(groupWebUiAuth);
        IPSubnetWhitelistButton->setObjectName(QString::fromUtf8("IPSubnetWhitelistButton"));
        sizePolicy4.setHeightForWidth(IPSubnetWhitelistButton->sizePolicy().hasHeightForWidth());
        IPSubnetWhitelistButton->setSizePolicy(sizePolicy4);

        verticalLayout_35->addWidget(IPSubnetWhitelistButton);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        lblBanCounter = new QLabel(groupWebUiAuth);
        lblBanCounter->setObjectName(QString::fromUtf8("lblBanCounter"));

        gridLayout_10->addWidget(lblBanCounter, 0, 0, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_15, 0, 2, 1, 1);

        spinBanCounter = new QSpinBox(groupWebUiAuth);
        spinBanCounter->setObjectName(QString::fromUtf8("spinBanCounter"));
        spinBanCounter->setMaximum(2147483647);

        gridLayout_10->addWidget(spinBanCounter, 0, 1, 1, 1);

        lblBanDuration = new QLabel(groupWebUiAuth);
        lblBanDuration->setObjectName(QString::fromUtf8("lblBanDuration"));
        lblBanDuration->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(lblBanDuration, 1, 0, 1, 1);

        spinBanDuration = new QSpinBox(groupWebUiAuth);
        spinBanDuration->setObjectName(QString::fromUtf8("spinBanDuration"));
        spinBanDuration->setMinimum(1);
        spinBanDuration->setMaximum(2147483647);

        gridLayout_10->addWidget(spinBanDuration, 1, 1, 1, 1);


        verticalLayout_35->addLayout(gridLayout_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        lblSessionTimeout = new QLabel(groupWebUiAuth);
        lblSessionTimeout->setObjectName(QString::fromUtf8("lblSessionTimeout"));

        horizontalLayout_13->addWidget(lblSessionTimeout);

        spinSessionTimeout = new QSpinBox(groupWebUiAuth);
        spinSessionTimeout->setObjectName(QString::fromUtf8("spinSessionTimeout"));
        spinSessionTimeout->setMaximum(2147483647);

        horizontalLayout_13->addWidget(spinSessionTimeout);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_11);


        verticalLayout_35->addLayout(horizontalLayout_13);


        verticalLayout_2->addWidget(groupWebUiAuth);

        groupAltWebUI = new QGroupBox(checkWebUi);
        groupAltWebUI->setObjectName(QString::fromUtf8("groupAltWebUI"));
        groupAltWebUI->setCheckable(true);
        groupAltWebUI->setChecked(false);
        horizontalLayout_5 = new QHBoxLayout(groupAltWebUI);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelWebUIRootFolder = new QLabel(groupAltWebUI);
        labelWebUIRootFolder->setObjectName(QString::fromUtf8("labelWebUIRootFolder"));

        horizontalLayout_5->addWidget(labelWebUIRootFolder);

        textWebUIRootFolder = new FileSystemPathLineEdit(groupAltWebUI);
        textWebUIRootFolder->setObjectName(QString::fromUtf8("textWebUIRootFolder"));

        horizontalLayout_5->addWidget(textWebUIRootFolder);


        verticalLayout_2->addWidget(groupAltWebUI);

        groupBox_3 = new QGroupBox(checkWebUi);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_33 = new QVBoxLayout(groupBox_3);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        checkClickjacking = new QCheckBox(groupBox_3);
        checkClickjacking->setObjectName(QString::fromUtf8("checkClickjacking"));

        verticalLayout_33->addWidget(checkClickjacking);

        checkCSRFProtection = new QCheckBox(groupBox_3);
        checkCSRFProtection->setObjectName(QString::fromUtf8("checkCSRFProtection"));

        verticalLayout_33->addWidget(checkCSRFProtection);

        checkSecureCookie = new QCheckBox(groupBox_3);
        checkSecureCookie->setObjectName(QString::fromUtf8("checkSecureCookie"));

        verticalLayout_33->addWidget(checkSecureCookie);

        groupHostHeaderValidation = new QGroupBox(groupBox_3);
        groupHostHeaderValidation->setObjectName(QString::fromUtf8("groupHostHeaderValidation"));
        groupHostHeaderValidation->setCheckable(true);
        verticalLayout_32 = new QVBoxLayout(groupHostHeaderValidation);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        labelServerDomains = new QLabel(groupHostHeaderValidation);
        labelServerDomains->setObjectName(QString::fromUtf8("labelServerDomains"));

        horizontalLayout_10->addWidget(labelServerDomains);

        textServerDomains = new QLineEdit(groupHostHeaderValidation);
        textServerDomains->setObjectName(QString::fromUtf8("textServerDomains"));

        horizontalLayout_10->addWidget(textServerDomains);


        verticalLayout_32->addLayout(horizontalLayout_10);


        verticalLayout_33->addWidget(groupHostHeaderValidation);


        verticalLayout_2->addWidget(groupBox_3);

        groupWebUIAddCustomHTTPHeaders = new QGroupBox(checkWebUi);
        groupWebUIAddCustomHTTPHeaders->setObjectName(QString::fromUtf8("groupWebUIAddCustomHTTPHeaders"));
        groupWebUIAddCustomHTTPHeaders->setCheckable(true);
        verticalLayout_8 = new QVBoxLayout(groupWebUIAddCustomHTTPHeaders);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        textWebUICustomHTTPHeaders = new QPlainTextEdit(groupWebUIAddCustomHTTPHeaders);
        textWebUICustomHTTPHeaders->setObjectName(QString::fromUtf8("textWebUICustomHTTPHeaders"));
        textWebUICustomHTTPHeaders->setLineWrapMode(QPlainTextEdit::NoWrap);

        verticalLayout_8->addWidget(textWebUICustomHTTPHeaders);


        verticalLayout_2->addWidget(groupWebUIAddCustomHTTPHeaders);

        groupEnableReverseProxySupport = new QGroupBox(checkWebUi);
        groupEnableReverseProxySupport->setObjectName(QString::fromUtf8("groupEnableReverseProxySupport"));
        groupEnableReverseProxySupport->setCheckable(true);
        verticalLayout_331 = new QVBoxLayout(groupEnableReverseProxySupport);
        verticalLayout_331->setObjectName(QString::fromUtf8("verticalLayout_331"));
        horizontalLayout_131 = new QHBoxLayout();
        horizontalLayout_131->setObjectName(QString::fromUtf8("horizontalLayout_131"));
        lblReverseProxiesList = new QLabel(groupEnableReverseProxySupport);
        lblReverseProxiesList->setObjectName(QString::fromUtf8("lblReverseProxiesList"));

        horizontalLayout_131->addWidget(lblReverseProxiesList);

        textTrustedReverseProxiesList = new QLineEdit(groupEnableReverseProxySupport);
        textTrustedReverseProxiesList->setObjectName(QString::fromUtf8("textTrustedReverseProxiesList"));

        horizontalLayout_131->addWidget(textTrustedReverseProxiesList);


        verticalLayout_331->addLayout(horizontalLayout_131);


        verticalLayout_2->addWidget(groupEnableReverseProxySupport);

        checkDynDNS = new QGroupBox(checkWebUi);
        checkDynDNS->setObjectName(QString::fromUtf8("checkDynDNS"));
        checkDynDNS->setCheckable(true);
        checkDynDNS->setChecked(false);
        formLayout_5 = new QFormLayout(checkDynDNS);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_19 = new QLabel(checkDynDNS);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_19);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboDNSService = new QComboBox(checkDynDNS);
        comboDNSService->addItem(QString::fromUtf8("DynDNS"));
        comboDNSService->addItem(QString::fromUtf8("No-IP"));
        comboDNSService->setObjectName(QString::fromUtf8("comboDNSService"));

        horizontalLayout_3->addWidget(comboDNSService);

        registerDNSBtn = new QPushButton(checkDynDNS);
        registerDNSBtn->setObjectName(QString::fromUtf8("registerDNSBtn"));

        horizontalLayout_3->addWidget(registerDNSBtn);


        formLayout_5->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        label_20 = new QLabel(checkDynDNS);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_20);

        domainNameTxt = new QLineEdit(checkDynDNS);
        domainNameTxt->setObjectName(QString::fromUtf8("domainNameTxt"));
        domainNameTxt->setText(QString::fromUtf8("changeme.dyndns.org"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, domainNameTxt);

        label_21 = new QLabel(checkDynDNS);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_21);

        DNSUsernameTxt = new QLineEdit(checkDynDNS);
        DNSUsernameTxt->setObjectName(QString::fromUtf8("DNSUsernameTxt"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, DNSUsernameTxt);

        label_22 = new QLabel(checkDynDNS);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_22);

        DNSPasswordTxt = new QLineEdit(checkDynDNS);
        DNSPasswordTxt->setObjectName(QString::fromUtf8("DNSPasswordTxt"));
        DNSPasswordTxt->setEchoMode(QLineEdit::Password);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, DNSPasswordTxt);


        verticalLayout_2->addWidget(checkDynDNS);


        verticalLayout_23->addWidget(checkWebUi);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_23->addItem(verticalSpacer);

        scrollArea_7->setWidget(scrollAreaWidgetContents_7);

        tabWebuiPageLayout->addWidget(scrollArea_7);

        tabOption->addWidget(tabWebuiPage);
        tabAdvancedPage = new QWidget();
        tabAdvancedPage->setObjectName(QString::fromUtf8("tabAdvancedPage"));
        advPageLayout = new QVBoxLayout(tabAdvancedPage);
        advPageLayout->setObjectName(QString::fromUtf8("advPageLayout"));
        advPageLayout->setContentsMargins(0, 0, 0, 0);
        tabOption->addWidget(tabAdvancedPage);
        hsplitter->addWidget(tabOption);

        verticalLayout_3->addWidget(hsplitter);

        buttonBox = new QDialogButtonBox(OptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        QWidget::setTabOrder(tabOption, comboI18n);
        QWidget::setTabOrder(comboI18n, checkUseSystemIcon);
        QWidget::setTabOrder(checkUseSystemIcon, checkUseCustomTheme);
        QWidget::setTabOrder(checkUseCustomTheme, customThemeFilePath);
        QWidget::setTabOrder(customThemeFilePath, checkStartPaused);
        QWidget::setTabOrder(checkStartPaused, spinPort);
        QWidget::setTabOrder(spinPort, checkUPnP);
        QWidget::setTabOrder(checkUPnP, textWebUiUsername);
        QWidget::setTabOrder(textWebUiUsername, checkWebUi);
        QWidget::setTabOrder(checkWebUi, textSavePath);
        QWidget::setTabOrder(textSavePath, scrollArea_7);
        QWidget::setTabOrder(scrollArea_7, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, spinWebUiPort);
        QWidget::setTabOrder(spinWebUiPort, textWebUiPassword);
        QWidget::setTabOrder(textWebUiPassword, buttonBox);
        QWidget::setTabOrder(buttonBox, tabSelection);
        QWidget::setTabOrder(tabSelection, scrollArea);
        QWidget::setTabOrder(scrollArea, confirmDeletion);
        QWidget::setTabOrder(confirmDeletion, checkAltRowColors);
        QWidget::setTabOrder(checkAltRowColors, actionTorrentDlOnDblClBox);
        QWidget::setTabOrder(actionTorrentDlOnDblClBox, actionTorrentFnOnDblClBox);
        QWidget::setTabOrder(actionTorrentFnOnDblClBox, checkStartup);
        QWidget::setTabOrder(checkStartup, checkShowSplash);
        QWidget::setTabOrder(checkShowSplash, checkStartMinimized);
        QWidget::setTabOrder(checkStartMinimized, checkProgramExitConfirm);
        QWidget::setTabOrder(checkProgramExitConfirm, checkShowSystray);
        QWidget::setTabOrder(checkShowSystray, checkMinimizeToSysTray);
        QWidget::setTabOrder(checkMinimizeToSysTray, checkCloseToSystray);
        QWidget::setTabOrder(checkCloseToSystray, checkAssociateTorrents);
        QWidget::setTabOrder(checkAssociateTorrents, checkAssociateMagnetLinks);
        QWidget::setTabOrder(checkAssociateMagnetLinks, checkPreventFromSuspendWhenDownloading);
        QWidget::setTabOrder(checkPreventFromSuspendWhenDownloading, checkPreventFromSuspendWhenSeeding);
        QWidget::setTabOrder(checkPreventFromSuspendWhenSeeding, checkAdditionDialog);
        QWidget::setTabOrder(checkAdditionDialog, checkAdditionDialogFront);
        QWidget::setTabOrder(checkAdditionDialogFront, checkPreallocateAll);
        QWidget::setTabOrder(checkPreallocateAll, checkTempFolder);
        QWidget::setTabOrder(checkTempFolder, textTempPath);
        QWidget::setTabOrder(textTempPath, checkAppendqB);
        QWidget::setTabOrder(checkAppendqB, scanFoldersView);
        QWidget::setTabOrder(scanFoldersView, addWatchedFolderButton);
        QWidget::setTabOrder(addWatchedFolderButton, editWatchedFolderButton);
        QWidget::setTabOrder(editWatchedFolderButton, removeWatchedFolderButton);
        QWidget::setTabOrder(removeWatchedFolderButton, checkExportDir);
        QWidget::setTabOrder(checkExportDir, textExportDir);
        QWidget::setTabOrder(textExportDir, checkExportDirFin);
        QWidget::setTabOrder(checkExportDirFin, textExportDirFin);
        QWidget::setTabOrder(textExportDirFin, groupMailNotification);
        QWidget::setTabOrder(groupMailNotification, lineEditDestEmail);
        QWidget::setTabOrder(lineEditDestEmail, lineEditSmtpServer);
        QWidget::setTabOrder(lineEditSmtpServer, groupMailNotifAuth);
        QWidget::setTabOrder(groupMailNotifAuth, mailNotifUsername);
        QWidget::setTabOrder(mailNotifUsername, mailNotifPassword);
        QWidget::setTabOrder(mailNotifPassword, checkSmtpSSL);
        QWidget::setTabOrder(checkSmtpSSL, autoRunBox);
        QWidget::setTabOrder(autoRunBox, lineEditAutoRun);
        QWidget::setTabOrder(lineEditAutoRun, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, randomButton);
        QWidget::setTabOrder(randomButton, checkMaxConnecs);
        QWidget::setTabOrder(checkMaxConnecs, spinMaxConnec);
        QWidget::setTabOrder(spinMaxConnec, checkMaxConnecsPerTorrent);
        QWidget::setTabOrder(checkMaxConnecsPerTorrent, spinMaxConnecPerTorrent);
        QWidget::setTabOrder(spinMaxConnecPerTorrent, checkMaxUploadsPerTorrent);
        QWidget::setTabOrder(checkMaxUploadsPerTorrent, spinMaxUploadsPerTorrent);
        QWidget::setTabOrder(spinMaxUploadsPerTorrent, checkMaxUploads);
        QWidget::setTabOrder(checkMaxUploads, spinMaxUploads);
        QWidget::setTabOrder(spinMaxUploads, comboProxyType);
        QWidget::setTabOrder(comboProxyType, textProxyIP);
        QWidget::setTabOrder(textProxyIP, spinProxyPort);
        QWidget::setTabOrder(spinProxyPort, checkProxyPeerConnecs);
        QWidget::setTabOrder(checkProxyPeerConnecs, isProxyOnlyForTorrents);
        QWidget::setTabOrder(isProxyOnlyForTorrents, checkProxyAuth);
        QWidget::setTabOrder(checkProxyAuth, textProxyUsername);
        QWidget::setTabOrder(textProxyUsername, textProxyPassword);
        QWidget::setTabOrder(textProxyPassword, checkIPFilter);
        QWidget::setTabOrder(checkIPFilter, textFilterPath);
        QWidget::setTabOrder(textFilterPath, IpFilterRefreshBtn);
        QWidget::setTabOrder(IpFilterRefreshBtn, checkIpFilterTrackers);
        QWidget::setTabOrder(checkIpFilterTrackers, scrollArea_9);
        QWidget::setTabOrder(scrollArea_9, spinUploadLimit);
        QWidget::setTabOrder(spinUploadLimit, spinDownloadLimit);
        QWidget::setTabOrder(spinDownloadLimit, groupBoxSchedule);
        QWidget::setTabOrder(groupBoxSchedule, timeEditScheduleTo);
        QWidget::setTabOrder(timeEditScheduleTo, timeEditScheduleFrom);
        QWidget::setTabOrder(timeEditScheduleFrom, comboBoxScheduleDays);
        QWidget::setTabOrder(comboBoxScheduleDays, spinUploadLimitAlt);
        QWidget::setTabOrder(spinUploadLimitAlt, spinDownloadLimitAlt);
        QWidget::setTabOrder(spinDownloadLimitAlt, checkLimitLocalPeerRate);
        QWidget::setTabOrder(checkLimitLocalPeerRate, checkLimitTransportOverhead);
        QWidget::setTabOrder(checkLimitTransportOverhead, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, checkDHT);
        QWidget::setTabOrder(checkDHT, checkPeX);
        QWidget::setTabOrder(checkPeX, checkLSD);
        QWidget::setTabOrder(checkLSD, comboEncryption);
        QWidget::setTabOrder(comboEncryption, checkAnonymousMode);
        QWidget::setTabOrder(checkAnonymousMode, checkEnableQueueing);
        QWidget::setTabOrder(checkEnableQueueing, spinMaxActiveDownloads);
        QWidget::setTabOrder(spinMaxActiveDownloads, spinMaxActiveUploads);
        QWidget::setTabOrder(spinMaxActiveUploads, spinMaxActiveTorrents);
        QWidget::setTabOrder(spinMaxActiveTorrents, checkWebUIUPnP);
        QWidget::setTabOrder(checkWebUIUPnP, checkWebUiHttps);
        QWidget::setTabOrder(checkWebUiHttps, checkBypassLocalAuth);
        QWidget::setTabOrder(checkBypassLocalAuth, checkBypassAuthSubnetWhitelist);
        QWidget::setTabOrder(checkBypassAuthSubnetWhitelist, IPSubnetWhitelistButton);
        QWidget::setTabOrder(IPSubnetWhitelistButton, checkDynDNS);
        QWidget::setTabOrder(checkDynDNS, comboDNSService);
        QWidget::setTabOrder(comboDNSService, registerDNSBtn);
        QWidget::setTabOrder(registerDNSBtn, domainNameTxt);
        QWidget::setTabOrder(domainNameTxt, DNSUsernameTxt);
        QWidget::setTabOrder(DNSUsernameTxt, DNSPasswordTxt);

        retranslateUi(OptionsDialog);
        QObject::connect(checkMaxConnecs, SIGNAL(toggled(bool)), spinMaxConnec, SLOT(setEnabled(bool)));
        QObject::connect(checkMaxConnecsPerTorrent, SIGNAL(toggled(bool)), spinMaxConnecPerTorrent, SLOT(setEnabled(bool)));
        QObject::connect(checkMaxUploadsPerTorrent, SIGNAL(toggled(bool)), spinMaxUploadsPerTorrent, SLOT(setEnabled(bool)));
        QObject::connect(checkMaxUploads, SIGNAL(toggled(bool)), spinMaxUploads, SLOT(setEnabled(bool)));
        QObject::connect(checkMaxRatio, SIGNAL(toggled(bool)), spinMaxRatio, SLOT(setEnabled(bool)));
        QObject::connect(checkMaxSeedingMinutes, SIGNAL(toggled(bool)), spinMaxSeedingMinutes, SLOT(setEnabled(bool)));
        QObject::connect(deleteTorrentBox, SIGNAL(toggled(bool)), deleteTorrentWarningIcon, SLOT(setVisible(bool)));
        QObject::connect(deleteTorrentBox, SIGNAL(toggled(bool)), deleteTorrentWarningLabel, SLOT(setVisible(bool)));

        tabSelection->setCurrentRow(0);
        tabOption->setCurrentIndex(0);
        actionTorrentDlOnDblClBox->setCurrentIndex(0);
        comboFileLogAgeType->setCurrentIndex(1);
        contentLayoutComboBox->setCurrentIndex(0);
        comboCategoryDefaultPathChanged->setCurrentIndex(1);
        comboCategoryChanged->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QCoreApplication::translate("OptionsDialog", "Options", nullptr));

        const bool __sortingEnabled = tabSelection->isSortingEnabled();
        tabSelection->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = tabSelection->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("OptionsDialog", "Behavior", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = tabSelection->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("OptionsDialog", "Downloads", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = tabSelection->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("OptionsDialog", "Connection", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = tabSelection->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("OptionsDialog", "Speed", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = tabSelection->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("OptionsDialog", "BitTorrent", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = tabSelection->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("OptionsDialog", "RSS", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = tabSelection->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("OptionsDialog", "Web UI", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = tabSelection->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("OptionsDialog", "Advanced", nullptr));
        tabSelection->setSortingEnabled(__sortingEnabled);

        UISettingsBox->setTitle(QCoreApplication::translate("OptionsDialog", "Interface", nullptr));
        checkUseCustomTheme->setTitle(QCoreApplication::translate("OptionsDialog", "Use custom UI Theme", nullptr));
        label_16->setText(QCoreApplication::translate("OptionsDialog", "UI Theme file:", nullptr));
        label_9->setText(QCoreApplication::translate("OptionsDialog", "Language:", nullptr));
        checkUseSystemIcon->setText(QCoreApplication::translate("OptionsDialog", "Use system icon theme", nullptr));
        label_15->setText(QCoreApplication::translate("OptionsDialog", "Changing Interface settings requires application restart", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("OptionsDialog", "Transfer List", nullptr));
#if QT_CONFIG(tooltip)
        confirmDeletion->setToolTip(QCoreApplication::translate("OptionsDialog", "Shows a confirmation dialog upon torrent deletion", nullptr));
#endif // QT_CONFIG(tooltip)
        confirmDeletion->setText(QCoreApplication::translate("OptionsDialog", "Confirm when deleting torrents", nullptr));
        checkAltRowColors->setText(QCoreApplication::translate("OptionsDialog", "Use alternating row colors", nullptr));
        checkHideZero->setText(QCoreApplication::translate("OptionsDialog", "Hide zero and infinity values", nullptr));
        comboHideZero->setItemText(0, QCoreApplication::translate("OptionsDialog", "Always", nullptr));
        comboHideZero->setItemText(1, QCoreApplication::translate("OptionsDialog", "Paused torrents only", nullptr));

        groupBox_7->setTitle(QCoreApplication::translate("OptionsDialog", "Action on double-click", nullptr));
        lblDlList_2->setText(QCoreApplication::translate("OptionsDialog", "Downloading torrents:", nullptr));
        actionTorrentDlOnDblClBox->setItemText(0, QCoreApplication::translate("OptionsDialog", "Start / Stop Torrent", nullptr));
        actionTorrentDlOnDblClBox->setItemText(1, QCoreApplication::translate("OptionsDialog", "Open destination folder", nullptr));
        actionTorrentDlOnDblClBox->setItemText(2, QCoreApplication::translate("OptionsDialog", "Preview file, otherwise open destination folder", nullptr));
        actionTorrentDlOnDblClBox->setItemText(3, QCoreApplication::translate("OptionsDialog", "No action", nullptr));

        lblUploadList->setText(QCoreApplication::translate("OptionsDialog", "Completed torrents:", nullptr));
        actionTorrentFnOnDblClBox->setItemText(0, QCoreApplication::translate("OptionsDialog", "Start / Stop Torrent", nullptr));
        actionTorrentFnOnDblClBox->setItemText(1, QCoreApplication::translate("OptionsDialog", "Open destination folder", nullptr));
        actionTorrentFnOnDblClBox->setItemText(2, QCoreApplication::translate("OptionsDialog", "Preview file, otherwise open destination folder", nullptr));
        actionTorrentFnOnDblClBox->setItemText(3, QCoreApplication::translate("OptionsDialog", "No action", nullptr));

        systrayBox->setTitle(QCoreApplication::translate("OptionsDialog", "Desktop", nullptr));
        checkStartup->setText(QCoreApplication::translate("OptionsDialog", "Start qBittorrent on Windows start up", nullptr));
        checkShowSplash->setText(QCoreApplication::translate("OptionsDialog", "Show splash screen on start up", nullptr));
#if QT_CONFIG(tooltip)
        checkStartMinimized->setToolTip(QCoreApplication::translate("OptionsDialog", "When qBittorrent is started, the main window will be minimized", nullptr));
#endif // QT_CONFIG(tooltip)
        checkStartMinimized->setText(QCoreApplication::translate("OptionsDialog", "Start qBittorrent minimized", nullptr));
#if QT_CONFIG(tooltip)
        checkProgramExitConfirm->setToolTip(QCoreApplication::translate("OptionsDialog", "Shows a confirmation dialog when exiting with active torrents", nullptr));
#endif // QT_CONFIG(tooltip)
        checkProgramExitConfirm->setText(QCoreApplication::translate("OptionsDialog", "Confirmation on exit when torrents are active", nullptr));
        checkProgramAutoExitConfirm->setText(QCoreApplication::translate("OptionsDialog", "Confirmation on auto-exit when downloads finish", nullptr));
        checkShowSystray->setTitle(QCoreApplication::translate("OptionsDialog", "Show &qBittorrent in notification area", nullptr));
#if QT_CONFIG(tooltip)
        checkMinimizeToSysTray->setToolTip(QCoreApplication::translate("OptionsDialog", "When minimizing, the main window is closed and must be reopened from the systray icon", nullptr));
#endif // QT_CONFIG(tooltip)
        checkMinimizeToSysTray->setText(QCoreApplication::translate("OptionsDialog", "Minimize qBittorrent to notification area", nullptr));
#if QT_CONFIG(tooltip)
        checkCloseToSystray->setToolTip(QCoreApplication::translate("OptionsDialog", "The systray icon will still be visible when closing the main window", nullptr));
#endif // QT_CONFIG(tooltip)
        checkCloseToSystray->setText(QCoreApplication::translate("OptionsDialog", "Close qBittorrent to notification area", nullptr));
        labelTrayIconStyle->setText(QCoreApplication::translate("OptionsDialog", "Tray icon style:", nullptr));
        comboTrayIcon->setItemText(0, QCoreApplication::translate("OptionsDialog", "Normal", nullptr));
        comboTrayIcon->setItemText(1, QCoreApplication::translate("OptionsDialog", "Monochrome (for dark theme)", nullptr));
        comboTrayIcon->setItemText(2, QCoreApplication::translate("OptionsDialog", "Monochrome (for light theme)", nullptr));

        groupFileAssociation->setTitle(QCoreApplication::translate("OptionsDialog", "File association", nullptr));
        checkAssociateTorrents->setText(QCoreApplication::translate("OptionsDialog", "Use qBittorrent for .torrent files", nullptr));
        checkAssociateMagnetLinks->setText(QCoreApplication::translate("OptionsDialog", "Use qBittorrent for magnet links", nullptr));
        checkProgramUpdates->setText(QCoreApplication::translate("OptionsDialog", "Check for program updates", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OptionsDialog", "Power Management", nullptr));
        checkPreventFromSuspendWhenDownloading->setText(QCoreApplication::translate("OptionsDialog", "Inhibit system sleep when torrents are downloading", nullptr));
        checkPreventFromSuspendWhenSeeding->setText(QCoreApplication::translate("OptionsDialog", "Inhibit system sleep when torrents are seeding", nullptr));
        checkFileLog->setTitle(QCoreApplication::translate("OptionsDialog", "&Log file", nullptr));
        label_4->setText(QCoreApplication::translate("OptionsDialog", "Save path:", nullptr));
#if QT_CONFIG(tooltip)
        checkFileLogBackup->setToolTip(QCoreApplication::translate("OptionsDialog", "Creates an additional log file after the log file reaches the specified file size", nullptr));
#endif // QT_CONFIG(tooltip)
        checkFileLogBackup->setText(QCoreApplication::translate("OptionsDialog", "Backup the log file after:", nullptr));
        spinFileLogSize->setSuffix(QCoreApplication::translate("OptionsDialog", " KiB", nullptr));
        checkFileLogDelete->setText(QCoreApplication::translate("OptionsDialog", "Delete backup logs older than:", nullptr));
        comboFileLogAgeType->setItemText(0, QCoreApplication::translate("OptionsDialog", "days", nullptr));
        comboFileLogAgeType->setItemText(1, QCoreApplication::translate("OptionsDialog", "months", nullptr));
        comboFileLogAgeType->setItemText(2, QCoreApplication::translate("OptionsDialog", "years", nullptr));

        torrentAdditionBox->setTitle(QCoreApplication::translate("OptionsDialog", "When adding a torrent", nullptr));
        checkAdditionDialog->setTitle(QCoreApplication::translate("OptionsDialog", "Display &torrent content and some options", nullptr));
        checkAdditionDialogFront->setText(QCoreApplication::translate("OptionsDialog", "Bring torrent dialog to the front", nullptr));
        contentLayoutLabel->setText(QCoreApplication::translate("OptionsDialog", "Torrent content layout:", nullptr));
        contentLayoutComboBox->setItemText(0, QCoreApplication::translate("OptionsDialog", "Original", nullptr));
        contentLayoutComboBox->setItemText(1, QCoreApplication::translate("OptionsDialog", "Create subfolder", nullptr));
        contentLayoutComboBox->setItemText(2, QCoreApplication::translate("OptionsDialog", "Don't create subfolder", nullptr));

#if QT_CONFIG(tooltip)
        checkStartPaused->setToolTip(QCoreApplication::translate("OptionsDialog", "The torrent will be added to download list in a paused state", nullptr));
#endif // QT_CONFIG(tooltip)
        checkStartPaused->setText(QCoreApplication::translate("OptionsDialog", "Do not start the download automatically", nullptr));
#if QT_CONFIG(tooltip)
        deleteTorrentBox->setToolTip(QCoreApplication::translate("OptionsDialog", "Whether the .torrent file should be deleted after adding it", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteTorrentBox->setTitle(QCoreApplication::translate("OptionsDialog", "De&lete .torrent files afterwards ", nullptr));
#if QT_CONFIG(tooltip)
        deleteCancelledTorrentBox->setToolTip(QCoreApplication::translate("OptionsDialog", "Also delete .torrent files whose addition was cancelled", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteCancelledTorrentBox->setText(QCoreApplication::translate("OptionsDialog", "Also when addition is cancelled", nullptr));
        deleteTorrentWarningLabel->setText(QCoreApplication::translate("OptionsDialog", "Warning! Data loss possible!", nullptr));
#if QT_CONFIG(tooltip)
        checkPreallocateAll->setToolTip(QCoreApplication::translate("OptionsDialog", "Allocate full file sizes on disk before starting downloads, to minimize fragmentation. Only useful for HDDs.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkPreallocateAll->setText(QCoreApplication::translate("OptionsDialog", "Pre-allocate disk space for all files", nullptr));
        checkAppendqB->setText(QCoreApplication::translate("OptionsDialog", "Append .!qB extension to incomplete files", nullptr));
#if QT_CONFIG(tooltip)
        checkRecursiveDownload->setToolTip(QCoreApplication::translate("OptionsDialog", "When a torrent is downloaded, offer to add torrents from any .torrent files found inside it", nullptr));
#endif // QT_CONFIG(tooltip)
        checkRecursiveDownload->setText(QCoreApplication::translate("OptionsDialog", "Enable recursive download dialog", nullptr));
        groupSavingManagement->setTitle(QCoreApplication::translate("OptionsDialog", "Saving Management", nullptr));
        label_40->setText(QCoreApplication::translate("OptionsDialog", "Default Torrent Management Mode:", nullptr));
        comboSavingMode->setItemText(0, QCoreApplication::translate("OptionsDialog", "Manual", nullptr));
        comboSavingMode->setItemText(1, QCoreApplication::translate("OptionsDialog", "Automatic", nullptr));

#if QT_CONFIG(tooltip)
        comboSavingMode->setToolTip(QCoreApplication::translate("OptionsDialog", "Automatic: Various torrent properties (e.g. save path) will be decided by the associated category\n"
"Manual: Various torrent properties (e.g. save path) must be assigned manually", nullptr));
#endif // QT_CONFIG(tooltip)
        labelTorrentCategoryChanged->setText(QCoreApplication::translate("OptionsDialog", "When Torrent Category changed:", nullptr));
        comboTorrentCategoryChanged->setItemText(0, QCoreApplication::translate("OptionsDialog", "Relocate torrent", nullptr));
        comboTorrentCategoryChanged->setItemText(1, QCoreApplication::translate("OptionsDialog", "Switch torrent to Manual Mode", nullptr));

        labelCategoryDefaultPathChanged->setText(QCoreApplication::translate("OptionsDialog", "When Default Save Path changed:", nullptr));
        comboCategoryDefaultPathChanged->setItemText(0, QCoreApplication::translate("OptionsDialog", "Relocate affected torrents", nullptr));
        comboCategoryDefaultPathChanged->setItemText(1, QCoreApplication::translate("OptionsDialog", "Switch affected torrents to Manual Mode", nullptr));

        labelCategoryChanged->setText(QCoreApplication::translate("OptionsDialog", "When Category Save Path changed:", nullptr));
        comboCategoryChanged->setItemText(0, QCoreApplication::translate("OptionsDialog", "Relocate affected torrents", nullptr));
        comboCategoryChanged->setItemText(1, QCoreApplication::translate("OptionsDialog", "Switch affected torrents to Manual Mode", nullptr));

        checkUseSubcategories->setText(QCoreApplication::translate("OptionsDialog", "Use Subcategories", nullptr));
        checkExportDirFin->setText(QCoreApplication::translate("OptionsDialog", "Copy .torrent files for finished downloads to:", nullptr));
        labelSavePath->setText(QCoreApplication::translate("OptionsDialog", "Default Save Path:", nullptr));
        checkExportDir->setText(QCoreApplication::translate("OptionsDialog", "Copy .torrent files to:", nullptr));
        checkTempFolder->setText(QCoreApplication::translate("OptionsDialog", "Keep incomplete torrents in:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("OptionsDialog", "Automatically add torrents from:", nullptr));
        addWatchedFolderButton->setText(QCoreApplication::translate("OptionsDialog", "Add...", nullptr));
        editWatchedFolderButton->setText(QCoreApplication::translate("OptionsDialog", "Options..", nullptr));
        removeWatchedFolderButton->setText(QCoreApplication::translate("OptionsDialog", "Remove", nullptr));
        groupMailNotification->setTitle(QCoreApplication::translate("OptionsDialog", "Email notification &upon download completion", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("OptionsDialog", "Receiver", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("OptionsDialog", "To:", "To receiver"));
        label_3->setText(QCoreApplication::translate("OptionsDialog", "SMTP server:", nullptr));
#if QT_CONFIG(tooltip)
        label_25->setToolTip(QCoreApplication::translate("OptionsDialog", "Sender", nullptr));
#endif // QT_CONFIG(tooltip)
        label_25->setText(QCoreApplication::translate("OptionsDialog", "From:", "From sender"));
        checkSmtpSSL->setText(QCoreApplication::translate("OptionsDialog", "This server requires a secure connection (SSL)", nullptr));
        groupMailNotifAuth->setTitle(QCoreApplication::translate("OptionsDialog", "Authentication", nullptr));
        label_7->setText(QCoreApplication::translate("OptionsDialog", "Username:", nullptr));
        label_8->setText(QCoreApplication::translate("OptionsDialog", "Password:", nullptr));
        autoRunBox->setTitle(QCoreApplication::translate("OptionsDialog", "Run e&xternal program on torrent completion", nullptr));
        autoRunConsole->setText(QCoreApplication::translate("OptionsDialog", "Show console window", nullptr));
        label_24->setText(QCoreApplication::translate("OptionsDialog", "Peer connection protocol:", nullptr));
        comboProtocol->setItemText(0, QCoreApplication::translate("OptionsDialog", "TCP and \316\274TP", nullptr));

        ListeningPortBox->setTitle(QCoreApplication::translate("OptionsDialog", "Listening Port", nullptr));
        lbl_ports->setText(QCoreApplication::translate("OptionsDialog", "Port used for incoming connections:", nullptr));
#if QT_CONFIG(tooltip)
        spinPort->setToolTip(QCoreApplication::translate("OptionsDialog", "Set to 0 to let your system pick an unused port", nullptr));
#endif // QT_CONFIG(tooltip)
        spinPort->setSpecialValueText(QCoreApplication::translate("OptionsDialog", "Any", nullptr));
        randomButton->setText(QCoreApplication::translate("OptionsDialog", "Random", nullptr));
        checkUPnP->setText(QCoreApplication::translate("OptionsDialog", "Use UPnP / NAT-PMP port forwarding from my router", nullptr));
        nbConnecBox->setTitle(QCoreApplication::translate("OptionsDialog", "Connections Limits", nullptr));
        checkMaxConnecsPerTorrent->setText(QCoreApplication::translate("OptionsDialog", "Maximum number of connections per torrent:", nullptr));
        checkMaxConnecs->setText(QCoreApplication::translate("OptionsDialog", "Global maximum number of connections:", nullptr));
        checkMaxUploadsPerTorrent->setText(QCoreApplication::translate("OptionsDialog", "Maximum number of upload slots per torrent:", nullptr));
        checkMaxUploads->setText(QCoreApplication::translate("OptionsDialog", "Global maximum number of upload slots:", nullptr));
        groupProxy->setTitle(QCoreApplication::translate("OptionsDialog", "Proxy Server", nullptr));
        ProxyType_lbl->setText(QCoreApplication::translate("OptionsDialog", "Type:", nullptr));
        comboProxyType->setItemText(0, QCoreApplication::translate("OptionsDialog", "(None)", nullptr));
        comboProxyType->setItemText(1, QCoreApplication::translate("OptionsDialog", "SOCKS4", nullptr));
        comboProxyType->setItemText(2, QCoreApplication::translate("OptionsDialog", "SOCKS5", nullptr));
        comboProxyType->setItemText(3, QCoreApplication::translate("OptionsDialog", "HTTP", nullptr));

        lblProxyIP->setText(QCoreApplication::translate("OptionsDialog", "Host:", nullptr));
        lblProxyPort->setText(QCoreApplication::translate("OptionsDialog", "Port:", nullptr));
#if QT_CONFIG(tooltip)
        checkProxyPeerConnecs->setToolTip(QCoreApplication::translate("OptionsDialog", "Otherwise, the proxy server is only used for tracker connections", nullptr));
#endif // QT_CONFIG(tooltip)
        checkProxyPeerConnecs->setText(QCoreApplication::translate("OptionsDialog", "Use proxy for peer connections", nullptr));
#if QT_CONFIG(tooltip)
        isProxyOnlyForTorrents->setToolTip(QCoreApplication::translate("OptionsDialog", "RSS feeds, search engine, software updates or anything else other than torrent transfers and related operations (such as peer exchanges) will use a direct connection", nullptr));
#endif // QT_CONFIG(tooltip)
        isProxyOnlyForTorrents->setText(QCoreApplication::translate("OptionsDialog", "Use proxy only for torrents", nullptr));
        checkProxyAuth->setTitle(QCoreApplication::translate("OptionsDialog", "A&uthentication", nullptr));
        lblProxyUsername->setText(QCoreApplication::translate("OptionsDialog", "Username:", nullptr));
        lblProxyPassword->setText(QCoreApplication::translate("OptionsDialog", "Password:", nullptr));
        label_23->setText(QCoreApplication::translate("OptionsDialog", "Info: The password is saved unencrypted", nullptr));
        groupIPFilter->setTitle(QCoreApplication::translate("OptionsDialog", "IP Fi&ltering", nullptr));
        checkIPFilter->setText(QCoreApplication::translate("OptionsDialog", "Filter path (.dat, .p2p, .p2b):", nullptr));
#if QT_CONFIG(tooltip)
        IpFilterRefreshBtn->setToolTip(QCoreApplication::translate("OptionsDialog", "Reload the filter", nullptr));
#endif // QT_CONFIG(tooltip)
        banListButton->setText(QCoreApplication::translate("OptionsDialog", "Manually banned IP addresses...", nullptr));
        checkIpFilterTrackers->setText(QCoreApplication::translate("OptionsDialog", "Apply to trackers", nullptr));
        rateLimitBox->setTitle(QCoreApplication::translate("OptionsDialog", "Global Rate Limits", nullptr));
        spinUploadLimit->setSpecialValueText(QCoreApplication::translate("OptionsDialog", "\342\210\236", nullptr));
        spinUploadLimit->setSuffix(QCoreApplication::translate("OptionsDialog", " KiB/s", nullptr));
        spinDownloadLimit->setSpecialValueText(QCoreApplication::translate("OptionsDialog", "\342\210\236", nullptr));
        spinDownloadLimit->setSuffix(QCoreApplication::translate("OptionsDialog", " KiB/s", nullptr));
        label_10->setText(QCoreApplication::translate("OptionsDialog", "Upload:", nullptr));
        label_11->setText(QCoreApplication::translate("OptionsDialog", "Download:", nullptr));
        altRateLimitBox->setTitle(QCoreApplication::translate("OptionsDialog", "Alternative Rate Limits", nullptr));
        spinDownloadLimitAlt->setSpecialValueText(QCoreApplication::translate("OptionsDialog", "\342\210\236", nullptr));
        spinDownloadLimitAlt->setSuffix(QCoreApplication::translate("OptionsDialog", " KiB/s", nullptr));
        groupBoxSchedule->setTitle(QCoreApplication::translate("OptionsDialog", "Schedule &the use of alternative rate limits", nullptr));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("OptionsDialog", "Start time", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("OptionsDialog", "From:", "From start time"));
#if QT_CONFIG(tooltip)
        label_17->setToolTip(QCoreApplication::translate("OptionsDialog", "End time", nullptr));
#endif // QT_CONFIG(tooltip)
        label_17->setText(QCoreApplication::translate("OptionsDialog", "To:", "To end time"));
        label_18->setText(QCoreApplication::translate("OptionsDialog", "When:", nullptr));
        comboBoxScheduleDays->setItemText(0, QCoreApplication::translate("OptionsDialog", "Every day", nullptr));
        comboBoxScheduleDays->setItemText(1, QCoreApplication::translate("OptionsDialog", "Weekdays", nullptr));
        comboBoxScheduleDays->setItemText(2, QCoreApplication::translate("OptionsDialog", "Weekends", nullptr));

        spinUploadLimitAlt->setSpecialValueText(QCoreApplication::translate("OptionsDialog", "\342\210\236", nullptr));
        spinUploadLimitAlt->setSuffix(QCoreApplication::translate("OptionsDialog", " KiB/s", nullptr));
        label_13->setText(QCoreApplication::translate("OptionsDialog", "Upload:", nullptr));
        label_14->setText(QCoreApplication::translate("OptionsDialog", "Download:", nullptr));
        rateLimitsGroupBox->setTitle(QCoreApplication::translate("OptionsDialog", "Rate Limits Settings", nullptr));
        checkLimituTPConnections->setText(QCoreApplication::translate("OptionsDialog", "Apply rate limit to \302\265TP protocol", nullptr));
        checkLimitTransportOverhead->setText(QCoreApplication::translate("OptionsDialog", "Apply rate limit to transport overhead", nullptr));
        checkLimitLocalPeerRate->setText(QCoreApplication::translate("OptionsDialog", "Apply rate limit to peers on LAN", nullptr));
        AddBTFeaturesBox->setTitle(QCoreApplication::translate("OptionsDialog", "Privacy", nullptr));
#if QT_CONFIG(tooltip)
        checkDHT->setToolTip(QCoreApplication::translate("OptionsDialog", "Find peers on the DHT network", nullptr));
#endif // QT_CONFIG(tooltip)
        checkDHT->setText(QCoreApplication::translate("OptionsDialog", "Enable DHT (decentralized network) to find more peers", nullptr));
#if QT_CONFIG(tooltip)
        checkPeX->setToolTip(QCoreApplication::translate("OptionsDialog", "Exchange peers with compatible Bittorrent clients (\302\265Torrent, Vuze, ...)", nullptr));
#endif // QT_CONFIG(tooltip)
        checkPeX->setText(QCoreApplication::translate("OptionsDialog", "Enable Peer Exchange (PeX) to find more peers", nullptr));
#if QT_CONFIG(tooltip)
        checkLSD->setToolTip(QCoreApplication::translate("OptionsDialog", "Look for peers on your local network", nullptr));
#endif // QT_CONFIG(tooltip)
        checkLSD->setText(QCoreApplication::translate("OptionsDialog", "Enable Local Peer Discovery to find more peers", nullptr));
        lbl_encryption->setText(QCoreApplication::translate("OptionsDialog", "Encryption mode:", nullptr));
        comboEncryption->setItemText(0, QCoreApplication::translate("OptionsDialog", "Allow encryption", nullptr));
        comboEncryption->setItemText(1, QCoreApplication::translate("OptionsDialog", "Require encryption", nullptr));
        comboEncryption->setItemText(2, QCoreApplication::translate("OptionsDialog", "Disable encryption", nullptr));

#if QT_CONFIG(tooltip)
        comboEncryption->setToolTip(QCoreApplication::translate("OptionsDialog", "Allow encryption: Connect to peers regardless of setting\n"
"Require encryption: Only connect to peers with protocol encryption\n"
"Disable encryption: Only connect to peers without protocol encryption", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkAnonymousMode->setToolTip(QCoreApplication::translate("OptionsDialog", "Enable when using a proxy or a VPN connection", nullptr));
#endif // QT_CONFIG(tooltip)
        checkAnonymousMode->setText(QCoreApplication::translate("OptionsDialog", "Enable anonymous mode", nullptr));
        label_anonymous->setText(QCoreApplication::translate("OptionsDialog", "(<a href=\"https://github.com/qbittorrent/qBittorrent/wiki/Anonymous-Mode\">More information</a>)", nullptr));
        checkEnableQueueing->setTitle(QCoreApplication::translate("OptionsDialog", "&Torrent Queueing", nullptr));
        label_max_active_dl->setText(QCoreApplication::translate("OptionsDialog", "Maximum active downloads:", nullptr));
        spinMaxActiveDownloads->setSpecialValueText(QCoreApplication::translate("OptionsDialog", "\342\210\236", nullptr));
        label_max_active_up->setText(QCoreApplication::translate("OptionsDialog", "Maximum active uploads:", nullptr));
        spinMaxActiveUploads->setSpecialValueText(QCoreApplication::translate("OptionsDialog", "\342\210\236", nullptr));
        maxActiveTorrents_lbl->setText(QCoreApplication::translate("OptionsDialog", "Maximum active torrents:", nullptr));
        spinMaxActiveTorrents->setSpecialValueText(QCoreApplication::translate("OptionsDialog", "\342\210\236", nullptr));
        checkIgnoreSlowTorrentsForQueueing->setTitle(QCoreApplication::translate("OptionsDialog", "Do not count slow torrents in these limits", nullptr));
        spinDownloadRateForSlowTorrents->setSuffix(QCoreApplication::translate("OptionsDialog", " KiB/s", nullptr));
        spinUploadRateForSlowTorrents->setSuffix(QCoreApplication::translate("OptionsDialog", " KiB/s", nullptr));
        labelUploadRateForSlowTorrents->setText(QCoreApplication::translate("OptionsDialog", "Upload rate threshold:", nullptr));
        labelDownloadRateForSlowTorrents->setText(QCoreApplication::translate("OptionsDialog", "Download rate threshold:", nullptr));
        spinSlowTorrentsInactivityTimer->setSuffix(QCoreApplication::translate("OptionsDialog", " sec", nullptr));
        labelSlowTorrentInactivityTimer->setText(QCoreApplication::translate("OptionsDialog", "Torrent inactivity timer:", nullptr));
        seedingLimitsBox->setTitle(QCoreApplication::translate("OptionsDialog", "Seeding Limits", nullptr));
        spinMaxSeedingMinutes->setSuffix(QCoreApplication::translate("OptionsDialog", " min", nullptr));
        checkMaxSeedingMinutes->setText(QCoreApplication::translate("OptionsDialog", "When seeding time reaches", nullptr));
        label->setText(QCoreApplication::translate("OptionsDialog", "then", nullptr));
        comboRatioLimitAct->setItemText(0, QCoreApplication::translate("OptionsDialog", "Pause torrent", nullptr));
        comboRatioLimitAct->setItemText(1, QCoreApplication::translate("OptionsDialog", "Remove torrent", nullptr));
        comboRatioLimitAct->setItemText(2, QCoreApplication::translate("OptionsDialog", "Remove torrent and its files", nullptr));
        comboRatioLimitAct->setItemText(3, QCoreApplication::translate("OptionsDialog", "Enable super seeding for torrent", nullptr));

        checkMaxRatio->setText(QCoreApplication::translate("OptionsDialog", "When ratio reaches", nullptr));
        checkEnableAddTrackers->setTitle(QCoreApplication::translate("OptionsDialog", "A&utomatically add these trackers to new downloads:", nullptr));
        groupRSSReader->setTitle(QCoreApplication::translate("OptionsDialog", "RSS Reader", nullptr));
        checkRSSEnable->setText(QCoreApplication::translate("OptionsDialog", "Enable fetching RSS feeds", nullptr));
        label_111->setText(QCoreApplication::translate("OptionsDialog", "Feeds refresh interval:", nullptr));
        label_12->setText(QCoreApplication::translate("OptionsDialog", "Maximum number of articles per feed:", nullptr));
        spinRSSRefreshInterval->setSuffix(QCoreApplication::translate("OptionsDialog", " min", nullptr));
        groupRSSAutoDownloader->setTitle(QCoreApplication::translate("OptionsDialog", "RSS Torrent Auto Downloader", nullptr));
        checkRSSAutoDownloaderEnable->setText(QCoreApplication::translate("OptionsDialog", "Enable auto downloading of RSS torrents", nullptr));
        btnEditRules->setText(QCoreApplication::translate("OptionsDialog", "Edit auto downloading rules...", nullptr));
        groupRSSSmartEpisodeFilter->setTitle(QCoreApplication::translate("OptionsDialog", "RSS Smart Episode Filter", nullptr));
        checkSmartFilterDownloadRepacks->setText(QCoreApplication::translate("OptionsDialog", "Download REPACK/PROPER episodes", nullptr));
        label_5->setText(QCoreApplication::translate("OptionsDialog", "Filters:", nullptr));
        checkWebUi->setTitle(QCoreApplication::translate("OptionsDialog", "Web User Interface (Remote control)", nullptr));
        lblWebUiAddress->setText(QCoreApplication::translate("OptionsDialog", "IP address:", nullptr));
#if QT_CONFIG(tooltip)
        textWebUiAddress->setToolTip(QCoreApplication::translate("OptionsDialog", "IP address that the Web UI will bind to.\n"
"Specify an IPv4 or IPv6 address. You can specify \"0.0.0.0\" for any IPv4 address,\n"
"\"::\" for any IPv6 address, or \"*\" for both IPv4 and IPv6.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblWebUiPort->setText(QCoreApplication::translate("OptionsDialog", "Port:", nullptr));
        checkWebUIUPnP->setText(QCoreApplication::translate("OptionsDialog", "Use UPnP / NAT-PMP to forward the port from my router", nullptr));
        checkWebUiHttps->setTitle(QCoreApplication::translate("OptionsDialog", "&Use HTTPS instead of HTTP", nullptr));
        lblWebUiKey->setText(QCoreApplication::translate("OptionsDialog", "Key:", nullptr));
        lblWebUiCrt->setText(QCoreApplication::translate("OptionsDialog", "Certificate:", nullptr));
        lblWebUIInfo->setText(QCoreApplication::translate("OptionsDialog", "<a href=https://httpd.apache.org/docs/current/ssl/ssl_faq.html#aboutcerts>Information about certificates</a>", nullptr));
        groupWebUiAuth->setTitle(QCoreApplication::translate("OptionsDialog", "Authentication", nullptr));
        lblWebUiUsername->setText(QCoreApplication::translate("OptionsDialog", "Username:", nullptr));
        lblWebUiPassword->setText(QCoreApplication::translate("OptionsDialog", "Password:", nullptr));
        textWebUiPassword->setPlaceholderText(QCoreApplication::translate("OptionsDialog", "Change current password", nullptr));
        checkBypassLocalAuth->setText(QCoreApplication::translate("OptionsDialog", "Bypass authentication for clients on localhost", nullptr));
        checkBypassAuthSubnetWhitelist->setText(QCoreApplication::translate("OptionsDialog", "Bypass authentication for clients in whitelisted IP subnets", nullptr));
        IPSubnetWhitelistButton->setText(QCoreApplication::translate("OptionsDialog", "IP subnet whitelist...", nullptr));
        lblBanCounter->setText(QCoreApplication::translate("OptionsDialog", "Ban client after consecutive failures:", nullptr));
        spinBanCounter->setSpecialValueText(QCoreApplication::translate("OptionsDialog", "Never", nullptr));
        lblBanDuration->setText(QCoreApplication::translate("OptionsDialog", "ban for:", nullptr));
        spinBanDuration->setSuffix(QCoreApplication::translate("OptionsDialog", " sec", nullptr));
        lblSessionTimeout->setText(QCoreApplication::translate("OptionsDialog", "Session timeout:", nullptr));
        spinSessionTimeout->setSpecialValueText(QCoreApplication::translate("OptionsDialog", "Disabled", nullptr));
        spinSessionTimeout->setSuffix(QCoreApplication::translate("OptionsDialog", " sec", nullptr));
        groupAltWebUI->setTitle(QCoreApplication::translate("OptionsDialog", "Use alternative Web UI", nullptr));
        labelWebUIRootFolder->setText(QCoreApplication::translate("OptionsDialog", "Files location:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("OptionsDialog", "Security", nullptr));
        checkClickjacking->setText(QCoreApplication::translate("OptionsDialog", "Enable clickjacking protection", nullptr));
        checkCSRFProtection->setText(QCoreApplication::translate("OptionsDialog", "Enable Cross-Site Request Forgery (CSRF) protection", nullptr));
        checkSecureCookie->setText(QCoreApplication::translate("OptionsDialog", "Enable cookie Secure flag (requires HTTPS)", nullptr));
        groupHostHeaderValidation->setTitle(QCoreApplication::translate("OptionsDialog", "Enable Host header validation", nullptr));
        labelServerDomains->setText(QCoreApplication::translate("OptionsDialog", "Server domains:", nullptr));
#if QT_CONFIG(tooltip)
        textServerDomains->setToolTip(QCoreApplication::translate("OptionsDialog", "Whitelist for filtering HTTP Host header values.\n"
"In order to defend against DNS rebinding attack,\n"
"you should put in domain names used by WebUI server.\n"
"\n"
"Use ';' to split multiple entries. Can use wildcard '*'.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupWebUIAddCustomHTTPHeaders->setTitle(QCoreApplication::translate("OptionsDialog", "Add custom HTTP headers", nullptr));
        textWebUICustomHTTPHeaders->setPlaceholderText(QCoreApplication::translate("OptionsDialog", "Header: value pairs, one per line", nullptr));
        groupEnableReverseProxySupport->setTitle(QCoreApplication::translate("OptionsDialog", "Enable reverse proxy support", nullptr));
        lblReverseProxiesList->setText(QCoreApplication::translate("OptionsDialog", "Trusted proxies list:", nullptr));
#if QT_CONFIG(tooltip)
        textTrustedReverseProxiesList->setToolTip(QCoreApplication::translate("OptionsDialog", "Specify reverse proxy IPs in order to use forwarded client address (X-Forwarded-For attribute), use ';' to split multiple entries.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkDynDNS->setTitle(QCoreApplication::translate("OptionsDialog", "Upda&te my dynamic domain name", nullptr));
        label_19->setText(QCoreApplication::translate("OptionsDialog", "Service:", nullptr));

        registerDNSBtn->setText(QCoreApplication::translate("OptionsDialog", "Register", nullptr));
        label_20->setText(QCoreApplication::translate("OptionsDialog", "Domain name:", nullptr));
        label_21->setText(QCoreApplication::translate("OptionsDialog", "Username:", nullptr));
        label_22->setText(QCoreApplication::translate("OptionsDialog", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
