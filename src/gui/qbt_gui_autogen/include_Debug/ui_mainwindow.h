/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionOptions;
    QAction *actionAbout;
    QAction *actionStart;
    QAction *actionPause;
    QAction *actionStartAll;
    QAction *actionPauseAll;
    QAction *actionDelete;
    QAction *actionDownloadFromURL;
    QAction *actionCreateTorrent;
    QAction *actionDocumentation;
    QAction *actionSetGlobalSpeedLimits;
    QAction *actionBottomQueuePos;
    QAction *actionTopQueuePos;
    QAction *actionDecreaseQueuePos;
    QAction *actionIncreaseQueuePos;
    QAction *actionUseAlternativeSpeedLimits;
    QAction *actionTopToolBar;
    QAction *actionShowStatusbar;
    QAction *actionSpeedInTitleBar;
    QAction *actionRSSReader;
    QAction *actionSearchWidget;
    QAction *actionLock;
    QAction *actionDonateMoney;
    QAction *actionAutoExit;
    QAction *actionAutoSuspend;
    QAction *actionAutoHibernate;
    QAction *actionAutoShutdown;
    QAction *actionAutoShutdownDisabled;
    QAction *actionToggleVisibility;
    QAction *actionMinimize;
    QAction *actionStatistics;
    QAction *actionCheckForUpdates;
    QAction *actionManageCookies;
    QAction *actionExecutionLogs;
    QAction *actionNormalMessages;
    QAction *actionInformationMessages;
    QAction *actionWarningMessages;
    QAction *actionCriticalMessages;
    QAction *actionCloseWindow;
    QWidget *centralWidget;
    QVBoxLayout *centralWidgetLayout;
    QMenuBar *menubar;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuOptions;
    QMenu *menuAutoShutdownOnDownloadsCompletion;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuLog;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(914, 563);
        MainWindow->setContextMenuPolicy(Qt::CustomContextMenu);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionStartAll = new QAction(MainWindow);
        actionStartAll->setObjectName(QString::fromUtf8("actionStartAll"));
        actionPauseAll = new QAction(MainWindow);
        actionPauseAll->setObjectName(QString::fromUtf8("actionPauseAll"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionDownloadFromURL = new QAction(MainWindow);
        actionDownloadFromURL->setObjectName(QString::fromUtf8("actionDownloadFromURL"));
        actionCreateTorrent = new QAction(MainWindow);
        actionCreateTorrent->setObjectName(QString::fromUtf8("actionCreateTorrent"));
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        actionSetGlobalSpeedLimits = new QAction(MainWindow);
        actionSetGlobalSpeedLimits->setObjectName(QString::fromUtf8("actionSetGlobalSpeedLimits"));
        actionBottomQueuePos = new QAction(MainWindow);
        actionBottomQueuePos->setObjectName(QString::fromUtf8("actionBottomQueuePos"));
        actionBottomQueuePos->setVisible(true);
        actionTopQueuePos = new QAction(MainWindow);
        actionTopQueuePos->setObjectName(QString::fromUtf8("actionTopQueuePos"));
        actionTopQueuePos->setVisible(true);
        actionDecreaseQueuePos = new QAction(MainWindow);
        actionDecreaseQueuePos->setObjectName(QString::fromUtf8("actionDecreaseQueuePos"));
        actionDecreaseQueuePos->setVisible(true);
        actionIncreaseQueuePos = new QAction(MainWindow);
        actionIncreaseQueuePos->setObjectName(QString::fromUtf8("actionIncreaseQueuePos"));
        actionIncreaseQueuePos->setVisible(true);
        actionUseAlternativeSpeedLimits = new QAction(MainWindow);
        actionUseAlternativeSpeedLimits->setObjectName(QString::fromUtf8("actionUseAlternativeSpeedLimits"));
        actionUseAlternativeSpeedLimits->setCheckable(true);
        actionTopToolBar = new QAction(MainWindow);
        actionTopToolBar->setObjectName(QString::fromUtf8("actionTopToolBar"));
        actionTopToolBar->setCheckable(true);
        actionShowStatusbar = new QAction(MainWindow);
        actionShowStatusbar->setObjectName(QString::fromUtf8("actionShowStatusbar"));
        actionShowStatusbar->setCheckable(true);
        actionSpeedInTitleBar = new QAction(MainWindow);
        actionSpeedInTitleBar->setObjectName(QString::fromUtf8("actionSpeedInTitleBar"));
        actionSpeedInTitleBar->setCheckable(true);
        actionRSSReader = new QAction(MainWindow);
        actionRSSReader->setObjectName(QString::fromUtf8("actionRSSReader"));
        actionRSSReader->setCheckable(true);
        actionSearchWidget = new QAction(MainWindow);
        actionSearchWidget->setObjectName(QString::fromUtf8("actionSearchWidget"));
        actionSearchWidget->setCheckable(true);
        actionLock = new QAction(MainWindow);
        actionLock->setObjectName(QString::fromUtf8("actionLock"));
#if QT_CONFIG(shortcut)
        actionLock->setShortcut(QString::fromUtf8("Ctrl+L"));
#endif // QT_CONFIG(shortcut)
        actionDonateMoney = new QAction(MainWindow);
        actionDonateMoney->setObjectName(QString::fromUtf8("actionDonateMoney"));
        actionAutoExit = new QAction(MainWindow);
        actionAutoExit->setObjectName(QString::fromUtf8("actionAutoExit"));
        actionAutoExit->setCheckable(true);
        actionAutoSuspend = new QAction(MainWindow);
        actionAutoSuspend->setObjectName(QString::fromUtf8("actionAutoSuspend"));
        actionAutoSuspend->setCheckable(true);
        actionAutoHibernate = new QAction(MainWindow);
        actionAutoHibernate->setObjectName(QString::fromUtf8("actionAutoHibernate"));
        actionAutoHibernate->setCheckable(true);
        actionAutoShutdown = new QAction(MainWindow);
        actionAutoShutdown->setObjectName(QString::fromUtf8("actionAutoShutdown"));
        actionAutoShutdown->setCheckable(true);
        actionAutoShutdownDisabled = new QAction(MainWindow);
        actionAutoShutdownDisabled->setObjectName(QString::fromUtf8("actionAutoShutdownDisabled"));
        actionAutoShutdownDisabled->setCheckable(true);
        actionToggleVisibility = new QAction(MainWindow);
        actionToggleVisibility->setObjectName(QString::fromUtf8("actionToggleVisibility"));
        actionMinimize = new QAction(MainWindow);
        actionMinimize->setObjectName(QString::fromUtf8("actionMinimize"));
        actionMinimize->setText(QString::fromUtf8("Minimize"));
        actionStatistics = new QAction(MainWindow);
        actionStatistics->setObjectName(QString::fromUtf8("actionStatistics"));
        actionCheckForUpdates = new QAction(MainWindow);
        actionCheckForUpdates->setObjectName(QString::fromUtf8("actionCheckForUpdates"));
        actionManageCookies = new QAction(MainWindow);
        actionManageCookies->setObjectName(QString::fromUtf8("actionManageCookies"));
        actionExecutionLogs = new QAction(MainWindow);
        actionExecutionLogs->setObjectName(QString::fromUtf8("actionExecutionLogs"));
        actionExecutionLogs->setCheckable(true);
        actionNormalMessages = new QAction(MainWindow);
        actionNormalMessages->setObjectName(QString::fromUtf8("actionNormalMessages"));
        actionNormalMessages->setCheckable(true);
        actionInformationMessages = new QAction(MainWindow);
        actionInformationMessages->setObjectName(QString::fromUtf8("actionInformationMessages"));
        actionInformationMessages->setCheckable(true);
        actionWarningMessages = new QAction(MainWindow);
        actionWarningMessages->setObjectName(QString::fromUtf8("actionWarningMessages"));
        actionWarningMessages->setCheckable(true);
        actionCriticalMessages = new QAction(MainWindow);
        actionCriticalMessages->setObjectName(QString::fromUtf8("actionCriticalMessages"));
        actionCriticalMessages->setCheckable(true);
        actionCloseWindow = new QAction(MainWindow);
        actionCloseWindow->setObjectName(QString::fromUtf8("actionCloseWindow"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidgetLayout = new QVBoxLayout(centralWidget);
        centralWidgetLayout->setObjectName(QString::fromUtf8("centralWidgetLayout"));
        centralWidgetLayout->setContentsMargins(7, 3, 5, 0);
        MainWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 914, 22));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuAutoShutdownOnDownloadsCompletion = new QMenu(menuOptions);
        menuAutoShutdownOnDownloadsCompletion->setObjectName(QString::fromUtf8("menuAutoShutdownOnDownloadsCompletion"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuLog = new QMenu(menuView);
        menuLog->setObjectName(QString::fromUtf8("menuLog"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setOrientation(Qt::Horizontal);
        toolBar->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuEdit->addAction(actionStart);
        menuEdit->addAction(actionPause);
        menuEdit->addAction(actionStartAll);
        menuEdit->addAction(actionPauseAll);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDelete);
        menuEdit->addAction(actionTopQueuePos);
        menuEdit->addAction(actionIncreaseQueuePos);
        menuEdit->addAction(actionDecreaseQueuePos);
        menuEdit->addAction(actionBottomQueuePos);
        menuHelp->addAction(actionDocumentation);
        menuHelp->addAction(actionCheckForUpdates);
        menuHelp->addSeparator();
        menuHelp->addAction(actionDonateMoney);
        menuHelp->addAction(actionAbout);
        menuOptions->addAction(actionCreateTorrent);
        menuOptions->addSeparator();
        menuOptions->addAction(actionManageCookies);
        menuOptions->addAction(actionOptions);
        menuOptions->addSeparator();
        menuOptions->addAction(menuAutoShutdownOnDownloadsCompletion->menuAction());
        menuAutoShutdownOnDownloadsCompletion->addAction(actionAutoShutdownDisabled);
        menuAutoShutdownOnDownloadsCompletion->addAction(actionAutoExit);
        menuAutoShutdownOnDownloadsCompletion->addAction(actionAutoSuspend);
        menuAutoShutdownOnDownloadsCompletion->addAction(actionAutoHibernate);
        menuAutoShutdownOnDownloadsCompletion->addAction(actionAutoShutdown);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionDownloadFromURL);
        menuFile->addAction(actionCloseWindow);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuView->addSeparator();
        menuView->addAction(actionTopToolBar);
        menuView->addAction(actionShowStatusbar);
        menuView->addAction(actionSpeedInTitleBar);
        menuView->addSeparator();
        menuView->addAction(actionSearchWidget);
        menuView->addAction(actionRSSReader);
        menuView->addAction(menuLog->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionStatistics);
        menuView->addSeparator();
        menuView->addAction(actionLock);
        menuLog->addAction(actionExecutionLogs);
        menuLog->addSeparator();
        menuLog->addAction(actionNormalMessages);
        menuLog->addAction(actionInformationMessages);
        menuLog->addAction(actionWarningMessages);
        menuLog->addAction(actionCriticalMessages);
        toolBar->addAction(actionDownloadFromURL);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionDelete);
        toolBar->addSeparator();
        toolBar->addAction(actionStart);
        toolBar->addAction(actionPause);
        toolBar->addAction(actionTopQueuePos);
        toolBar->addAction(actionIncreaseQueuePos);
        toolBar->addAction(actionDecreaseQueuePos);
        toolBar->addAction(actionBottomQueuePos);
        toolBar->addSeparator();
        toolBar->addAction(actionOptions);
        toolBar->addAction(actionLock);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionOpen->setText(QCoreApplication::translate("MainWindow", "&Add Torrent File...", nullptr));
        actionOpen->setIconText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        actionOptions->setText(QCoreApplication::translate("MainWindow", "&Options...", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        actionStart->setText(QCoreApplication::translate("MainWindow", "&Resume", nullptr));
        actionPause->setText(QCoreApplication::translate("MainWindow", "&Pause", nullptr));
        actionStartAll->setText(QCoreApplication::translate("MainWindow", "R&esume All", nullptr));
        actionPauseAll->setText(QCoreApplication::translate("MainWindow", "P&ause All", nullptr));
        actionDelete->setText(QCoreApplication::translate("MainWindow", "&Delete", nullptr));
        actionDownloadFromURL->setText(QCoreApplication::translate("MainWindow", "Add Torrent &Link...", nullptr));
        actionDownloadFromURL->setIconText(QCoreApplication::translate("MainWindow", "Open URL", nullptr));
        actionCreateTorrent->setText(QCoreApplication::translate("MainWindow", "Torrent &Creator", nullptr));
        actionDocumentation->setText(QCoreApplication::translate("MainWindow", "&Documentation", nullptr));
        actionSetGlobalSpeedLimits->setText(QCoreApplication::translate("MainWindow", "Set Global Speed Limits...", nullptr));
        actionBottomQueuePos->setText(QCoreApplication::translate("MainWindow", "Bottom of Queue", nullptr));
#if QT_CONFIG(tooltip)
        actionBottomQueuePos->setToolTip(QCoreApplication::translate("MainWindow", "Move to the bottom of the queue", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTopQueuePos->setText(QCoreApplication::translate("MainWindow", "Top of Queue", nullptr));
#if QT_CONFIG(tooltip)
        actionTopQueuePos->setToolTip(QCoreApplication::translate("MainWindow", "Move to the top of the queue", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDecreaseQueuePos->setText(QCoreApplication::translate("MainWindow", "Move Down Queue", nullptr));
#if QT_CONFIG(tooltip)
        actionDecreaseQueuePos->setToolTip(QCoreApplication::translate("MainWindow", "Move down in the queue", nullptr));
#endif // QT_CONFIG(tooltip)
        actionIncreaseQueuePos->setText(QCoreApplication::translate("MainWindow", "Move Up Queue", nullptr));
#if QT_CONFIG(tooltip)
        actionIncreaseQueuePos->setToolTip(QCoreApplication::translate("MainWindow", "Move up in the queue", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUseAlternativeSpeedLimits->setText(QCoreApplication::translate("MainWindow", "Alternative Speed Limits", nullptr));
#if QT_CONFIG(tooltip)
        actionUseAlternativeSpeedLimits->setToolTip(QCoreApplication::translate("MainWindow", "Alternative Speed Limits", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTopToolBar->setText(QCoreApplication::translate("MainWindow", "&Top Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        actionTopToolBar->setToolTip(QCoreApplication::translate("MainWindow", "Display Top Toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowStatusbar->setText(QCoreApplication::translate("MainWindow", "Status &Bar", nullptr));
        actionSpeedInTitleBar->setText(QCoreApplication::translate("MainWindow", "S&peed in Title Bar", nullptr));
#if QT_CONFIG(tooltip)
        actionSpeedInTitleBar->setToolTip(QCoreApplication::translate("MainWindow", "Show Transfer Speed in Title Bar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRSSReader->setText(QCoreApplication::translate("MainWindow", "&RSS Reader", nullptr));
        actionSearchWidget->setText(QCoreApplication::translate("MainWindow", "Search &Engine", nullptr));
        actionLock->setText(QCoreApplication::translate("MainWindow", "L&ock qBittorrent", nullptr));
        actionLock->setIconText(QCoreApplication::translate("MainWindow", "Lock", nullptr));
        actionDonateMoney->setText(QCoreApplication::translate("MainWindow", "Do&nate!", nullptr));
#if QT_CONFIG(tooltip)
        actionDonateMoney->setToolTip(QCoreApplication::translate("MainWindow", "If you like qBittorrent, please donate!", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAutoExit->setText(QCoreApplication::translate("MainWindow", "&Exit qBittorrent", nullptr));
        actionAutoSuspend->setText(QCoreApplication::translate("MainWindow", "&Suspend System", nullptr));
        actionAutoHibernate->setText(QCoreApplication::translate("MainWindow", "&Hibernate System", nullptr));
        actionAutoShutdown->setText(QCoreApplication::translate("MainWindow", "S&hutdown System", nullptr));
        actionAutoShutdownDisabled->setText(QCoreApplication::translate("MainWindow", "&Do nothing", nullptr));
        actionToggleVisibility->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        actionStatistics->setText(QCoreApplication::translate("MainWindow", "&Statistics", nullptr));
        actionCheckForUpdates->setText(QCoreApplication::translate("MainWindow", "Check for Updates", nullptr));
#if QT_CONFIG(tooltip)
        actionCheckForUpdates->setToolTip(QCoreApplication::translate("MainWindow", "Check for Program Updates", nullptr));
#endif // QT_CONFIG(tooltip)
        actionManageCookies->setText(QCoreApplication::translate("MainWindow", "Manage Cookies...", nullptr));
#if QT_CONFIG(tooltip)
        actionManageCookies->setToolTip(QCoreApplication::translate("MainWindow", "Manage stored network cookies", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExecutionLogs->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        actionNormalMessages->setText(QCoreApplication::translate("MainWindow", "Normal Messages", nullptr));
        actionInformationMessages->setText(QCoreApplication::translate("MainWindow", "Information Messages", nullptr));
        actionWarningMessages->setText(QCoreApplication::translate("MainWindow", "Warning Messages", nullptr));
        actionCriticalMessages->setText(QCoreApplication::translate("MainWindow", "Critical Messages", nullptr));
        actionCloseWindow->setText(QCoreApplication::translate("MainWindow", "Close Window", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        menuAutoShutdownOnDownloadsCompletion->setTitle(QCoreApplication::translate("MainWindow", "On Downloads &Done", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menuLog->setTitle(QCoreApplication::translate("MainWindow", "&Log", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
