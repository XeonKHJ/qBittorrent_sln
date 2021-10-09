/********************************************************************************
** Form generated from reading UI file 'watchedfolderoptionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WATCHEDFOLDEROPTIONSDIALOG_H
#define UI_WATCHEDFOLDEROPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include "gui/fspathedit.h"

QT_BEGIN_NAMESPACE

class Ui_WatchedFolderOptionsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBoxRecursive;
    QSpacerItem *horizontalSpacer_2;
    QSplitter *splitter;
    QFrame *torrentoptionsFrame;
    QVBoxLayout *mainlayout_addui;
    QGroupBox *groupBoxParameters;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *managementLayout;
    QLabel *labelTorrentManagementMode;
    QComboBox *comboTTM;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBoxSavePath;
    QVBoxLayout *verticalLayout;
    FileSystemPathLineEdit *savePath;
    QHBoxLayout *categoryLayout;
    QLabel *labelCategory;
    QComboBox *categoryComboBox;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *startTorrentCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *skipCheckingLayout;
    QCheckBox *skipCheckingCheckBox;
    QSpacerItem *skipCheckingSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *contentLayoutLabel;
    QComboBox *contentLayoutComboBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WatchedFolderOptionsDialog)
    {
        if (WatchedFolderOptionsDialog->objectName().isEmpty())
            WatchedFolderOptionsDialog->setObjectName(QString::fromUtf8("WatchedFolderOptionsDialog"));
        WatchedFolderOptionsDialog->resize(462, 325);
        verticalLayout_3 = new QVBoxLayout(WatchedFolderOptionsDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        checkBoxRecursive = new QCheckBox(WatchedFolderOptionsDialog);
        checkBoxRecursive->setObjectName(QString::fromUtf8("checkBoxRecursive"));

        horizontalLayout_6->addWidget(checkBoxRecursive);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        splitter = new QSplitter(WatchedFolderOptionsDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        torrentoptionsFrame = new QFrame(splitter);
        torrentoptionsFrame->setObjectName(QString::fromUtf8("torrentoptionsFrame"));
        mainlayout_addui = new QVBoxLayout(torrentoptionsFrame);
        mainlayout_addui->setObjectName(QString::fromUtf8("mainlayout_addui"));
        mainlayout_addui->setContentsMargins(0, 0, 0, 0);
        groupBoxParameters = new QGroupBox(torrentoptionsFrame);
        groupBoxParameters->setObjectName(QString::fromUtf8("groupBoxParameters"));
        verticalLayout_2 = new QVBoxLayout(groupBoxParameters);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        managementLayout = new QHBoxLayout();
        managementLayout->setObjectName(QString::fromUtf8("managementLayout"));
        labelTorrentManagementMode = new QLabel(groupBoxParameters);
        labelTorrentManagementMode->setObjectName(QString::fromUtf8("labelTorrentManagementMode"));

        managementLayout->addWidget(labelTorrentManagementMode);

        comboTTM = new QComboBox(groupBoxParameters);
        comboTTM->addItem(QString());
        comboTTM->addItem(QString());
        comboTTM->setObjectName(QString::fromUtf8("comboTTM"));

        managementLayout->addWidget(comboTTM);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        managementLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(managementLayout);

        groupBoxSavePath = new QGroupBox(groupBoxParameters);
        groupBoxSavePath->setObjectName(QString::fromUtf8("groupBoxSavePath"));
        verticalLayout = new QVBoxLayout(groupBoxSavePath);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        savePath = new FileSystemPathLineEdit(groupBoxSavePath);
        savePath->setObjectName(QString::fromUtf8("savePath"));

        verticalLayout->addWidget(savePath);


        verticalLayout_2->addWidget(groupBoxSavePath);

        categoryLayout = new QHBoxLayout();
        categoryLayout->setObjectName(QString::fromUtf8("categoryLayout"));
        labelCategory = new QLabel(groupBoxParameters);
        labelCategory->setObjectName(QString::fromUtf8("labelCategory"));

        categoryLayout->addWidget(labelCategory);

        categoryComboBox = new QComboBox(groupBoxParameters);
        categoryComboBox->setObjectName(QString::fromUtf8("categoryComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(categoryComboBox->sizePolicy().hasHeightForWidth());
        categoryComboBox->setSizePolicy(sizePolicy);
        categoryComboBox->setEditable(true);
        categoryComboBox->setInsertPolicy(QComboBox::InsertAtTop);

        categoryLayout->addWidget(categoryComboBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        categoryLayout->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(categoryLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        startTorrentCheckBox = new QCheckBox(groupBoxParameters);
        startTorrentCheckBox->setObjectName(QString::fromUtf8("startTorrentCheckBox"));

        horizontalLayout_3->addWidget(startTorrentCheckBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        skipCheckingLayout = new QHBoxLayout();
        skipCheckingLayout->setObjectName(QString::fromUtf8("skipCheckingLayout"));
        skipCheckingCheckBox = new QCheckBox(groupBoxParameters);
        skipCheckingCheckBox->setObjectName(QString::fromUtf8("skipCheckingCheckBox"));

        skipCheckingLayout->addWidget(skipCheckingCheckBox);

        skipCheckingSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        skipCheckingLayout->addItem(skipCheckingSpacer);


        verticalLayout_2->addLayout(skipCheckingLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        contentLayoutLabel = new QLabel(groupBoxParameters);
        contentLayoutLabel->setObjectName(QString::fromUtf8("contentLayoutLabel"));

        horizontalLayout_2->addWidget(contentLayoutLabel);

        contentLayoutComboBox = new QComboBox(groupBoxParameters);
        contentLayoutComboBox->addItem(QString());
        contentLayoutComboBox->addItem(QString());
        contentLayoutComboBox->addItem(QString());
        contentLayoutComboBox->setObjectName(QString::fromUtf8("contentLayoutComboBox"));

        horizontalLayout_2->addWidget(contentLayoutComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);


        mainlayout_addui->addWidget(groupBoxParameters);

        splitter->addWidget(torrentoptionsFrame);

        verticalLayout_3->addWidget(splitter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(WatchedFolderOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(WatchedFolderOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WatchedFolderOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WatchedFolderOptionsDialog, SLOT(reject()));

        contentLayoutComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WatchedFolderOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *WatchedFolderOptionsDialog)
    {
        WatchedFolderOptionsDialog->setWindowTitle(QCoreApplication::translate("WatchedFolderOptionsDialog", "Watched Folder Options", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxRecursive->setToolTip(QCoreApplication::translate("WatchedFolderOptionsDialog", "<html><head/><body><p>Will watch the folder and all its subfolders. In Manual torrent management mode it will also add subfolder name to the selected Save path.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxRecursive->setText(QCoreApplication::translate("WatchedFolderOptionsDialog", "Recursive mode", nullptr));
        groupBoxParameters->setTitle(QCoreApplication::translate("WatchedFolderOptionsDialog", "Torrent parameters", nullptr));
        labelTorrentManagementMode->setText(QCoreApplication::translate("WatchedFolderOptionsDialog", "Torrent Management Mode:", nullptr));
        comboTTM->setItemText(0, QCoreApplication::translate("WatchedFolderOptionsDialog", "Manual", nullptr));
        comboTTM->setItemText(1, QCoreApplication::translate("WatchedFolderOptionsDialog", "Automatic", nullptr));

#if QT_CONFIG(tooltip)
        comboTTM->setToolTip(QCoreApplication::translate("WatchedFolderOptionsDialog", "Automatic mode means that various torrent properties(eg save path) will be decided by the associated category", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxSavePath->setTitle(QCoreApplication::translate("WatchedFolderOptionsDialog", "Save at", nullptr));
        labelCategory->setText(QCoreApplication::translate("WatchedFolderOptionsDialog", "Category:", nullptr));
        startTorrentCheckBox->setText(QCoreApplication::translate("WatchedFolderOptionsDialog", "Start torrent", nullptr));
        skipCheckingCheckBox->setText(QCoreApplication::translate("WatchedFolderOptionsDialog", "Skip hash check", nullptr));
        contentLayoutLabel->setText(QCoreApplication::translate("WatchedFolderOptionsDialog", "Content layout:", nullptr));
        contentLayoutComboBox->setItemText(0, QCoreApplication::translate("WatchedFolderOptionsDialog", "Original", nullptr));
        contentLayoutComboBox->setItemText(1, QCoreApplication::translate("WatchedFolderOptionsDialog", "Create subfolder", nullptr));
        contentLayoutComboBox->setItemText(2, QCoreApplication::translate("WatchedFolderOptionsDialog", "Don't create subfolder", nullptr));

    } // retranslateUi

};

namespace Ui {
    class WatchedFolderOptionsDialog: public Ui_WatchedFolderOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WATCHEDFOLDEROPTIONSDIALOG_H
