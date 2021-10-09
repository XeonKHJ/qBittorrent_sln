/********************************************************************************
** Form generated from reading UI file 'propertieswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESWIDGET_H
#define UI_PROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <gui/torrentcontenttreeview.h>

QT_BEGIN_NAMESPACE

class Ui_PropertiesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedProperties;
    QWidget *pageGeneral;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QWidget *groupBar;
    QGridLayout *groupBarLayout;
    QLabel *labelDownloadedPieces;
    QLabel *labelProgressVal;
    QLabel *labelPiecesAvailability;
    QLabel *labelAverageAvailabilityVal;
    QLabel *tempAvailabilityBarArea;
    QLabel *tempProgressBarArea;
    QFrame *lineBelowBars;
    QGroupBox *groupTransferBox;
    QGridLayout *gridLayout_2;
    QLabel *labelDlSpeedVal;
    QLabel *labelUpSpeed;
    QLabel *labelUpSpeedVal;
    QLabel *labelPeers;
    QLabel *labelConnections;
    QLabel *labelReannounceInVal;
    QLabel *labelETAVal;
    QLabel *labelDlLimit;
    QLabel *labelRatio;
    QLabel *labelConnectionsVal;
    QLabel *labelPeersVal;
    QLabel *labelDownloaded;
    QLabel *labelUpLimit;
    QLabel *labelLastSeenComplete;
    QLabel *labelDlLimitVal;
    QLabel *labelUpTotalVal;
    QLabel *labelReannounceIn;
    QLabel *labelLastSeenCompleteVal;
    QLabel *labelSeeds;
    QLabel *labelDlSpeed;
    QLabel *labelDlTotalVal;
    QLabel *labelWastedVal;
    QLabel *labelShareRatioVal;
    QLabel *labelUploaded;
    QLabel *labelSeedsVal;
    QLabel *labelElapsedVal;
    QLabel *labelTimeActive;
    QLabel *labelUpLimitVal;
    QLabel *labelETA;
    QLabel *labelWasted;
    QGroupBox *groupInfosBox;
    QGridLayout *gridLayout;
    QLabel *labelTotalSize;
    QLabel *labelTotalSizeVal;
    QLabel *labelTotalPieces;
    QLabel *labelTotalPiecesVal;
    QLabel *labelCreatedBy;
    QLabel *labelCreatedByVal;
    QLabel *labelAddedOn;
    QLabel *labelAddedOnVal;
    QLabel *labelCompletedOn;
    QLabel *labelCompletedOnVal;
    QLabel *labelCreatedOn;
    QLabel *labelCreatedOnVal;
    QLabel *labelInfohash1;
    QLabel *labelInfohash2;
    QLabel *labelInfohash2Val;
    QLabel *labelSavePath;
    QLabel *labelComment;
    QLabel *labelInfohash1Val;
    QLabel *labelSavePathVal;
    QLabel *labelCommentVal;
    QWidget *pageTrackers;
    QHBoxLayout *hBoxLayoutTrackers;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_2;
    QPushButton *trackerUpButton;
    QPushButton *trackerDownButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *pagePeers;
    QVBoxLayout *vBoxLayoutPeerPage;
    QWidget *pageSources;
    QVBoxLayout *verticalLayout_9;
    QListWidget *listWebSeeds;
    QWidget *pageContents;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *contentFilterLayout;
    QPushButton *selectAllButton;
    QPushButton *selectNoneButton;
    QSpacerItem *horizontalSpacer;
    TorrentContentTreeView *filesList;
    QWidget *pageSpeed;
    QVBoxLayout *speedLayout;

    void setupUi(QWidget *PropertiesWidget)
    {
        if (PropertiesWidget->objectName().isEmpty())
            PropertiesWidget->setObjectName(QString::fromUtf8("PropertiesWidget"));
        PropertiesWidget->resize(551, 452);
        verticalLayout = new QVBoxLayout(PropertiesWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedProperties = new QStackedWidget(PropertiesWidget);
        stackedProperties->setObjectName(QString::fromUtf8("stackedProperties"));
        pageGeneral = new QWidget();
        pageGeneral->setObjectName(QString::fromUtf8("pageGeneral"));
        verticalLayout_7 = new QVBoxLayout(pageGeneral);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(pageGeneral);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 549, 450));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBar = new QWidget(scrollAreaWidgetContents);
        groupBar->setObjectName(QString::fromUtf8("groupBar"));
        groupBarLayout = new QGridLayout(groupBar);
        groupBarLayout->setObjectName(QString::fromUtf8("groupBarLayout"));
        groupBarLayout->setContentsMargins(-1, 4, -1, 4);
        labelDownloadedPieces = new QLabel(groupBar);
        labelDownloadedPieces->setObjectName(QString::fromUtf8("labelDownloadedPieces"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelDownloadedPieces->sizePolicy().hasHeightForWidth());
        labelDownloadedPieces->setSizePolicy(sizePolicy);
        labelDownloadedPieces->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        groupBarLayout->addWidget(labelDownloadedPieces, 0, 0, 1, 1);

        labelProgressVal = new QLabel(groupBar);
        labelProgressVal->setObjectName(QString::fromUtf8("labelProgressVal"));
        sizePolicy.setHeightForWidth(labelProgressVal->sizePolicy().hasHeightForWidth());
        labelProgressVal->setSizePolicy(sizePolicy);
        labelProgressVal->setTextFormat(Qt::PlainText);

        groupBarLayout->addWidget(labelProgressVal, 0, 2, 1, 1);

        labelPiecesAvailability = new QLabel(groupBar);
        labelPiecesAvailability->setObjectName(QString::fromUtf8("labelPiecesAvailability"));
        sizePolicy.setHeightForWidth(labelPiecesAvailability->sizePolicy().hasHeightForWidth());
        labelPiecesAvailability->setSizePolicy(sizePolicy);
        labelPiecesAvailability->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        groupBarLayout->addWidget(labelPiecesAvailability, 1, 0, 1, 1);

        labelAverageAvailabilityVal = new QLabel(groupBar);
        labelAverageAvailabilityVal->setObjectName(QString::fromUtf8("labelAverageAvailabilityVal"));
        sizePolicy.setHeightForWidth(labelAverageAvailabilityVal->sizePolicy().hasHeightForWidth());
        labelAverageAvailabilityVal->setSizePolicy(sizePolicy);
        labelAverageAvailabilityVal->setTextFormat(Qt::PlainText);

        groupBarLayout->addWidget(labelAverageAvailabilityVal, 1, 2, 1, 1);

        tempAvailabilityBarArea = new QLabel(groupBar);
        tempAvailabilityBarArea->setObjectName(QString::fromUtf8("tempAvailabilityBarArea"));
        tempAvailabilityBarArea->setTextFormat(Qt::PlainText);

        groupBarLayout->addWidget(tempAvailabilityBarArea, 1, 1, 1, 1);

        tempProgressBarArea = new QLabel(groupBar);
        tempProgressBarArea->setObjectName(QString::fromUtf8("tempProgressBarArea"));
        tempProgressBarArea->setTextFormat(Qt::PlainText);

        groupBarLayout->addWidget(tempProgressBarArea, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBar);

        lineBelowBars = new QFrame(scrollAreaWidgetContents);
        lineBelowBars->setObjectName(QString::fromUtf8("lineBelowBars"));
        lineBelowBars->setFrameShape(QFrame::HLine);
        lineBelowBars->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(lineBelowBars);

        groupTransferBox = new QGroupBox(scrollAreaWidgetContents);
        groupTransferBox->setObjectName(QString::fromUtf8("groupTransferBox"));
        gridLayout_2 = new QGridLayout(groupTransferBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 4, -1, 4);
        labelDlSpeedVal = new QLabel(groupTransferBox);
        labelDlSpeedVal->setObjectName(QString::fromUtf8("labelDlSpeedVal"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelDlSpeedVal->sizePolicy().hasHeightForWidth());
        labelDlSpeedVal->setSizePolicy(sizePolicy1);
        labelDlSpeedVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelDlSpeedVal, 2, 1, 1, 1);

        labelUpSpeed = new QLabel(groupTransferBox);
        labelUpSpeed->setObjectName(QString::fromUtf8("labelUpSpeed"));
        sizePolicy.setHeightForWidth(labelUpSpeed->sizePolicy().hasHeightForWidth());
        labelUpSpeed->setSizePolicy(sizePolicy);
        labelUpSpeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelUpSpeed, 2, 2, 1, 1);

        labelUpSpeedVal = new QLabel(groupTransferBox);
        labelUpSpeedVal->setObjectName(QString::fromUtf8("labelUpSpeedVal"));
        sizePolicy1.setHeightForWidth(labelUpSpeedVal->sizePolicy().hasHeightForWidth());
        labelUpSpeedVal->setSizePolicy(sizePolicy1);
        labelUpSpeedVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelUpSpeedVal, 2, 3, 1, 4);

        labelPeers = new QLabel(groupTransferBox);
        labelPeers->setObjectName(QString::fromUtf8("labelPeers"));
        sizePolicy.setHeightForWidth(labelPeers->sizePolicy().hasHeightForWidth());
        labelPeers->setSizePolicy(sizePolicy);
        labelPeers->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelPeers, 2, 4, 1, 1);

        labelConnections = new QLabel(groupTransferBox);
        labelConnections->setObjectName(QString::fromUtf8("labelConnections"));
        sizePolicy.setHeightForWidth(labelConnections->sizePolicy().hasHeightForWidth());
        labelConnections->setSizePolicy(sizePolicy);
        labelConnections->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelConnections, 0, 4, 1, 1);

        labelReannounceInVal = new QLabel(groupTransferBox);
        labelReannounceInVal->setObjectName(QString::fromUtf8("labelReannounceInVal"));
        sizePolicy1.setHeightForWidth(labelReannounceInVal->sizePolicy().hasHeightForWidth());
        labelReannounceInVal->setSizePolicy(sizePolicy1);
        labelReannounceInVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelReannounceInVal, 4, 3, 1, 1);

        labelETAVal = new QLabel(groupTransferBox);
        labelETAVal->setObjectName(QString::fromUtf8("labelETAVal"));
        sizePolicy1.setHeightForWidth(labelETAVal->sizePolicy().hasHeightForWidth());
        labelETAVal->setSizePolicy(sizePolicy1);
        labelETAVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelETAVal, 0, 3, 1, 1);

        labelDlLimit = new QLabel(groupTransferBox);
        labelDlLimit->setObjectName(QString::fromUtf8("labelDlLimit"));
        sizePolicy.setHeightForWidth(labelDlLimit->sizePolicy().hasHeightForWidth());
        labelDlLimit->setSizePolicy(sizePolicy);
        labelDlLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelDlLimit, 3, 0, 1, 1);

        labelRatio = new QLabel(groupTransferBox);
        labelRatio->setObjectName(QString::fromUtf8("labelRatio"));
        sizePolicy.setHeightForWidth(labelRatio->sizePolicy().hasHeightForWidth());
        labelRatio->setSizePolicy(sizePolicy);
        labelRatio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelRatio, 4, 0, 1, 1);

        labelConnectionsVal = new QLabel(groupTransferBox);
        labelConnectionsVal->setObjectName(QString::fromUtf8("labelConnectionsVal"));
        sizePolicy1.setHeightForWidth(labelConnectionsVal->sizePolicy().hasHeightForWidth());
        labelConnectionsVal->setSizePolicy(sizePolicy1);
        labelConnectionsVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelConnectionsVal, 0, 5, 1, 1);

        labelPeersVal = new QLabel(groupTransferBox);
        labelPeersVal->setObjectName(QString::fromUtf8("labelPeersVal"));
        sizePolicy1.setHeightForWidth(labelPeersVal->sizePolicy().hasHeightForWidth());
        labelPeersVal->setSizePolicy(sizePolicy1);
        labelPeersVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelPeersVal, 2, 5, 1, 1);

        labelDownloaded = new QLabel(groupTransferBox);
        labelDownloaded->setObjectName(QString::fromUtf8("labelDownloaded"));
        sizePolicy.setHeightForWidth(labelDownloaded->sizePolicy().hasHeightForWidth());
        labelDownloaded->setSizePolicy(sizePolicy);
        labelDownloaded->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelDownloaded, 1, 0, 1, 1);

        labelUpLimit = new QLabel(groupTransferBox);
        labelUpLimit->setObjectName(QString::fromUtf8("labelUpLimit"));
        sizePolicy.setHeightForWidth(labelUpLimit->sizePolicy().hasHeightForWidth());
        labelUpLimit->setSizePolicy(sizePolicy);
        labelUpLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelUpLimit, 3, 2, 1, 1);

        labelLastSeenComplete = new QLabel(groupTransferBox);
        labelLastSeenComplete->setObjectName(QString::fromUtf8("labelLastSeenComplete"));
        sizePolicy.setHeightForWidth(labelLastSeenComplete->sizePolicy().hasHeightForWidth());
        labelLastSeenComplete->setSizePolicy(sizePolicy);
        labelLastSeenComplete->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelLastSeenComplete, 4, 4, 1, 1);

        labelDlLimitVal = new QLabel(groupTransferBox);
        labelDlLimitVal->setObjectName(QString::fromUtf8("labelDlLimitVal"));
        sizePolicy1.setHeightForWidth(labelDlLimitVal->sizePolicy().hasHeightForWidth());
        labelDlLimitVal->setSizePolicy(sizePolicy1);
        labelDlLimitVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelDlLimitVal, 3, 1, 1, 1);

        labelUpTotalVal = new QLabel(groupTransferBox);
        labelUpTotalVal->setObjectName(QString::fromUtf8("labelUpTotalVal"));
        sizePolicy1.setHeightForWidth(labelUpTotalVal->sizePolicy().hasHeightForWidth());
        labelUpTotalVal->setSizePolicy(sizePolicy1);
        labelUpTotalVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelUpTotalVal, 1, 3, 1, 4);

        labelReannounceIn = new QLabel(groupTransferBox);
        labelReannounceIn->setObjectName(QString::fromUtf8("labelReannounceIn"));
        sizePolicy.setHeightForWidth(labelReannounceIn->sizePolicy().hasHeightForWidth());
        labelReannounceIn->setSizePolicy(sizePolicy);
        labelReannounceIn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelReannounceIn, 4, 2, 1, 1);

        labelLastSeenCompleteVal = new QLabel(groupTransferBox);
        labelLastSeenCompleteVal->setObjectName(QString::fromUtf8("labelLastSeenCompleteVal"));
        sizePolicy1.setHeightForWidth(labelLastSeenCompleteVal->sizePolicy().hasHeightForWidth());
        labelLastSeenCompleteVal->setSizePolicy(sizePolicy1);
        labelLastSeenCompleteVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelLastSeenCompleteVal, 4, 5, 1, 1);

        labelSeeds = new QLabel(groupTransferBox);
        labelSeeds->setObjectName(QString::fromUtf8("labelSeeds"));
        sizePolicy.setHeightForWidth(labelSeeds->sizePolicy().hasHeightForWidth());
        labelSeeds->setSizePolicy(sizePolicy);
        labelSeeds->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelSeeds, 1, 4, 1, 1);

        labelDlSpeed = new QLabel(groupTransferBox);
        labelDlSpeed->setObjectName(QString::fromUtf8("labelDlSpeed"));
        sizePolicy.setHeightForWidth(labelDlSpeed->sizePolicy().hasHeightForWidth());
        labelDlSpeed->setSizePolicy(sizePolicy);
        labelDlSpeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelDlSpeed, 2, 0, 1, 1);

        labelDlTotalVal = new QLabel(groupTransferBox);
        labelDlTotalVal->setObjectName(QString::fromUtf8("labelDlTotalVal"));
        sizePolicy1.setHeightForWidth(labelDlTotalVal->sizePolicy().hasHeightForWidth());
        labelDlTotalVal->setSizePolicy(sizePolicy1);
        labelDlTotalVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelDlTotalVal, 1, 1, 1, 1);

        labelWastedVal = new QLabel(groupTransferBox);
        labelWastedVal->setObjectName(QString::fromUtf8("labelWastedVal"));
        sizePolicy1.setHeightForWidth(labelWastedVal->sizePolicy().hasHeightForWidth());
        labelWastedVal->setSizePolicy(sizePolicy1);
        labelWastedVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelWastedVal, 3, 5, 1, 1);

        labelShareRatioVal = new QLabel(groupTransferBox);
        labelShareRatioVal->setObjectName(QString::fromUtf8("labelShareRatioVal"));
        sizePolicy1.setHeightForWidth(labelShareRatioVal->sizePolicy().hasHeightForWidth());
        labelShareRatioVal->setSizePolicy(sizePolicy1);
        labelShareRatioVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelShareRatioVal, 4, 1, 1, 1);

        labelUploaded = new QLabel(groupTransferBox);
        labelUploaded->setObjectName(QString::fromUtf8("labelUploaded"));
        sizePolicy.setHeightForWidth(labelUploaded->sizePolicy().hasHeightForWidth());
        labelUploaded->setSizePolicy(sizePolicy);
        labelUploaded->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelUploaded, 1, 2, 1, 1);

        labelSeedsVal = new QLabel(groupTransferBox);
        labelSeedsVal->setObjectName(QString::fromUtf8("labelSeedsVal"));
        sizePolicy1.setHeightForWidth(labelSeedsVal->sizePolicy().hasHeightForWidth());
        labelSeedsVal->setSizePolicy(sizePolicy1);
        labelSeedsVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelSeedsVal, 1, 5, 1, 1);

        labelElapsedVal = new QLabel(groupTransferBox);
        labelElapsedVal->setObjectName(QString::fromUtf8("labelElapsedVal"));
        sizePolicy1.setHeightForWidth(labelElapsedVal->sizePolicy().hasHeightForWidth());
        labelElapsedVal->setSizePolicy(sizePolicy1);
        labelElapsedVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelElapsedVal, 0, 1, 1, 1);

        labelTimeActive = new QLabel(groupTransferBox);
        labelTimeActive->setObjectName(QString::fromUtf8("labelTimeActive"));
        sizePolicy.setHeightForWidth(labelTimeActive->sizePolicy().hasHeightForWidth());
        labelTimeActive->setSizePolicy(sizePolicy);
        labelTimeActive->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelTimeActive, 0, 0, 1, 1);

        labelUpLimitVal = new QLabel(groupTransferBox);
        labelUpLimitVal->setObjectName(QString::fromUtf8("labelUpLimitVal"));
        sizePolicy1.setHeightForWidth(labelUpLimitVal->sizePolicy().hasHeightForWidth());
        labelUpLimitVal->setSizePolicy(sizePolicy1);
        labelUpLimitVal->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelUpLimitVal, 3, 3, 1, 1);

        labelETA = new QLabel(groupTransferBox);
        labelETA->setObjectName(QString::fromUtf8("labelETA"));
        sizePolicy.setHeightForWidth(labelETA->sizePolicy().hasHeightForWidth());
        labelETA->setSizePolicy(sizePolicy);
        labelETA->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelETA, 0, 2, 1, 1);

        labelWasted = new QLabel(groupTransferBox);
        labelWasted->setObjectName(QString::fromUtf8("labelWasted"));
        sizePolicy.setHeightForWidth(labelWasted->sizePolicy().hasHeightForWidth());
        labelWasted->setSizePolicy(sizePolicy);
        labelWasted->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelWasted, 3, 4, 1, 1);


        verticalLayout_2->addWidget(groupTransferBox);

        groupInfosBox = new QGroupBox(scrollAreaWidgetContents);
        groupInfosBox->setObjectName(QString::fromUtf8("groupInfosBox"));
        gridLayout = new QGridLayout(groupInfosBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 4, -1, 2);
        labelTotalSize = new QLabel(groupInfosBox);
        labelTotalSize->setObjectName(QString::fromUtf8("labelTotalSize"));
        sizePolicy.setHeightForWidth(labelTotalSize->sizePolicy().hasHeightForWidth());
        labelTotalSize->setSizePolicy(sizePolicy);
        labelTotalSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTotalSize, 0, 0, 1, 1);

        labelTotalSizeVal = new QLabel(groupInfosBox);
        labelTotalSizeVal->setObjectName(QString::fromUtf8("labelTotalSizeVal"));
        sizePolicy1.setHeightForWidth(labelTotalSizeVal->sizePolicy().hasHeightForWidth());
        labelTotalSizeVal->setSizePolicy(sizePolicy1);
        labelTotalSizeVal->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelTotalSizeVal, 0, 1, 1, 1);

        labelTotalPieces = new QLabel(groupInfosBox);
        labelTotalPieces->setObjectName(QString::fromUtf8("labelTotalPieces"));
        sizePolicy.setHeightForWidth(labelTotalPieces->sizePolicy().hasHeightForWidth());
        labelTotalPieces->setSizePolicy(sizePolicy);
        labelTotalPieces->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTotalPieces, 0, 2, 1, 1);

        labelTotalPiecesVal = new QLabel(groupInfosBox);
        labelTotalPiecesVal->setObjectName(QString::fromUtf8("labelTotalPiecesVal"));
        sizePolicy1.setHeightForWidth(labelTotalPiecesVal->sizePolicy().hasHeightForWidth());
        labelTotalPiecesVal->setSizePolicy(sizePolicy1);
        labelTotalPiecesVal->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelTotalPiecesVal, 0, 3, 1, 1);

        labelCreatedBy = new QLabel(groupInfosBox);
        labelCreatedBy->setObjectName(QString::fromUtf8("labelCreatedBy"));
        sizePolicy.setHeightForWidth(labelCreatedBy->sizePolicy().hasHeightForWidth());
        labelCreatedBy->setSizePolicy(sizePolicy);
        labelCreatedBy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelCreatedBy, 0, 4, 1, 1);

        labelCreatedByVal = new QLabel(groupInfosBox);
        labelCreatedByVal->setObjectName(QString::fromUtf8("labelCreatedByVal"));
        sizePolicy1.setHeightForWidth(labelCreatedByVal->sizePolicy().hasHeightForWidth());
        labelCreatedByVal->setSizePolicy(sizePolicy1);
        labelCreatedByVal->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelCreatedByVal, 0, 5, 1, 1);

        labelAddedOn = new QLabel(groupInfosBox);
        labelAddedOn->setObjectName(QString::fromUtf8("labelAddedOn"));
        sizePolicy.setHeightForWidth(labelAddedOn->sizePolicy().hasHeightForWidth());
        labelAddedOn->setSizePolicy(sizePolicy);
        labelAddedOn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAddedOn, 1, 0, 1, 1);

        labelAddedOnVal = new QLabel(groupInfosBox);
        labelAddedOnVal->setObjectName(QString::fromUtf8("labelAddedOnVal"));
        sizePolicy1.setHeightForWidth(labelAddedOnVal->sizePolicy().hasHeightForWidth());
        labelAddedOnVal->setSizePolicy(sizePolicy1);
        labelAddedOnVal->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelAddedOnVal, 1, 1, 1, 1);

        labelCompletedOn = new QLabel(groupInfosBox);
        labelCompletedOn->setObjectName(QString::fromUtf8("labelCompletedOn"));
        sizePolicy.setHeightForWidth(labelCompletedOn->sizePolicy().hasHeightForWidth());
        labelCompletedOn->setSizePolicy(sizePolicy);
        labelCompletedOn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelCompletedOn, 1, 2, 1, 1);

        labelCompletedOnVal = new QLabel(groupInfosBox);
        labelCompletedOnVal->setObjectName(QString::fromUtf8("labelCompletedOnVal"));
        sizePolicy1.setHeightForWidth(labelCompletedOnVal->sizePolicy().hasHeightForWidth());
        labelCompletedOnVal->setSizePolicy(sizePolicy1);
        labelCompletedOnVal->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelCompletedOnVal, 1, 3, 1, 1);

        labelCreatedOn = new QLabel(groupInfosBox);
        labelCreatedOn->setObjectName(QString::fromUtf8("labelCreatedOn"));
        sizePolicy.setHeightForWidth(labelCreatedOn->sizePolicy().hasHeightForWidth());
        labelCreatedOn->setSizePolicy(sizePolicy);
        labelCreatedOn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelCreatedOn, 1, 4, 1, 1);

        labelCreatedOnVal = new QLabel(groupInfosBox);
        labelCreatedOnVal->setObjectName(QString::fromUtf8("labelCreatedOnVal"));
        sizePolicy1.setHeightForWidth(labelCreatedOnVal->sizePolicy().hasHeightForWidth());
        labelCreatedOnVal->setSizePolicy(sizePolicy1);
        labelCreatedOnVal->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelCreatedOnVal, 1, 5, 1, 1);

        labelInfohash1 = new QLabel(groupInfosBox);
        labelInfohash1->setObjectName(QString::fromUtf8("labelInfohash1"));
        sizePolicy.setHeightForWidth(labelInfohash1->sizePolicy().hasHeightForWidth());
        labelInfohash1->setSizePolicy(sizePolicy);
        labelInfohash1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelInfohash1, 2, 0, 1, 1);

        labelInfohash2 = new QLabel(groupInfosBox);
        labelInfohash2->setObjectName(QString::fromUtf8("labelInfohash2"));
        sizePolicy.setHeightForWidth(labelInfohash2->sizePolicy().hasHeightForWidth());
        labelInfohash2->setSizePolicy(sizePolicy);
        labelInfohash2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelInfohash2, 3, 0, 1, 1);

        labelInfohash2Val = new QLabel(groupInfosBox);
        labelInfohash2Val->setObjectName(QString::fromUtf8("labelInfohash2Val"));
        sizePolicy1.setHeightForWidth(labelInfohash2Val->sizePolicy().hasHeightForWidth());
        labelInfohash2Val->setSizePolicy(sizePolicy1);
        labelInfohash2Val->setTextFormat(Qt::PlainText);
        labelInfohash2Val->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelInfohash2Val, 3, 1, 1, 5);

        labelSavePath = new QLabel(groupInfosBox);
        labelSavePath->setObjectName(QString::fromUtf8("labelSavePath"));
        sizePolicy.setHeightForWidth(labelSavePath->sizePolicy().hasHeightForWidth());
        labelSavePath->setSizePolicy(sizePolicy);
        labelSavePath->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(labelSavePath, 4, 0, 1, 1);

        labelComment = new QLabel(groupInfosBox);
        labelComment->setObjectName(QString::fromUtf8("labelComment"));
        sizePolicy.setHeightForWidth(labelComment->sizePolicy().hasHeightForWidth());
        labelComment->setSizePolicy(sizePolicy);
        labelComment->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(labelComment, 5, 0, 1, 1);

        labelInfohash1Val = new QLabel(groupInfosBox);
        labelInfohash1Val->setObjectName(QString::fromUtf8("labelInfohash1Val"));
        sizePolicy1.setHeightForWidth(labelInfohash1Val->sizePolicy().hasHeightForWidth());
        labelInfohash1Val->setSizePolicy(sizePolicy1);
        labelInfohash1Val->setTextFormat(Qt::PlainText);
        labelInfohash1Val->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelInfohash1Val, 2, 1, 1, 5);

        labelSavePathVal = new QLabel(groupInfosBox);
        labelSavePathVal->setObjectName(QString::fromUtf8("labelSavePathVal"));
        sizePolicy1.setHeightForWidth(labelSavePathVal->sizePolicy().hasHeightForWidth());
        labelSavePathVal->setSizePolicy(sizePolicy1);
        labelSavePathVal->setTextFormat(Qt::PlainText);
        labelSavePathVal->setWordWrap(true);
        labelSavePathVal->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelSavePathVal, 4, 1, 1, 5);

        labelCommentVal = new QLabel(groupInfosBox);
        labelCommentVal->setObjectName(QString::fromUtf8("labelCommentVal"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelCommentVal->sizePolicy().hasHeightForWidth());
        labelCommentVal->setSizePolicy(sizePolicy2);
        labelCommentVal->setTextFormat(Qt::RichText);
        labelCommentVal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelCommentVal->setWordWrap(true);
        labelCommentVal->setOpenExternalLinks(true);
        labelCommentVal->setTextInteractionFlags(Qt::TextBrowserInteraction);
        labelCommentVal->setProperty("openLinks", QVariant(true));

        gridLayout->addWidget(labelCommentVal, 5, 1, 1, 5);


        verticalLayout_2->addWidget(groupInfosBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_7->addWidget(scrollArea);

        stackedProperties->addWidget(pageGeneral);
        pageTrackers = new QWidget();
        pageTrackers->setObjectName(QString::fromUtf8("pageTrackers"));
        hBoxLayoutTrackers = new QHBoxLayout(pageTrackers);
        hBoxLayoutTrackers->setObjectName(QString::fromUtf8("hBoxLayoutTrackers"));
        hBoxLayoutTrackers->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        trackerUpButton = new QPushButton(pageTrackers);
        trackerUpButton->setObjectName(QString::fromUtf8("trackerUpButton"));

        verticalLayout_10->addWidget(trackerUpButton);

        trackerDownButton = new QPushButton(pageTrackers);
        trackerDownButton->setObjectName(QString::fromUtf8("trackerDownButton"));

        verticalLayout_10->addWidget(trackerDownButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);


        hBoxLayoutTrackers->addLayout(verticalLayout_10);

        stackedProperties->addWidget(pageTrackers);
        pagePeers = new QWidget();
        pagePeers->setObjectName(QString::fromUtf8("pagePeers"));
        vBoxLayoutPeerPage = new QVBoxLayout(pagePeers);
        vBoxLayoutPeerPage->setObjectName(QString::fromUtf8("vBoxLayoutPeerPage"));
        vBoxLayoutPeerPage->setContentsMargins(0, 0, 0, 0);
        stackedProperties->addWidget(pagePeers);
        pageSources = new QWidget();
        pageSources->setObjectName(QString::fromUtf8("pageSources"));
        verticalLayout_9 = new QVBoxLayout(pageSources);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        listWebSeeds = new QListWidget(pageSources);
        listWebSeeds->setObjectName(QString::fromUtf8("listWebSeeds"));
        listWebSeeds->setContextMenuPolicy(Qt::CustomContextMenu);
        listWebSeeds->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout_9->addWidget(listWebSeeds);

        stackedProperties->addWidget(pageSources);
        pageContents = new QWidget();
        pageContents->setObjectName(QString::fromUtf8("pageContents"));
        verticalLayout_3 = new QVBoxLayout(pageContents);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        contentFilterLayout = new QHBoxLayout();
        contentFilterLayout->setObjectName(QString::fromUtf8("contentFilterLayout"));
        selectAllButton = new QPushButton(pageContents);
        selectAllButton->setObjectName(QString::fromUtf8("selectAllButton"));

        contentFilterLayout->addWidget(selectAllButton);

        selectNoneButton = new QPushButton(pageContents);
        selectNoneButton->setObjectName(QString::fromUtf8("selectNoneButton"));

        contentFilterLayout->addWidget(selectNoneButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        contentFilterLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(contentFilterLayout);

        filesList = new TorrentContentTreeView(pageContents);
        filesList->setObjectName(QString::fromUtf8("filesList"));
        filesList->setContextMenuPolicy(Qt::CustomContextMenu);
        filesList->setEditTriggers(QAbstractItemView::AllEditTriggers);
        filesList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        filesList->setAllColumnsShowFocus(true);

        verticalLayout_3->addWidget(filesList);

        stackedProperties->addWidget(pageContents);
        pageSpeed = new QWidget();
        pageSpeed->setObjectName(QString::fromUtf8("pageSpeed"));
        speedLayout = new QVBoxLayout(pageSpeed);
        speedLayout->setObjectName(QString::fromUtf8("speedLayout"));
        speedLayout->setContentsMargins(0, 0, 0, 0);
        stackedProperties->addWidget(pageSpeed);

        verticalLayout->addWidget(stackedProperties);


        retranslateUi(PropertiesWidget);

        stackedProperties->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *PropertiesWidget)
    {
        labelDownloadedPieces->setText(QCoreApplication::translate("PropertiesWidget", "Progress:", nullptr));
        labelPiecesAvailability->setText(QCoreApplication::translate("PropertiesWidget", "Availability:", nullptr));
        groupTransferBox->setTitle(QCoreApplication::translate("PropertiesWidget", "Transfer", nullptr));
        labelUpSpeed->setText(QCoreApplication::translate("PropertiesWidget", "Upload Speed:", nullptr));
        labelPeers->setText(QCoreApplication::translate("PropertiesWidget", "Peers:", nullptr));
        labelConnections->setText(QCoreApplication::translate("PropertiesWidget", "Connections:", nullptr));
        labelDlLimit->setText(QCoreApplication::translate("PropertiesWidget", "Download Limit:", nullptr));
        labelRatio->setText(QCoreApplication::translate("PropertiesWidget", "Share Ratio:", nullptr));
        labelDownloaded->setText(QCoreApplication::translate("PropertiesWidget", "Downloaded:", nullptr));
        labelUpLimit->setText(QCoreApplication::translate("PropertiesWidget", "Upload Limit:", nullptr));
        labelLastSeenComplete->setText(QCoreApplication::translate("PropertiesWidget", "Last Seen Complete:", nullptr));
        labelReannounceIn->setText(QCoreApplication::translate("PropertiesWidget", "Reannounce In:", nullptr));
        labelSeeds->setText(QCoreApplication::translate("PropertiesWidget", "Seeds:", nullptr));
        labelDlSpeed->setText(QCoreApplication::translate("PropertiesWidget", "Download Speed:", nullptr));
        labelUploaded->setText(QCoreApplication::translate("PropertiesWidget", "Uploaded:", nullptr));
        labelTimeActive->setText(QCoreApplication::translate("PropertiesWidget", "Time Active:", nullptr));
        labelETA->setText(QCoreApplication::translate("PropertiesWidget", "ETA:", nullptr));
        labelWasted->setText(QCoreApplication::translate("PropertiesWidget", "Wasted:", nullptr));
        groupInfosBox->setTitle(QCoreApplication::translate("PropertiesWidget", "Information", nullptr));
        labelTotalSize->setText(QCoreApplication::translate("PropertiesWidget", "Total Size:", nullptr));
        labelTotalPieces->setText(QCoreApplication::translate("PropertiesWidget", "Pieces:", nullptr));
        labelCreatedBy->setText(QCoreApplication::translate("PropertiesWidget", "Created By:", nullptr));
        labelAddedOn->setText(QCoreApplication::translate("PropertiesWidget", "Added On:", nullptr));
        labelCompletedOn->setText(QCoreApplication::translate("PropertiesWidget", "Completed On:", nullptr));
        labelCreatedOn->setText(QCoreApplication::translate("PropertiesWidget", "Created On:", nullptr));
        labelInfohash1->setText(QCoreApplication::translate("PropertiesWidget", "Info Hash v1:", nullptr));
        labelInfohash2->setText(QCoreApplication::translate("PropertiesWidget", "Info Hash v2:", nullptr));
        labelSavePath->setText(QCoreApplication::translate("PropertiesWidget", "Save Path:", nullptr));
        labelComment->setText(QCoreApplication::translate("PropertiesWidget", "Comment:", nullptr));
        selectAllButton->setText(QCoreApplication::translate("PropertiesWidget", "Select All", nullptr));
        selectNoneButton->setText(QCoreApplication::translate("PropertiesWidget", "Select None", nullptr));
        (void)PropertiesWidget;
    } // retranslateUi

};

namespace Ui {
    class PropertiesWidget: public Ui_PropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESWIDGET_H
