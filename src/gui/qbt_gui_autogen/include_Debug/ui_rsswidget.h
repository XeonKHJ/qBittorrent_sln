/********************************************************************************
** Form generated from reading UI file 'rsswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RSSWIDGET_H
#define UI_RSSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/rss/htmlbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_RSSWidget
{
public:
    QAction *actionDelete;
    QAction *actionRename;
    QAction *actionUpdate;
    QAction *actionNewSubscription;
    QAction *actionUpdateAllFeeds;
    QAction *actionMarkItemsRead;
    QAction *actionDownloadTorrent;
    QAction *actionOpenNewsURL;
    QAction *actionCopyFeedURL;
    QAction *actionNewFolder;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelWarn;
    QHBoxLayout *horizontalLayout;
    QPushButton *newFeedButton;
    QPushButton *markReadButton;
    QPushButton *updateAllButton;
    QSpacerItem *spacer1;
    QPushButton *rssDownloaderBtn;
    QSplitter *splitterSide;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *news_lbl;
    QSplitter *splitterMain;
    HtmlBrowser *textBrowser;

    void setupUi(QWidget *RSSWidget)
    {
        if (RSSWidget->objectName().isEmpty())
            RSSWidget->setObjectName(QString::fromUtf8("RSSWidget"));
        RSSWidget->resize(811, 447);
        RSSWidget->setAcceptDrops(false);
        actionDelete = new QAction(RSSWidget);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionRename = new QAction(RSSWidget);
        actionRename->setObjectName(QString::fromUtf8("actionRename"));
        actionUpdate = new QAction(RSSWidget);
        actionUpdate->setObjectName(QString::fromUtf8("actionUpdate"));
        actionNewSubscription = new QAction(RSSWidget);
        actionNewSubscription->setObjectName(QString::fromUtf8("actionNewSubscription"));
        actionUpdateAllFeeds = new QAction(RSSWidget);
        actionUpdateAllFeeds->setObjectName(QString::fromUtf8("actionUpdateAllFeeds"));
        actionMarkItemsRead = new QAction(RSSWidget);
        actionMarkItemsRead->setObjectName(QString::fromUtf8("actionMarkItemsRead"));
        actionDownloadTorrent = new QAction(RSSWidget);
        actionDownloadTorrent->setObjectName(QString::fromUtf8("actionDownloadTorrent"));
        actionOpenNewsURL = new QAction(RSSWidget);
        actionOpenNewsURL->setObjectName(QString::fromUtf8("actionOpenNewsURL"));
        actionCopyFeedURL = new QAction(RSSWidget);
        actionCopyFeedURL->setObjectName(QString::fromUtf8("actionCopyFeedURL"));
        actionNewFolder = new QAction(RSSWidget);
        actionNewFolder->setObjectName(QString::fromUtf8("actionNewFolder"));
        verticalLayout_2 = new QVBoxLayout(RSSWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelWarn = new QLabel(RSSWidget);
        labelWarn->setObjectName(QString::fromUtf8("labelWarn"));
        QFont font;
        font.setItalic(true);
        labelWarn->setFont(font);
        labelWarn->setStyleSheet(QString::fromUtf8("color: red;"));
        labelWarn->setWordWrap(true);

        verticalLayout_2->addWidget(labelWarn);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        newFeedButton = new QPushButton(RSSWidget);
        newFeedButton->setObjectName(QString::fromUtf8("newFeedButton"));

        horizontalLayout->addWidget(newFeedButton);

        markReadButton = new QPushButton(RSSWidget);
        markReadButton->setObjectName(QString::fromUtf8("markReadButton"));

        horizontalLayout->addWidget(markReadButton);

        updateAllButton = new QPushButton(RSSWidget);
        updateAllButton->setObjectName(QString::fromUtf8("updateAllButton"));

        horizontalLayout->addWidget(updateAllButton);

        spacer1 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer1);

        rssDownloaderBtn = new QPushButton(RSSWidget);
        rssDownloaderBtn->setObjectName(QString::fromUtf8("rssDownloaderBtn"));

        horizontalLayout->addWidget(rssDownloaderBtn);


        verticalLayout_2->addLayout(horizontalLayout);

        splitterSide = new QSplitter(RSSWidget);
        splitterSide->setObjectName(QString::fromUtf8("splitterSide"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitterSide->sizePolicy().hasHeightForWidth());
        splitterSide->setSizePolicy(sizePolicy);
        splitterSide->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitterSide);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        news_lbl = new QLabel(layoutWidget);
        news_lbl->setObjectName(QString::fromUtf8("news_lbl"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        news_lbl->setFont(font1);

        verticalLayout->addWidget(news_lbl);

        splitterMain = new QSplitter(layoutWidget);
        splitterMain->setObjectName(QString::fromUtf8("splitterMain"));
        sizePolicy.setHeightForWidth(splitterMain->sizePolicy().hasHeightForWidth());
        splitterMain->setSizePolicy(sizePolicy);
        splitterMain->setOrientation(Qt::Horizontal);
        textBrowser = new HtmlBrowser(splitterMain);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setOpenExternalLinks(true);
        splitterMain->addWidget(textBrowser);

        verticalLayout->addWidget(splitterMain);

        splitterSide->addWidget(layoutWidget);

        verticalLayout_2->addWidget(splitterSide);


        retranslateUi(RSSWidget);

        QMetaObject::connectSlotsByName(RSSWidget);
    } // setupUi

    void retranslateUi(QWidget *RSSWidget)
    {
        RSSWidget->setWindowTitle(QCoreApplication::translate("RSSWidget", "Search", nullptr));
        actionDelete->setText(QCoreApplication::translate("RSSWidget", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete->setToolTip(QCoreApplication::translate("RSSWidget", "Delete", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRename->setText(QCoreApplication::translate("RSSWidget", "Rename...", nullptr));
#if QT_CONFIG(tooltip)
        actionRename->setToolTip(QCoreApplication::translate("RSSWidget", "Rename", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUpdate->setText(QCoreApplication::translate("RSSWidget", "Update", nullptr));
#if QT_CONFIG(tooltip)
        actionUpdate->setToolTip(QCoreApplication::translate("RSSWidget", "Update", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNewSubscription->setText(QCoreApplication::translate("RSSWidget", "New subscription...", nullptr));
        actionUpdateAllFeeds->setText(QCoreApplication::translate("RSSWidget", "Update all feeds", nullptr));
#if QT_CONFIG(tooltip)
        actionUpdateAllFeeds->setToolTip(QCoreApplication::translate("RSSWidget", "Update all feeds", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMarkItemsRead->setText(QCoreApplication::translate("RSSWidget", "Mark items read", nullptr));
#if QT_CONFIG(tooltip)
        actionMarkItemsRead->setToolTip(QCoreApplication::translate("RSSWidget", "Mark items read", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDownloadTorrent->setText(QCoreApplication::translate("RSSWidget", "Download torrent", nullptr));
        actionOpenNewsURL->setText(QCoreApplication::translate("RSSWidget", "Open news URL", nullptr));
        actionCopyFeedURL->setText(QCoreApplication::translate("RSSWidget", "Copy feed URL", nullptr));
        actionNewFolder->setText(QCoreApplication::translate("RSSWidget", "New folder...", nullptr));
        labelWarn->setText(QCoreApplication::translate("RSSWidget", "Fetching of RSS feeds is disabled now! You can enable it in application settings.", nullptr));
        newFeedButton->setText(QCoreApplication::translate("RSSWidget", "New subscription", nullptr));
        markReadButton->setText(QCoreApplication::translate("RSSWidget", "Mark items read", nullptr));
#if QT_CONFIG(tooltip)
        updateAllButton->setToolTip(QCoreApplication::translate("RSSWidget", "Refresh RSS streams", nullptr));
#endif // QT_CONFIG(tooltip)
        updateAllButton->setText(QCoreApplication::translate("RSSWidget", "Update all", nullptr));
        rssDownloaderBtn->setText(QCoreApplication::translate("RSSWidget", "RSS Downloader...", nullptr));
        news_lbl->setText(QCoreApplication::translate("RSSWidget", "Torrents: (double-click to download)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RSSWidget: public Ui_RSSWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RSSWIDGET_H
