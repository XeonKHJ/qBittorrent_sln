/********************************************************************************
** Form generated from reading UI file 'torrentcreatordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TORRENTCREATORDIALOG_H
#define UI_TORRENTCREATORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TorrentCreatorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *textInputPath;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *addFileButton;
    QPushButton *addFolderButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetTorrentFormat;
    QHBoxLayout *layoutTorrentFormat;
    QLabel *labelTorrentFormat;
    QComboBox *comboTorrentFormat;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *pieceSizeLayout;
    QLabel *txtPieceSize;
    QComboBox *comboPieceSize;
    QPushButton *buttonCalcTotalPieces;
    QLabel *labelTotalPieces;
    QSpacerItem *spacer1;
    QCheckBox *checkPrivate;
    QCheckBox *checkStartSeeding;
    QCheckBox *checkIgnoreShareLimits;
    QGroupBox *checkOptimizeAlignment;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblPaddedFileSizeLimit;
    QSpinBox *spinPaddedFileSizeLimit;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QTextEdit *trackersList;
    QLabel *urlSeeds_lbl;
    QTextEdit *URLSeedsList;
    QTextEdit *txtComment;
    QLabel *lbl_announce_url;
    QLabel *lbl_comment;
    QLabel *labelSource;
    QLineEdit *lineEditSource;
    QHBoxLayout *horizontalLayout_2;
    QLabel *progressLbl;
    QProgressBar *progressBar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TorrentCreatorDialog)
    {
        if (TorrentCreatorDialog->objectName().isEmpty())
            TorrentCreatorDialog->setObjectName(QString::fromUtf8("TorrentCreatorDialog"));
        TorrentCreatorDialog->resize(592, 731);
        TorrentCreatorDialog->setAcceptDrops(true);
        verticalLayout = new QVBoxLayout(TorrentCreatorDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(TorrentCreatorDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 560, 668));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        textInputPath = new QLineEdit(groupBox);
        textInputPath->setObjectName(QString::fromUtf8("textInputPath"));
        textInputPath->setAcceptDrops(false);

        horizontalLayout->addWidget(textInputPath);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        addFileButton = new QPushButton(groupBox);
        addFileButton->setObjectName(QString::fromUtf8("addFileButton"));

        horizontalLayout_3->addWidget(addFileButton);

        addFolderButton = new QPushButton(groupBox);
        addFolderButton->setObjectName(QString::fromUtf8("addFolderButton"));

        horizontalLayout_3->addWidget(addFolderButton);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widgetTorrentFormat = new QWidget(groupBox_2);
        widgetTorrentFormat->setObjectName(QString::fromUtf8("widgetTorrentFormat"));
        layoutTorrentFormat = new QHBoxLayout(widgetTorrentFormat);
        layoutTorrentFormat->setObjectName(QString::fromUtf8("layoutTorrentFormat"));
        layoutTorrentFormat->setContentsMargins(0, 0, 0, 0);
        labelTorrentFormat = new QLabel(widgetTorrentFormat);
        labelTorrentFormat->setObjectName(QString::fromUtf8("labelTorrentFormat"));

        layoutTorrentFormat->addWidget(labelTorrentFormat);

        comboTorrentFormat = new QComboBox(widgetTorrentFormat);
        comboTorrentFormat->addItem(QString::fromUtf8("V2"));
        comboTorrentFormat->addItem(QString());
        comboTorrentFormat->addItem(QString::fromUtf8("V1"));
        comboTorrentFormat->setObjectName(QString::fromUtf8("comboTorrentFormat"));

        layoutTorrentFormat->addWidget(comboTorrentFormat);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutTorrentFormat->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widgetTorrentFormat);

        pieceSizeLayout = new QHBoxLayout();
        pieceSizeLayout->setObjectName(QString::fromUtf8("pieceSizeLayout"));
        txtPieceSize = new QLabel(groupBox_2);
        txtPieceSize->setObjectName(QString::fromUtf8("txtPieceSize"));

        pieceSizeLayout->addWidget(txtPieceSize);

        comboPieceSize = new QComboBox(groupBox_2);
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->addItem(QString());
        comboPieceSize->setObjectName(QString::fromUtf8("comboPieceSize"));
        comboPieceSize->setMinimumContentsLength(7);

        pieceSizeLayout->addWidget(comboPieceSize);

        buttonCalcTotalPieces = new QPushButton(groupBox_2);
        buttonCalcTotalPieces->setObjectName(QString::fromUtf8("buttonCalcTotalPieces"));

        pieceSizeLayout->addWidget(buttonCalcTotalPieces);

        labelTotalPieces = new QLabel(groupBox_2);
        labelTotalPieces->setObjectName(QString::fromUtf8("labelTotalPieces"));
        labelTotalPieces->setText(QString::fromUtf8("0"));

        pieceSizeLayout->addWidget(labelTotalPieces);

        spacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pieceSizeLayout->addItem(spacer1);


        verticalLayout_2->addLayout(pieceSizeLayout);

        checkPrivate = new QCheckBox(groupBox_2);
        checkPrivate->setObjectName(QString::fromUtf8("checkPrivate"));

        verticalLayout_2->addWidget(checkPrivate);

        checkStartSeeding = new QCheckBox(groupBox_2);
        checkStartSeeding->setObjectName(QString::fromUtf8("checkStartSeeding"));
        checkStartSeeding->setChecked(true);

        verticalLayout_2->addWidget(checkStartSeeding);

        checkIgnoreShareLimits = new QCheckBox(groupBox_2);
        checkIgnoreShareLimits->setObjectName(QString::fromUtf8("checkIgnoreShareLimits"));

        verticalLayout_2->addWidget(checkIgnoreShareLimits);

        checkOptimizeAlignment = new QGroupBox(groupBox_2);
        checkOptimizeAlignment->setObjectName(QString::fromUtf8("checkOptimizeAlignment"));
        checkOptimizeAlignment->setCheckable(true);
        verticalLayout_4 = new QVBoxLayout(checkOptimizeAlignment);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lblPaddedFileSizeLimit = new QLabel(checkOptimizeAlignment);
        lblPaddedFileSizeLimit->setObjectName(QString::fromUtf8("lblPaddedFileSizeLimit"));

        horizontalLayout_4->addWidget(lblPaddedFileSizeLimit);

        spinPaddedFileSizeLimit = new QSpinBox(checkOptimizeAlignment);
        spinPaddedFileSizeLimit->setObjectName(QString::fromUtf8("spinPaddedFileSizeLimit"));
        spinPaddedFileSizeLimit->setMinimum(-1);
        spinPaddedFileSizeLimit->setMaximum(2147483647);
        spinPaddedFileSizeLimit->setValue(-1);

        horizontalLayout_4->addWidget(spinPaddedFileSizeLimit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(checkOptimizeAlignment);


        verticalLayout_5->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        trackersList = new QTextEdit(groupBox_3);
        trackersList->setObjectName(QString::fromUtf8("trackersList"));
        trackersList->setAcceptRichText(false);

        gridLayout_2->addWidget(trackersList, 0, 1, 1, 1);

        urlSeeds_lbl = new QLabel(groupBox_3);
        urlSeeds_lbl->setObjectName(QString::fromUtf8("urlSeeds_lbl"));

        gridLayout_2->addWidget(urlSeeds_lbl, 1, 0, 1, 1);

        URLSeedsList = new QTextEdit(groupBox_3);
        URLSeedsList->setObjectName(QString::fromUtf8("URLSeedsList"));
        URLSeedsList->setAcceptRichText(false);

        gridLayout_2->addWidget(URLSeedsList, 1, 1, 1, 1);

        txtComment = new QTextEdit(groupBox_3);
        txtComment->setObjectName(QString::fromUtf8("txtComment"));
        txtComment->setAcceptRichText(false);

        gridLayout_2->addWidget(txtComment, 2, 1, 1, 1);

        lbl_announce_url = new QLabel(groupBox_3);
        lbl_announce_url->setObjectName(QString::fromUtf8("lbl_announce_url"));

        gridLayout_2->addWidget(lbl_announce_url, 0, 0, 1, 1);

        lbl_comment = new QLabel(groupBox_3);
        lbl_comment->setObjectName(QString::fromUtf8("lbl_comment"));

        gridLayout_2->addWidget(lbl_comment, 2, 0, 1, 1);

        labelSource = new QLabel(groupBox_3);
        labelSource->setObjectName(QString::fromUtf8("labelSource"));

        gridLayout_2->addWidget(labelSource, 3, 0, 1, 1);

        lineEditSource = new QLineEdit(groupBox_3);
        lineEditSource->setObjectName(QString::fromUtf8("lineEditSource"));

        gridLayout_2->addWidget(lineEditSource, 3, 1, 1, 1);


        verticalLayout_5->addWidget(groupBox_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        progressLbl = new QLabel(TorrentCreatorDialog);
        progressLbl->setObjectName(QString::fromUtf8("progressLbl"));

        horizontalLayout_2->addWidget(progressLbl);

        progressBar = new QProgressBar(TorrentCreatorDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_2->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(TorrentCreatorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(textInputPath, addFileButton);
        QWidget::setTabOrder(addFileButton, addFolderButton);
        QWidget::setTabOrder(addFolderButton, comboPieceSize);
        QWidget::setTabOrder(comboPieceSize, checkPrivate);
        QWidget::setTabOrder(checkPrivate, checkStartSeeding);
        QWidget::setTabOrder(checkStartSeeding, checkIgnoreShareLimits);
        QWidget::setTabOrder(checkIgnoreShareLimits, checkOptimizeAlignment);
        QWidget::setTabOrder(checkOptimizeAlignment, trackersList);
        QWidget::setTabOrder(trackersList, URLSeedsList);
        QWidget::setTabOrder(URLSeedsList, txtComment);

        retranslateUi(TorrentCreatorDialog);
        QObject::connect(checkStartSeeding, SIGNAL(clicked(bool)), checkIgnoreShareLimits, SLOT(setEnabled(bool)));
        QObject::connect(buttonBox, SIGNAL(rejected()), TorrentCreatorDialog, SLOT(reject()));

        comboPieceSize->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TorrentCreatorDialog);
    } // setupUi

    void retranslateUi(QDialog *TorrentCreatorDialog)
    {
        TorrentCreatorDialog->setWindowTitle(QCoreApplication::translate("TorrentCreatorDialog", "Torrent Creator", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TorrentCreatorDialog", "Select file/folder to share", nullptr));
        label->setText(QCoreApplication::translate("TorrentCreatorDialog", "Path:", nullptr));
        label_2->setText(QCoreApplication::translate("TorrentCreatorDialog", "[Drag and drop area]", nullptr));
        addFileButton->setText(QCoreApplication::translate("TorrentCreatorDialog", "Select file", nullptr));
        addFolderButton->setText(QCoreApplication::translate("TorrentCreatorDialog", "Select folder", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TorrentCreatorDialog", "Settings", nullptr));
        labelTorrentFormat->setText(QCoreApplication::translate("TorrentCreatorDialog", "Torrent format:", nullptr));
        comboTorrentFormat->setItemText(1, QCoreApplication::translate("TorrentCreatorDialog", "Hybrid", nullptr));

        txtPieceSize->setText(QCoreApplication::translate("TorrentCreatorDialog", "Piece size:", nullptr));
        comboPieceSize->setItemText(0, QCoreApplication::translate("TorrentCreatorDialog", "Auto", nullptr));
        comboPieceSize->setItemText(1, QCoreApplication::translate("TorrentCreatorDialog", "16 KiB", nullptr));
        comboPieceSize->setItemText(2, QCoreApplication::translate("TorrentCreatorDialog", "32 KiB", nullptr));
        comboPieceSize->setItemText(3, QCoreApplication::translate("TorrentCreatorDialog", "64 KiB", nullptr));
        comboPieceSize->setItemText(4, QCoreApplication::translate("TorrentCreatorDialog", "128 KiB", nullptr));
        comboPieceSize->setItemText(5, QCoreApplication::translate("TorrentCreatorDialog", "256 KiB", nullptr));
        comboPieceSize->setItemText(6, QCoreApplication::translate("TorrentCreatorDialog", "512 KiB", nullptr));
        comboPieceSize->setItemText(7, QCoreApplication::translate("TorrentCreatorDialog", "1 MiB", nullptr));
        comboPieceSize->setItemText(8, QCoreApplication::translate("TorrentCreatorDialog", "2 MiB", nullptr));
        comboPieceSize->setItemText(9, QCoreApplication::translate("TorrentCreatorDialog", "4 MiB", nullptr));
        comboPieceSize->setItemText(10, QCoreApplication::translate("TorrentCreatorDialog", "8 MiB", nullptr));
        comboPieceSize->setItemText(11, QCoreApplication::translate("TorrentCreatorDialog", "16 MiB", nullptr));
        comboPieceSize->setItemText(12, QCoreApplication::translate("TorrentCreatorDialog", "32 MiB", nullptr));

        buttonCalcTotalPieces->setText(QCoreApplication::translate("TorrentCreatorDialog", "Calculate number of pieces:", nullptr));
        checkPrivate->setText(QCoreApplication::translate("TorrentCreatorDialog", "Private torrent (Won't distribute on DHT network)", nullptr));
        checkStartSeeding->setText(QCoreApplication::translate("TorrentCreatorDialog", "Start seeding immediately", nullptr));
        checkIgnoreShareLimits->setText(QCoreApplication::translate("TorrentCreatorDialog", "Ignore share ratio limits for this torrent", nullptr));
        checkOptimizeAlignment->setTitle(QCoreApplication::translate("TorrentCreatorDialog", "Optimize alignment", nullptr));
        lblPaddedFileSizeLimit->setText(QCoreApplication::translate("TorrentCreatorDialog", "Align to piece boundary for files larger than:", nullptr));
        spinPaddedFileSizeLimit->setSpecialValueText(QCoreApplication::translate("TorrentCreatorDialog", "Disabled", nullptr));
        spinPaddedFileSizeLimit->setSuffix(QCoreApplication::translate("TorrentCreatorDialog", " KiB", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("TorrentCreatorDialog", "Fields", nullptr));
#if QT_CONFIG(tooltip)
        trackersList->setToolTip(QCoreApplication::translate("TorrentCreatorDialog", "You can separate tracker tiers / groups with an empty line.", nullptr));
#endif // QT_CONFIG(tooltip)
        urlSeeds_lbl->setText(QCoreApplication::translate("TorrentCreatorDialog", "Web seed URLs:", nullptr));
        lbl_announce_url->setText(QCoreApplication::translate("TorrentCreatorDialog", "Tracker URLs:", nullptr));
        lbl_comment->setText(QCoreApplication::translate("TorrentCreatorDialog", "Comments:", nullptr));
        labelSource->setText(QCoreApplication::translate("TorrentCreatorDialog", "Source:", nullptr));
        progressLbl->setText(QCoreApplication::translate("TorrentCreatorDialog", "Progress:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TorrentCreatorDialog: public Ui_TorrentCreatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TORRENTCREATORDIALOG_H
