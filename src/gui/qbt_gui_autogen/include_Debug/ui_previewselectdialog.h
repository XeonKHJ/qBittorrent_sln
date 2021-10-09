/********************************************************************************
** Form generated from reading UI file 'previewselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREVIEWSELECTDIALOG_H
#define UI_PREVIEWSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PreviewSelectDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QTreeView *previewList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreviewSelectDialog)
    {
        if (PreviewSelectDialog->objectName().isEmpty())
            PreviewSelectDialog->setObjectName(QString::fromUtf8("PreviewSelectDialog"));
        PreviewSelectDialog->resize(462, 256);
        vboxLayout = new QVBoxLayout(PreviewSelectDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(PreviewSelectDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        vboxLayout->addWidget(label);

        previewList = new QTreeView(PreviewSelectDialog);
        previewList->setObjectName(QString::fromUtf8("previewList"));
        previewList->setSortingEnabled(true);

        vboxLayout->addWidget(previewList);

        buttonBox = new QDialogButtonBox(PreviewSelectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(PreviewSelectDialog);

        QMetaObject::connectSlotsByName(PreviewSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *PreviewSelectDialog)
    {
        PreviewSelectDialog->setWindowTitle(QCoreApplication::translate("PreviewSelectDialog", "Preview selection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreviewSelectDialog: public Ui_PreviewSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREVIEWSELECTDIALOG_H
