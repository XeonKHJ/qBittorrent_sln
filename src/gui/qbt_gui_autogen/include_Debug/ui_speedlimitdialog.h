/********************************************************************************
** Form generated from reading UI file 'speedlimitdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEEDLIMITDIALOG_H
#define UI_SPEEDLIMITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SpeedLimitDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *labelGlobalSpeedIcon;
    QLabel *label;
    QSlider *sliderUploadLimit;
    QSpinBox *spinUploadLimit;
    QLabel *label_2;
    QSlider *sliderDownloadLimit;
    QSpinBox *spinDownloadLimit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *labelAltGlobalSpeedIcon;
    QLabel *label_3;
    QSlider *sliderAltUploadLimit;
    QSpinBox *spinAltUploadLimit;
    QLabel *label_4;
    QSlider *sliderAltDownloadLimit;
    QSpinBox *spinAltDownloadLimit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SpeedLimitDialog)
    {
        if (SpeedLimitDialog->objectName().isEmpty())
            SpeedLimitDialog->setObjectName(QString::fromUtf8("SpeedLimitDialog"));
        SpeedLimitDialog->resize(481, 272);
        verticalLayout = new QVBoxLayout(SpeedLimitDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(SpeedLimitDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelGlobalSpeedIcon = new QLabel(groupBox);
        labelGlobalSpeedIcon->setObjectName(QString::fromUtf8("labelGlobalSpeedIcon"));

        gridLayout->addWidget(labelGlobalSpeedIcon, 0, 0, 2, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        sliderUploadLimit = new QSlider(groupBox);
        sliderUploadLimit->setObjectName(QString::fromUtf8("sliderUploadLimit"));
        sliderUploadLimit->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderUploadLimit, 0, 2, 1, 1);

        spinUploadLimit = new QSpinBox(groupBox);
        spinUploadLimit->setObjectName(QString::fromUtf8("spinUploadLimit"));
        spinUploadLimit->setMaximum(2000000);

        gridLayout->addWidget(spinUploadLimit, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        sliderDownloadLimit = new QSlider(groupBox);
        sliderDownloadLimit->setObjectName(QString::fromUtf8("sliderDownloadLimit"));
        sliderDownloadLimit->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderDownloadLimit, 1, 2, 1, 1);

        spinDownloadLimit = new QSpinBox(groupBox);
        spinDownloadLimit->setObjectName(QString::fromUtf8("spinDownloadLimit"));
        spinDownloadLimit->setMaximum(2000000);

        gridLayout->addWidget(spinDownloadLimit, 1, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(SpeedLimitDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelAltGlobalSpeedIcon = new QLabel(groupBox_2);
        labelAltGlobalSpeedIcon->setObjectName(QString::fromUtf8("labelAltGlobalSpeedIcon"));

        gridLayout_2->addWidget(labelAltGlobalSpeedIcon, 0, 0, 2, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 1, 1, 1);

        sliderAltUploadLimit = new QSlider(groupBox_2);
        sliderAltUploadLimit->setObjectName(QString::fromUtf8("sliderAltUploadLimit"));
        sliderAltUploadLimit->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderAltUploadLimit, 0, 2, 1, 1);

        spinAltUploadLimit = new QSpinBox(groupBox_2);
        spinAltUploadLimit->setObjectName(QString::fromUtf8("spinAltUploadLimit"));
        spinAltUploadLimit->setMaximum(2000000);

        gridLayout_2->addWidget(spinAltUploadLimit, 0, 3, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 1, 1, 1);

        sliderAltDownloadLimit = new QSlider(groupBox_2);
        sliderAltDownloadLimit->setObjectName(QString::fromUtf8("sliderAltDownloadLimit"));
        sliderAltDownloadLimit->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderAltDownloadLimit, 1, 2, 1, 1);

        spinAltDownloadLimit = new QSpinBox(groupBox_2);
        spinAltDownloadLimit->setObjectName(QString::fromUtf8("spinAltDownloadLimit"));
        spinAltDownloadLimit->setMaximum(2000000);

        gridLayout_2->addWidget(spinAltDownloadLimit, 1, 3, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SpeedLimitDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SpeedLimitDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), SpeedLimitDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), SpeedLimitDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(SpeedLimitDialog);
    } // setupUi

    void retranslateUi(QDialog *SpeedLimitDialog)
    {
        SpeedLimitDialog->setWindowTitle(QCoreApplication::translate("SpeedLimitDialog", "Global Speed Limits", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SpeedLimitDialog", "Speed limits", nullptr));
        labelGlobalSpeedIcon->setText(QString());
        label->setText(QCoreApplication::translate("SpeedLimitDialog", "Upload:", nullptr));
        spinUploadLimit->setSpecialValueText(QCoreApplication::translate("SpeedLimitDialog", "\342\210\236", nullptr));
        spinUploadLimit->setSuffix(QCoreApplication::translate("SpeedLimitDialog", " KiB/s", nullptr));
        label_2->setText(QCoreApplication::translate("SpeedLimitDialog", "Download:", nullptr));
        spinDownloadLimit->setSpecialValueText(QCoreApplication::translate("SpeedLimitDialog", "\342\210\236", nullptr));
        spinDownloadLimit->setSuffix(QCoreApplication::translate("SpeedLimitDialog", " KiB/s", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SpeedLimitDialog", "Alternative speed limits", nullptr));
        labelAltGlobalSpeedIcon->setText(QString());
        label_3->setText(QCoreApplication::translate("SpeedLimitDialog", "Upload:", nullptr));
        spinAltUploadLimit->setSpecialValueText(QCoreApplication::translate("SpeedLimitDialog", "\342\210\236", nullptr));
        spinAltUploadLimit->setSuffix(QCoreApplication::translate("SpeedLimitDialog", " KiB/s", nullptr));
        label_4->setText(QCoreApplication::translate("SpeedLimitDialog", "Download:", nullptr));
        spinAltDownloadLimit->setSpecialValueText(QCoreApplication::translate("SpeedLimitDialog", "\342\210\236", nullptr));
        spinAltDownloadLimit->setSuffix(QCoreApplication::translate("SpeedLimitDialog", " KiB/s", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpeedLimitDialog: public Ui_SpeedLimitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEEDLIMITDIALOG_H
