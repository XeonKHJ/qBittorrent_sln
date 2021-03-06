/********************************************************************************
** Form generated from reading UI file 'deletionconfirmationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETIONCONFIRMATIONDIALOG_H
#define UI_DELETIONCONFIRMATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeletionConfirmationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelWarning;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *rememberBtn;
    QCheckBox *checkPermDelete;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DeletionConfirmationDialog)
    {
        if (DeletionConfirmationDialog->objectName().isEmpty())
            DeletionConfirmationDialog->setObjectName(QString::fromUtf8("DeletionConfirmationDialog"));
        DeletionConfirmationDialog->resize(463, 128);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DeletionConfirmationDialog->sizePolicy().hasHeightForWidth());
        DeletionConfirmationDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(DeletionConfirmationDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelWarning = new QLabel(DeletionConfirmationDialog);
        labelWarning->setObjectName(QString::fromUtf8("labelWarning"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelWarning->sizePolicy().hasHeightForWidth());
        labelWarning->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(labelWarning);

        label = new QLabel(DeletionConfirmationDialog);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setText(QString::fromUtf8("deletion message goes here"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rememberBtn = new QToolButton(DeletionConfirmationDialog);
        rememberBtn->setObjectName(QString::fromUtf8("rememberBtn"));
        rememberBtn->setEnabled(false);
        rememberBtn->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(rememberBtn);

        checkPermDelete = new QCheckBox(DeletionConfirmationDialog);
        checkPermDelete->setObjectName(QString::fromUtf8("checkPermDelete"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkPermDelete->sizePolicy().hasHeightForWidth());
        checkPermDelete->setSizePolicy(sizePolicy2);
        QFont font;
        font.setItalic(true);
        checkPermDelete->setFont(font);

        horizontalLayout_2->addWidget(checkPermDelete);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(DeletionConfirmationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DeletionConfirmationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DeletionConfirmationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DeletionConfirmationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DeletionConfirmationDialog);
    } // setupUi

    void retranslateUi(QDialog *DeletionConfirmationDialog)
    {
        DeletionConfirmationDialog->setWindowTitle(QCoreApplication::translate("DeletionConfirmationDialog", "Deletion confirmation", nullptr));
        labelWarning->setText(QString());
#if QT_CONFIG(tooltip)
        rememberBtn->setToolTip(QCoreApplication::translate("DeletionConfirmationDialog", "Remember choice", nullptr));
#endif // QT_CONFIG(tooltip)
        checkPermDelete->setText(QCoreApplication::translate("DeletionConfirmationDialog", "Also delete the files on the hard disk", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeletionConfirmationDialog: public Ui_DeletionConfirmationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETIONCONFIRMATIONDIALOG_H
