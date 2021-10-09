/********************************************************************************
** Form generated from reading UI file 'addnewtorrentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWTORRENTDIALOG_H
#define UI_ADDNEWTORRENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/fspathedit.h"
#include "gui/torrentcontenttreeview.h"

QT_BEGIN_NAMESPACE

class Ui_AddNewTorrentDialog
{
public:
    QVBoxLayout *AddNewTorrentDialogLayout;
    QSplitter *splitter;
    QFrame *torrentoptionsFrame;
    QVBoxLayout *mainlayout_addui;
    QHBoxLayout *managementLayout;
    QLabel *labelTorrentManagementMode;
    QComboBox *comboTTM;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBoxSavePath;
    QVBoxLayout *verticalLayout;
    FileSystemPathComboEdit *savePath;
    QCheckBox *checkBoxRememberLastSavePath;
    QGroupBox *groupBoxSettings;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *categoryLayout;
    QLabel *labelCategory;
    QComboBox *categoryComboBox;
    QCheckBox *defaultCategoryCheckbox;
    QGridLayout *gridLayout;
    QCheckBox *doNotDeleteTorrentCheckBox;
    QCheckBox *firstLastCheckBox;
    QCheckBox *skipCheckingCheckBox;
    QCheckBox *sequentialCheckBox;
    QCheckBox *startTorrentCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *contentLayoutLabel;
    QComboBox *contentLayoutComboBox;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *infoGroup;
    QGridLayout *gridLayout_2;
    QLabel *labelInfohash1;
    QLabel *labelSizeData;
    QLabel *labelDateData;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelCommentData;
    QLabel *labelComment;
    QLabel *labelSize;
    QLabel *labelInfohash1Data;
    QLabel *labelDate;
    QLabel *labelInfohash2;
    QLabel *labelInfohash2Data;
    TorrentContentTreeView *contentTreeView;
    QHBoxLayout *buttonsHLayout;
    QCheckBox *checkBoxNeverShow;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *metadataLayout;
    QProgressBar *progMetaLoading;
    QLabel *lblMetaLoading;
    QPushButton *buttonSave;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddNewTorrentDialog)
    {
        if (AddNewTorrentDialog->objectName().isEmpty())
            AddNewTorrentDialog->setObjectName(QString::fromUtf8("AddNewTorrentDialog"));
        AddNewTorrentDialog->resize(900, 620);
        AddNewTorrentDialogLayout = new QVBoxLayout(AddNewTorrentDialog);
        AddNewTorrentDialogLayout->setObjectName(QString::fromUtf8("AddNewTorrentDialogLayout"));
        splitter = new QSplitter(AddNewTorrentDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        torrentoptionsFrame = new QFrame(splitter);
        torrentoptionsFrame->setObjectName(QString::fromUtf8("torrentoptionsFrame"));
        mainlayout_addui = new QVBoxLayout(torrentoptionsFrame);
        mainlayout_addui->setObjectName(QString::fromUtf8("mainlayout_addui"));
        mainlayout_addui->setContentsMargins(0, 0, 0, 0);
        managementLayout = new QHBoxLayout();
        managementLayout->setObjectName(QString::fromUtf8("managementLayout"));
        labelTorrentManagementMode = new QLabel(torrentoptionsFrame);
        labelTorrentManagementMode->setObjectName(QString::fromUtf8("labelTorrentManagementMode"));

        managementLayout->addWidget(labelTorrentManagementMode);

        comboTTM = new QComboBox(torrentoptionsFrame);
        comboTTM->addItem(QString());
        comboTTM->addItem(QString());
        comboTTM->setObjectName(QString::fromUtf8("comboTTM"));

        managementLayout->addWidget(comboTTM);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        managementLayout->addItem(horizontalSpacer);


        mainlayout_addui->addLayout(managementLayout);

        groupBoxSavePath = new QGroupBox(torrentoptionsFrame);
        groupBoxSavePath->setObjectName(QString::fromUtf8("groupBoxSavePath"));
        verticalLayout = new QVBoxLayout(groupBoxSavePath);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        savePath = new FileSystemPathComboEdit(groupBoxSavePath);
        savePath->setObjectName(QString::fromUtf8("savePath"));

        verticalLayout->addWidget(savePath);

        checkBoxRememberLastSavePath = new QCheckBox(groupBoxSavePath);
        checkBoxRememberLastSavePath->setObjectName(QString::fromUtf8("checkBoxRememberLastSavePath"));

        verticalLayout->addWidget(checkBoxRememberLastSavePath, 0, Qt::AlignRight);


        mainlayout_addui->addWidget(groupBoxSavePath);

        groupBoxSettings = new QGroupBox(torrentoptionsFrame);
        groupBoxSettings->setObjectName(QString::fromUtf8("groupBoxSettings"));
        verticalLayout_3 = new QVBoxLayout(groupBoxSettings);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        categoryLayout = new QHBoxLayout();
        categoryLayout->setObjectName(QString::fromUtf8("categoryLayout"));
        labelCategory = new QLabel(groupBoxSettings);
        labelCategory->setObjectName(QString::fromUtf8("labelCategory"));

        categoryLayout->addWidget(labelCategory);

        categoryComboBox = new QComboBox(groupBoxSettings);
        categoryComboBox->setObjectName(QString::fromUtf8("categoryComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(categoryComboBox->sizePolicy().hasHeightForWidth());
        categoryComboBox->setSizePolicy(sizePolicy);
        categoryComboBox->setEditable(true);
        categoryComboBox->setInsertPolicy(QComboBox::InsertAtTop);

        categoryLayout->addWidget(categoryComboBox);


        verticalLayout_3->addLayout(categoryLayout);

        defaultCategoryCheckbox = new QCheckBox(groupBoxSettings);
        defaultCategoryCheckbox->setObjectName(QString::fromUtf8("defaultCategoryCheckbox"));

        verticalLayout_3->addWidget(defaultCategoryCheckbox, 0, Qt::AlignRight);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        doNotDeleteTorrentCheckBox = new QCheckBox(groupBoxSettings);
        doNotDeleteTorrentCheckBox->setObjectName(QString::fromUtf8("doNotDeleteTorrentCheckBox"));

        gridLayout->addWidget(doNotDeleteTorrentCheckBox, 2, 0, 1, 1);

        firstLastCheckBox = new QCheckBox(groupBoxSettings);
        firstLastCheckBox->setObjectName(QString::fromUtf8("firstLastCheckBox"));

        gridLayout->addWidget(firstLastCheckBox, 1, 1, 1, 1);

        skipCheckingCheckBox = new QCheckBox(groupBoxSettings);
        skipCheckingCheckBox->setObjectName(QString::fromUtf8("skipCheckingCheckBox"));

        gridLayout->addWidget(skipCheckingCheckBox, 1, 0, 1, 1);

        sequentialCheckBox = new QCheckBox(groupBoxSettings);
        sequentialCheckBox->setObjectName(QString::fromUtf8("sequentialCheckBox"));

        gridLayout->addWidget(sequentialCheckBox, 0, 1, 1, 1);

        startTorrentCheckBox = new QCheckBox(groupBoxSettings);
        startTorrentCheckBox->setObjectName(QString::fromUtf8("startTorrentCheckBox"));

        gridLayout->addWidget(startTorrentCheckBox, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        contentLayoutLabel = new QLabel(groupBoxSettings);
        contentLayoutLabel->setObjectName(QString::fromUtf8("contentLayoutLabel"));

        horizontalLayout_2->addWidget(contentLayoutLabel);

        contentLayoutComboBox = new QComboBox(groupBoxSettings);
        contentLayoutComboBox->addItem(QString());
        contentLayoutComboBox->addItem(QString());
        contentLayoutComboBox->addItem(QString());
        contentLayoutComboBox->setObjectName(QString::fromUtf8("contentLayoutComboBox"));

        horizontalLayout_2->addWidget(contentLayoutComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);


        mainlayout_addui->addWidget(groupBoxSettings);

        infoGroup = new QGroupBox(torrentoptionsFrame);
        infoGroup->setObjectName(QString::fromUtf8("infoGroup"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(infoGroup->sizePolicy().hasHeightForWidth());
        infoGroup->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(infoGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelInfohash1 = new QLabel(infoGroup);
        labelInfohash1->setObjectName(QString::fromUtf8("labelInfohash1"));

        gridLayout_2->addWidget(labelInfohash1, 2, 0, 1, 1);

        labelSizeData = new QLabel(infoGroup);
        labelSizeData->setObjectName(QString::fromUtf8("labelSizeData"));

        gridLayout_2->addWidget(labelSizeData, 0, 1, 1, 1);

        labelDateData = new QLabel(infoGroup);
        labelDateData->setObjectName(QString::fromUtf8("labelDateData"));

        gridLayout_2->addWidget(labelDateData, 1, 1, 1, 1);

        scrollArea = new QScrollArea(infoGroup);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelCommentData = new QLabel(scrollAreaWidgetContents);
        labelCommentData->setObjectName(QString::fromUtf8("labelCommentData"));
        labelCommentData->setTextFormat(Qt::RichText);
        labelCommentData->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelCommentData->setWordWrap(true);
        labelCommentData->setOpenExternalLinks(true);
        labelCommentData->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_2->addWidget(labelCommentData);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 4, 1, 1, 1);

        labelComment = new QLabel(infoGroup);
        labelComment->setObjectName(QString::fromUtf8("labelComment"));
        labelComment->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(labelComment, 4, 0, 1, 1);

        labelSize = new QLabel(infoGroup);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));

        gridLayout_2->addWidget(labelSize, 0, 0, 1, 1);

        labelInfohash1Data = new QLabel(infoGroup);
        labelInfohash1Data->setObjectName(QString::fromUtf8("labelInfohash1Data"));
        labelInfohash1Data->setTextFormat(Qt::PlainText);
        labelInfohash1Data->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(labelInfohash1Data, 2, 1, 1, 1);

        labelDate = new QLabel(infoGroup);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));

        gridLayout_2->addWidget(labelDate, 1, 0, 1, 1);

        labelInfohash2 = new QLabel(infoGroup);
        labelInfohash2->setObjectName(QString::fromUtf8("labelInfohash2"));

        gridLayout_2->addWidget(labelInfohash2, 3, 0, 1, 1);

        labelInfohash2Data = new QLabel(infoGroup);
        labelInfohash2Data->setObjectName(QString::fromUtf8("labelInfohash2Data"));

        gridLayout_2->addWidget(labelInfohash2Data, 3, 1, 1, 1);


        mainlayout_addui->addWidget(infoGroup);

        splitter->addWidget(torrentoptionsFrame);
        contentTreeView = new TorrentContentTreeView(splitter);
        contentTreeView->setObjectName(QString::fromUtf8("contentTreeView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(contentTreeView->sizePolicy().hasHeightForWidth());
        contentTreeView->setSizePolicy(sizePolicy2);
        contentTreeView->setContextMenuPolicy(Qt::CustomContextMenu);
        contentTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        contentTreeView->setSortingEnabled(true);
        splitter->addWidget(contentTreeView);

        AddNewTorrentDialogLayout->addWidget(splitter);

        buttonsHLayout = new QHBoxLayout();
        buttonsHLayout->setObjectName(QString::fromUtf8("buttonsHLayout"));
        checkBoxNeverShow = new QCheckBox(AddNewTorrentDialog);
        checkBoxNeverShow->setObjectName(QString::fromUtf8("checkBoxNeverShow"));

        buttonsHLayout->addWidget(checkBoxNeverShow);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsHLayout->addItem(horizontalSpacer_2);


        AddNewTorrentDialogLayout->addLayout(buttonsHLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        metadataLayout = new QHBoxLayout();
        metadataLayout->setObjectName(QString::fromUtf8("metadataLayout"));
        progMetaLoading = new QProgressBar(AddNewTorrentDialog);
        progMetaLoading->setObjectName(QString::fromUtf8("progMetaLoading"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(progMetaLoading->sizePolicy().hasHeightForWidth());
        progMetaLoading->setSizePolicy(sizePolicy3);
        progMetaLoading->setMaximum(0);
        progMetaLoading->setValue(-1);
        progMetaLoading->setTextVisible(false);

        metadataLayout->addWidget(progMetaLoading);

        lblMetaLoading = new QLabel(AddNewTorrentDialog);
        lblMetaLoading->setObjectName(QString::fromUtf8("lblMetaLoading"));

        metadataLayout->addWidget(lblMetaLoading);

        buttonSave = new QPushButton(AddNewTorrentDialog);
        buttonSave->setObjectName(QString::fromUtf8("buttonSave"));

        metadataLayout->addWidget(buttonSave);


        horizontalLayout->addLayout(metadataLayout);

        buttonBox = new QDialogButtonBox(AddNewTorrentDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        AddNewTorrentDialogLayout->addLayout(horizontalLayout);


        retranslateUi(AddNewTorrentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddNewTorrentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddNewTorrentDialog, SLOT(reject()));
        QObject::connect(comboTTM, SIGNAL(currentIndexChanged(int)), AddNewTorrentDialog, SLOT(TMMChanged(int)));
        QObject::connect(categoryComboBox, SIGNAL(currentIndexChanged(int)), AddNewTorrentDialog, SLOT(categoryChanged(int)));

        contentLayoutComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddNewTorrentDialog);
    } // setupUi

    void retranslateUi(QDialog *AddNewTorrentDialog)
    {
        labelTorrentManagementMode->setText(QCoreApplication::translate("AddNewTorrentDialog", "Torrent Management Mode:", nullptr));
        comboTTM->setItemText(0, QCoreApplication::translate("AddNewTorrentDialog", "Manual", nullptr));
        comboTTM->setItemText(1, QCoreApplication::translate("AddNewTorrentDialog", "Automatic", nullptr));

#if QT_CONFIG(tooltip)
        comboTTM->setToolTip(QCoreApplication::translate("AddNewTorrentDialog", "Automatic mode means that various torrent properties(eg save path) will be decided by the associated category", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxSavePath->setTitle(QCoreApplication::translate("AddNewTorrentDialog", "Save at", nullptr));
        checkBoxRememberLastSavePath->setText(QCoreApplication::translate("AddNewTorrentDialog", "Remember last used save path", nullptr));
        groupBoxSettings->setTitle(QCoreApplication::translate("AddNewTorrentDialog", "Torrent settings", nullptr));
        labelCategory->setText(QCoreApplication::translate("AddNewTorrentDialog", "Category:", nullptr));
        defaultCategoryCheckbox->setText(QCoreApplication::translate("AddNewTorrentDialog", "Set as default category", nullptr));
#if QT_CONFIG(tooltip)
        doNotDeleteTorrentCheckBox->setToolTip(QCoreApplication::translate("AddNewTorrentDialog", "When checked, the .torrent file will not be deleted regardless of the settings at the \"Download\" page of the Options dialog", nullptr));
#endif // QT_CONFIG(tooltip)
        doNotDeleteTorrentCheckBox->setText(QCoreApplication::translate("AddNewTorrentDialog", "Do not delete .torrent file", nullptr));
        firstLastCheckBox->setText(QCoreApplication::translate("AddNewTorrentDialog", "Download first and last pieces first", nullptr));
        skipCheckingCheckBox->setText(QCoreApplication::translate("AddNewTorrentDialog", "Skip hash check", nullptr));
        sequentialCheckBox->setText(QCoreApplication::translate("AddNewTorrentDialog", "Download in sequential order", nullptr));
        startTorrentCheckBox->setText(QCoreApplication::translate("AddNewTorrentDialog", "Start torrent", nullptr));
        contentLayoutLabel->setText(QCoreApplication::translate("AddNewTorrentDialog", "Content layout:", nullptr));
        contentLayoutComboBox->setItemText(0, QCoreApplication::translate("AddNewTorrentDialog", "Original", nullptr));
        contentLayoutComboBox->setItemText(1, QCoreApplication::translate("AddNewTorrentDialog", "Create subfolder", nullptr));
        contentLayoutComboBox->setItemText(2, QCoreApplication::translate("AddNewTorrentDialog", "Don't create subfolder", nullptr));

        infoGroup->setTitle(QCoreApplication::translate("AddNewTorrentDialog", "Torrent information", nullptr));
        labelInfohash1->setText(QCoreApplication::translate("AddNewTorrentDialog", "Info hash v1:", nullptr));
        labelComment->setText(QCoreApplication::translate("AddNewTorrentDialog", "Comment:", nullptr));
        labelSize->setText(QCoreApplication::translate("AddNewTorrentDialog", "Size:", nullptr));
        labelDate->setText(QCoreApplication::translate("AddNewTorrentDialog", "Date:", nullptr));
        labelInfohash2->setText(QCoreApplication::translate("AddNewTorrentDialog", "Info hash v2:", nullptr));
        labelInfohash2Data->setText(QString());
        checkBoxNeverShow->setText(QCoreApplication::translate("AddNewTorrentDialog", "Never show again", nullptr));
        lblMetaLoading->setText(QString());
        buttonSave->setText(QCoreApplication::translate("AddNewTorrentDialog", "Save as .torrent file...", nullptr));
        (void)AddNewTorrentDialog;
    } // retranslateUi

};

namespace Ui {
    class AddNewTorrentDialog: public Ui_AddNewTorrentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWTORRENTDIALOG_H
