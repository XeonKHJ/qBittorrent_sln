/********************************************************************************
** Form generated from reading UI file 'torrentoptionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TORRENTOPTIONSDIALOG_H
#define UI_TORRENTOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TorrentOptionsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QSpinBox *spinDownloadLimit;
    QSpinBox *spinUploadLimit;
    QLabel *labelWarning;
    QLabel *label;
    QSlider *sliderUploadLimit;
    QSlider *sliderDownloadLimit;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioUseGlobalShareLimits;
    QRadioButton *radioNoLimit;
    QGridLayout *gridLayout;
    QRadioButton *radioTorrentLimit;
    QCheckBox *checkMaxTime;
    QDoubleSpinBox *spinRatioLimit;
    QSpinBox *spinTimeLimit;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkMaxRatio;
    QGridLayout *gridLayout_3;
    QCheckBox *checkDisableDHT;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkDisablePEX;
    QCheckBox *checkDisableLSD;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *TorrentOptionsDialog)
    {
        if (TorrentOptionsDialog->objectName().isEmpty())
            TorrentOptionsDialog->setObjectName(QString::fromUtf8("TorrentOptionsDialog"));
        TorrentOptionsDialog->resize(390, 450);
        verticalLayout_2 = new QVBoxLayout(TorrentOptionsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(TorrentOptionsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        spinDownloadLimit = new QSpinBox(groupBox);
        spinDownloadLimit->setObjectName(QString::fromUtf8("spinDownloadLimit"));
        spinDownloadLimit->setMaximum(2000000);

        gridLayout_2->addWidget(spinDownloadLimit, 1, 2, 1, 1);

        spinUploadLimit = new QSpinBox(groupBox);
        spinUploadLimit->setObjectName(QString::fromUtf8("spinUploadLimit"));
        spinUploadLimit->setMaximum(2000000);

        gridLayout_2->addWidget(spinUploadLimit, 0, 2, 1, 1);

        labelWarning = new QLabel(groupBox);
        labelWarning->setObjectName(QString::fromUtf8("labelWarning"));

        gridLayout_2->addWidget(labelWarning, 2, 1, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        sliderUploadLimit = new QSlider(groupBox);
        sliderUploadLimit->setObjectName(QString::fromUtf8("sliderUploadLimit"));
        sliderUploadLimit->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderUploadLimit, 0, 1, 1, 1);

        sliderDownloadLimit = new QSlider(groupBox);
        sliderDownloadLimit->setObjectName(QString::fromUtf8("sliderDownloadLimit"));
        sliderDownloadLimit->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderDownloadLimit, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TorrentOptionsDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioUseGlobalShareLimits = new QRadioButton(groupBox_2);
        buttonGroup = new QButtonGroup(TorrentOptionsDialog);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioUseGlobalShareLimits);
        radioUseGlobalShareLimits->setObjectName(QString::fromUtf8("radioUseGlobalShareLimits"));

        verticalLayout->addWidget(radioUseGlobalShareLimits);

        radioNoLimit = new QRadioButton(groupBox_2);
        buttonGroup->addButton(radioNoLimit);
        radioNoLimit->setObjectName(QString::fromUtf8("radioNoLimit"));

        verticalLayout->addWidget(radioNoLimit);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioTorrentLimit = new QRadioButton(groupBox_2);
        buttonGroup->addButton(radioTorrentLimit);
        radioTorrentLimit->setObjectName(QString::fromUtf8("radioTorrentLimit"));

        gridLayout->addWidget(radioTorrentLimit, 0, 0, 1, 1);

        checkMaxTime = new QCheckBox(groupBox_2);
        checkMaxTime->setObjectName(QString::fromUtf8("checkMaxTime"));

        gridLayout->addWidget(checkMaxTime, 1, 1, 1, 1);

        spinRatioLimit = new QDoubleSpinBox(groupBox_2);
        spinRatioLimit->setObjectName(QString::fromUtf8("spinRatioLimit"));
        spinRatioLimit->setMaximum(9999.000000000000000);
        spinRatioLimit->setSingleStep(0.050000000000000);
        spinRatioLimit->setValue(1.000000000000000);

        gridLayout->addWidget(spinRatioLimit, 0, 2, 1, 1);

        spinTimeLimit = new QSpinBox(groupBox_2);
        spinTimeLimit->setObjectName(QString::fromUtf8("spinTimeLimit"));
        spinTimeLimit->setMaximum(525600);
        spinTimeLimit->setValue(1440);

        gridLayout->addWidget(spinTimeLimit, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        checkMaxRatio = new QCheckBox(groupBox_2);
        checkMaxRatio->setObjectName(QString::fromUtf8("checkMaxRatio"));

        gridLayout->addWidget(checkMaxRatio, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(groupBox_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        checkDisableDHT = new QCheckBox(TorrentOptionsDialog);
        checkDisableDHT->setObjectName(QString::fromUtf8("checkDisableDHT"));

        gridLayout_3->addWidget(checkDisableDHT, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        checkDisablePEX = new QCheckBox(TorrentOptionsDialog);
        checkDisablePEX->setObjectName(QString::fromUtf8("checkDisablePEX"));

        gridLayout_3->addWidget(checkDisablePEX, 1, 0, 1, 1);

        checkDisableLSD = new QCheckBox(TorrentOptionsDialog);
        checkDisableLSD->setObjectName(QString::fromUtf8("checkDisableLSD"));

        gridLayout_3->addWidget(checkDisableLSD, 2, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(TorrentOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(TorrentOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), TorrentOptionsDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), TorrentOptionsDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(TorrentOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *TorrentOptionsDialog)
    {
        TorrentOptionsDialog->setWindowTitle(QCoreApplication::translate("TorrentOptionsDialog", "Torrent Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TorrentOptionsDialog", "Torrent speed limits", nullptr));
        label_2->setText(QCoreApplication::translate("TorrentOptionsDialog", "Download:", nullptr));
        spinDownloadLimit->setSpecialValueText(QCoreApplication::translate("TorrentOptionsDialog", "\342\210\236", nullptr));
        spinDownloadLimit->setSuffix(QCoreApplication::translate("TorrentOptionsDialog", " KiB/s", nullptr));
        spinUploadLimit->setSpecialValueText(QCoreApplication::translate("TorrentOptionsDialog", "\342\210\236", nullptr));
        spinUploadLimit->setSuffix(QCoreApplication::translate("TorrentOptionsDialog", " KiB/s", nullptr));
        labelWarning->setText(QCoreApplication::translate("TorrentOptionsDialog", "These will not exceed the global limits", nullptr));
        label->setText(QCoreApplication::translate("TorrentOptionsDialog", "Upload:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TorrentOptionsDialog", "Torrent share limits", nullptr));
        radioUseGlobalShareLimits->setText(QCoreApplication::translate("TorrentOptionsDialog", "Use global share limit", nullptr));
        radioNoLimit->setText(QCoreApplication::translate("TorrentOptionsDialog", "Set no share limit", nullptr));
        radioTorrentLimit->setText(QCoreApplication::translate("TorrentOptionsDialog", "Set share limit to", nullptr));
        checkMaxTime->setText(QCoreApplication::translate("TorrentOptionsDialog", "minutes", nullptr));
        checkMaxRatio->setText(QCoreApplication::translate("TorrentOptionsDialog", "ratio", nullptr));
        checkDisableDHT->setText(QCoreApplication::translate("TorrentOptionsDialog", "Disable DHT for this torrent", nullptr));
        checkDisablePEX->setText(QCoreApplication::translate("TorrentOptionsDialog", "Disable PeX for this torrent", nullptr));
        checkDisableLSD->setText(QCoreApplication::translate("TorrentOptionsDialog", "Disable LSD for this torrent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TorrentOptionsDialog: public Ui_TorrentOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TORRENTOPTIONSDIALOG_H
