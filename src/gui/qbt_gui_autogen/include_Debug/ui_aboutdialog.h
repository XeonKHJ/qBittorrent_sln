/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *aboutDlgLayout;
    QHBoxLayout *titleHBoxLayout;
    QLabel *logo;
    QLabel *labelName;
    QSpacerItem *horizontalSpacer_6;
    QTabWidget *tw_tabs;
    QWidget *aboutTab;
    QGridLayout *aboutTabLayout;
    QLabel *labelMascot;
    QLabel *labelAbout;
    QWidget *authorTab;
    QVBoxLayout *authorTabLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *thanksTab;
    QVBoxLayout *thanksTabLayout;
    QTextBrowser *textBrowserThanks;
    QWidget *translationTab;
    QVBoxLayout *translationTabLayout;
    QTextBrowser *textBrowserTranslation;
    QWidget *licenseTab;
    QVBoxLayout *licenseTabLayout;
    QTextBrowser *textBrowserLicense;
    QWidget *SoftwareUsedTab;
    QVBoxLayout *SoftwareUsedTabLayout;
    QLabel *label;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QLabel *labelBoostVer;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *labelQtVer;
    QLabel *labelLibtVer;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_11;
    QLabel *labelOpensslVer;
    QLabel *label_12;
    QLabel *labelZlibVer;
    QFrame *line;
    QLabel *labelDBIP;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(545, 295);
        aboutDlgLayout = new QVBoxLayout(AboutDialog);
        aboutDlgLayout->setObjectName(QString::fromUtf8("aboutDlgLayout"));
        titleHBoxLayout = new QHBoxLayout();
        titleHBoxLayout->setObjectName(QString::fromUtf8("titleHBoxLayout"));
        logo = new QLabel(AboutDialog);
        logo->setObjectName(QString::fromUtf8("logo"));

        titleHBoxLayout->addWidget(logo);

        labelName = new QLabel(AboutDialog);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setText(QString::fromUtf8("qBittorrent"));

        titleHBoxLayout->addWidget(labelName);

        horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        titleHBoxLayout->addItem(horizontalSpacer_6);


        aboutDlgLayout->addLayout(titleHBoxLayout);

        tw_tabs = new QTabWidget(AboutDialog);
        tw_tabs->setObjectName(QString::fromUtf8("tw_tabs"));
        aboutTab = new QWidget();
        aboutTab->setObjectName(QString::fromUtf8("aboutTab"));
        aboutTabLayout = new QGridLayout(aboutTab);
        aboutTabLayout->setObjectName(QString::fromUtf8("aboutTabLayout"));
        labelMascot = new QLabel(aboutTab);
        labelMascot->setObjectName(QString::fromUtf8("labelMascot"));

        aboutTabLayout->addWidget(labelMascot, 0, 0, 1, 1);

        labelAbout = new QLabel(aboutTab);
        labelAbout->setObjectName(QString::fromUtf8("labelAbout"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelAbout->sizePolicy().hasHeightForWidth());
        labelAbout->setSizePolicy(sizePolicy);
        labelAbout->setTextFormat(Qt::RichText);
        labelAbout->setWordWrap(true);
        labelAbout->setOpenExternalLinks(true);

        aboutTabLayout->addWidget(labelAbout, 0, 1, 1, 1);

        tw_tabs->addTab(aboutTab, QString());
        authorTab = new QWidget();
        authorTab->setObjectName(QString::fromUtf8("authorTab"));
        authorTabLayout = new QVBoxLayout(authorTab);
        authorTabLayout->setObjectName(QString::fromUtf8("authorTabLayout"));
        groupBox_2 = new QGroupBox(authorTab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 1, 1, 1, 1);

        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setText(QString::fromUtf8("<a href=\"mailto:sledgehammer999@qbittorrent.org\">sledgehammer999@qbittorrent.org</a>"));
        label_19->setOpenExternalLinks(true);
        label_19->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(label_19, 2, 1, 1, 1);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 1, 0, 1, 1);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 2, 0, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 0, 0, 1, 1);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setText(QString::fromUtf8("Sledgehammer999"));

        gridLayout_4->addWidget(label_17, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 2, 1, 1);


        authorTabLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(authorTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setText(QString::fromUtf8("Christophe Dumez"));

        gridLayout_5->addWidget(label_2, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setText(QString::fromUtf8("<a href=\"mailto:chris@qbittorrent.org\">chris@qbittorrent.org</a>"));
        label_6->setOpenExternalLinks(true);
        label_6->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(label_6, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 2, 2, 1, 1);


        authorTabLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        authorTabLayout->addItem(verticalSpacer);

        tw_tabs->addTab(authorTab, QString());
        thanksTab = new QWidget();
        thanksTab->setObjectName(QString::fromUtf8("thanksTab"));
        thanksTabLayout = new QVBoxLayout(thanksTab);
        thanksTabLayout->setObjectName(QString::fromUtf8("thanksTabLayout"));
        thanksTabLayout->setContentsMargins(0, 0, 0, 0);
        textBrowserThanks = new QTextBrowser(thanksTab);
        textBrowserThanks->setObjectName(QString::fromUtf8("textBrowserThanks"));
        textBrowserThanks->setOpenExternalLinks(true);

        thanksTabLayout->addWidget(textBrowserThanks);

        tw_tabs->addTab(thanksTab, QString());
        translationTab = new QWidget();
        translationTab->setObjectName(QString::fromUtf8("translationTab"));
        translationTabLayout = new QVBoxLayout(translationTab);
        translationTabLayout->setObjectName(QString::fromUtf8("translationTabLayout"));
        translationTabLayout->setContentsMargins(0, 0, 0, 0);
        textBrowserTranslation = new QTextBrowser(translationTab);
        textBrowserTranslation->setObjectName(QString::fromUtf8("textBrowserTranslation"));
        textBrowserTranslation->setOpenExternalLinks(true);
        textBrowserTranslation->setLineWrapMode(QTextEdit::NoWrap);

        translationTabLayout->addWidget(textBrowserTranslation);

        tw_tabs->addTab(translationTab, QString());
        licenseTab = new QWidget();
        licenseTab->setObjectName(QString::fromUtf8("licenseTab"));
        licenseTabLayout = new QVBoxLayout(licenseTab);
        licenseTabLayout->setObjectName(QString::fromUtf8("licenseTabLayout"));
        licenseTabLayout->setContentsMargins(0, 0, 0, 0);
        textBrowserLicense = new QTextBrowser(licenseTab);
        textBrowserLicense->setObjectName(QString::fromUtf8("textBrowserLicense"));
        textBrowserLicense->setOpenExternalLinks(true);

        licenseTabLayout->addWidget(textBrowserLicense);

        tw_tabs->addTab(licenseTab, QString());
        SoftwareUsedTab = new QWidget();
        SoftwareUsedTab->setObjectName(QString::fromUtf8("SoftwareUsedTab"));
        SoftwareUsedTabLayout = new QVBoxLayout(SoftwareUsedTab);
        SoftwareUsedTabLayout->setObjectName(QString::fromUtf8("SoftwareUsedTabLayout"));
        label = new QLabel(SoftwareUsedTab);
        label->setObjectName(QString::fromUtf8("label"));

        SoftwareUsedTabLayout->addWidget(label);

        line_2 = new QFrame(SoftwareUsedTab);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        SoftwareUsedTabLayout->addWidget(line_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelBoostVer = new QLabel(SoftwareUsedTab);
        labelBoostVer->setObjectName(QString::fromUtf8("labelBoostVer"));
        labelBoostVer->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBoostVer, 2, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        label_8 = new QLabel(SoftwareUsedTab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setText(QString::fromUtf8("Qt:"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        label_9 = new QLabel(SoftwareUsedTab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setText(QString::fromUtf8("Libtorrent:"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_9, 1, 1, 1, 1);

        label_10 = new QLabel(SoftwareUsedTab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setText(QString::fromUtf8("Boost:"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_10, 2, 1, 1, 1);

        labelQtVer = new QLabel(SoftwareUsedTab);
        labelQtVer->setObjectName(QString::fromUtf8("labelQtVer"));
        labelQtVer->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelQtVer, 0, 2, 1, 1);

        labelLibtVer = new QLabel(SoftwareUsedTab);
        labelLibtVer->setObjectName(QString::fromUtf8("labelLibtVer"));
        labelLibtVer->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelLibtVer, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        label_11 = new QLabel(SoftwareUsedTab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setText(QString::fromUtf8("OpenSSL:"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_11->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_11, 3, 1, 1, 1);

        labelOpensslVer = new QLabel(SoftwareUsedTab);
        labelOpensslVer->setObjectName(QString::fromUtf8("labelOpensslVer"));
        labelOpensslVer->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelOpensslVer, 3, 2, 1, 1);

        label_12 = new QLabel(SoftwareUsedTab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setText(QString::fromUtf8("zlib:"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_12->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_12, 4, 1, 1, 1);

        labelZlibVer = new QLabel(SoftwareUsedTab);
        labelZlibVer->setObjectName(QString::fromUtf8("labelZlibVer"));
        labelZlibVer->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelZlibVer, 4, 2, 1, 1);


        SoftwareUsedTabLayout->addLayout(gridLayout);

        line = new QFrame(SoftwareUsedTab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        SoftwareUsedTabLayout->addWidget(line);

        labelDBIP = new QLabel(SoftwareUsedTab);
        labelDBIP->setObjectName(QString::fromUtf8("labelDBIP"));
        labelDBIP->setText(QString::fromUtf8("DB-IP license text"));
        labelDBIP->setWordWrap(true);
        labelDBIP->setOpenExternalLinks(true);
        labelDBIP->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        SoftwareUsedTabLayout->addWidget(labelDBIP);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        SoftwareUsedTabLayout->addItem(verticalSpacer_2);

        tw_tabs->addTab(SoftwareUsedTab, QString());

        aboutDlgLayout->addWidget(tw_tabs);


        retranslateUi(AboutDialog);

        tw_tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About qBittorrent", nullptr));
        tw_tabs->setTabText(tw_tabs->indexOf(aboutTab), QCoreApplication::translate("AboutDialog", "About", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AboutDialog", "Current maintainer", nullptr));
        label_18->setText(QCoreApplication::translate("AboutDialog", "Greece", nullptr));
        label_15->setText(QCoreApplication::translate("AboutDialog", "Nationality:", nullptr));
        label_16->setText(QCoreApplication::translate("AboutDialog", "E-mail:", nullptr));
        label_14->setText(QCoreApplication::translate("AboutDialog", "Name:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AboutDialog", "Original author", nullptr));
        label_7->setText(QCoreApplication::translate("AboutDialog", "France", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "Name:", nullptr));
        label_5->setText(QCoreApplication::translate("AboutDialog", "E-mail:", nullptr));
        label_4->setText(QCoreApplication::translate("AboutDialog", "Nationality:", nullptr));
        tw_tabs->setTabText(tw_tabs->indexOf(authorTab), QCoreApplication::translate("AboutDialog", "Authors", nullptr));
        tw_tabs->setTabText(tw_tabs->indexOf(thanksTab), QCoreApplication::translate("AboutDialog", "Special Thanks", nullptr));
        tw_tabs->setTabText(tw_tabs->indexOf(translationTab), QCoreApplication::translate("AboutDialog", "Translators", nullptr));
        tw_tabs->setTabText(tw_tabs->indexOf(licenseTab), QCoreApplication::translate("AboutDialog", "License", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "qBittorrent was built with the following libraries:", nullptr));
        tw_tabs->setTabText(tw_tabs->indexOf(SoftwareUsedTab), QCoreApplication::translate("AboutDialog", "Software Used", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
