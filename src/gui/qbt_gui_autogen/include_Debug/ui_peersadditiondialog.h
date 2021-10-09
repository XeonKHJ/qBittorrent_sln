/********************************************************************************
** Form generated from reading UI file 'peersadditiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEERSADDITIONDIALOG_H
#define UI_PEERSADDITIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PeersAdditionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEditPeers;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PeersAdditionDialog)
    {
        if (PeersAdditionDialog->objectName().isEmpty())
            PeersAdditionDialog->setObjectName(QString::fromUtf8("PeersAdditionDialog"));
        PeersAdditionDialog->resize(367, 274);
        verticalLayout = new QVBoxLayout(PeersAdditionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(PeersAdditionDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        textEditPeers = new QTextEdit(PeersAdditionDialog);
        textEditPeers->setObjectName(QString::fromUtf8("textEditPeers"));
        textEditPeers->setLineWrapMode(QTextEdit::NoWrap);
        textEditPeers->setAcceptRichText(false);

        verticalLayout->addWidget(textEditPeers);

        buttonBox = new QDialogButtonBox(PeersAdditionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PeersAdditionDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), PeersAdditionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PeersAdditionDialog);
    } // setupUi

    void retranslateUi(QDialog *PeersAdditionDialog)
    {
        PeersAdditionDialog->setWindowTitle(QCoreApplication::translate("PeersAdditionDialog", "Add Peers", nullptr));
        label->setText(QCoreApplication::translate("PeersAdditionDialog", "List of peers to add (one IP per line):", nullptr));
        textEditPeers->setPlaceholderText(QCoreApplication::translate("PeersAdditionDialog", "Format: IPv4:port / [IPv6]:port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PeersAdditionDialog: public Ui_PeersAdditionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEERSADDITIONDIALOG_H
