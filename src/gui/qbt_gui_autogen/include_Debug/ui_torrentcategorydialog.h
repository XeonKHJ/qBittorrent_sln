/********************************************************************************
** Form generated from reading UI file 'torrentcategorydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TORRENTCATEGORYDIALOG_H
#define UI_TORRENTCATEGORYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "gui/fspathedit.h"

QT_BEGIN_NAMESPACE

class Ui_TorrentCategoryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *labelCategoryName;
    QLineEdit *textCategoryName;
    QLabel *labelSavePath;
    FileSystemPathComboEdit *comboSavePath;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TorrentCategoryDialog)
    {
        if (TorrentCategoryDialog->objectName().isEmpty())
            TorrentCategoryDialog->setObjectName(QString::fromUtf8("TorrentCategoryDialog"));
        TorrentCategoryDialog->resize(400, 100);
        verticalLayout = new QVBoxLayout(TorrentCategoryDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelCategoryName = new QLabel(TorrentCategoryDialog);
        labelCategoryName->setObjectName(QString::fromUtf8("labelCategoryName"));

        gridLayout->addWidget(labelCategoryName, 0, 0, 1, 1);

        textCategoryName = new QLineEdit(TorrentCategoryDialog);
        textCategoryName->setObjectName(QString::fromUtf8("textCategoryName"));

        gridLayout->addWidget(textCategoryName, 0, 1, 1, 1);

        labelSavePath = new QLabel(TorrentCategoryDialog);
        labelSavePath->setObjectName(QString::fromUtf8("labelSavePath"));

        gridLayout->addWidget(labelSavePath, 1, 0, 1, 1);

        comboSavePath = new FileSystemPathComboEdit(TorrentCategoryDialog);
        comboSavePath->setObjectName(QString::fromUtf8("comboSavePath"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboSavePath->sizePolicy().hasHeightForWidth());
        comboSavePath->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboSavePath, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(TorrentCategoryDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TorrentCategoryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TorrentCategoryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TorrentCategoryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TorrentCategoryDialog);
    } // setupUi

    void retranslateUi(QDialog *TorrentCategoryDialog)
    {
        TorrentCategoryDialog->setWindowTitle(QCoreApplication::translate("TorrentCategoryDialog", "Torrent Category Properties", nullptr));
        labelCategoryName->setText(QCoreApplication::translate("TorrentCategoryDialog", "Name:", nullptr));
        labelSavePath->setText(QCoreApplication::translate("TorrentCategoryDialog", "Save path:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TorrentCategoryDialog: public Ui_TorrentCategoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TORRENTCATEGORYDIALOG_H
