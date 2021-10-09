/********************************************************************************
** Form generated from reading UI file 'ipsubnetwhitelistoptionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IPSUBNETWHITELISTOPTIONSDIALOG_H
#define UI_IPSUBNETWHITELISTOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IPSubnetWhitelistOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *whitelistedIPSubnetBox;
    QVBoxLayout *verticalLayout_31;
    QTreeView *whitelistedIPSubnetList;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtIPSubnet;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *buttonWhitelistIPSubnet;
    QPushButton *buttonDeleteIPSubnet;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *IPSubnetWhitelistOptionsDialog)
    {
        if (IPSubnetWhitelistOptionsDialog->objectName().isEmpty())
            IPSubnetWhitelistOptionsDialog->setObjectName(QString::fromUtf8("IPSubnetWhitelistOptionsDialog"));
        IPSubnetWhitelistOptionsDialog->resize(360, 450);
        verticalLayout = new QVBoxLayout(IPSubnetWhitelistOptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        whitelistedIPSubnetBox = new QFrame(IPSubnetWhitelistOptionsDialog);
        whitelistedIPSubnetBox->setObjectName(QString::fromUtf8("whitelistedIPSubnetBox"));
        whitelistedIPSubnetBox->setAutoFillBackground(true);
        whitelistedIPSubnetBox->setFrameShape(QFrame::Panel);
        whitelistedIPSubnetBox->setFrameShadow(QFrame::Raised);
        verticalLayout_31 = new QVBoxLayout(whitelistedIPSubnetBox);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        whitelistedIPSubnetList = new QTreeView(whitelistedIPSubnetBox);
        whitelistedIPSubnetList->setObjectName(QString::fromUtf8("whitelistedIPSubnetList"));
        whitelistedIPSubnetList->setRootIsDecorated(false);
        whitelistedIPSubnetList->setUniformRowHeights(true);
        whitelistedIPSubnetList->setItemsExpandable(false);
        whitelistedIPSubnetList->setSortingEnabled(true);
        whitelistedIPSubnetList->header()->setVisible(false);

        verticalLayout_31->addWidget(whitelistedIPSubnetList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txtIPSubnet = new QLineEdit(whitelistedIPSubnetBox);
        txtIPSubnet->setObjectName(QString::fromUtf8("txtIPSubnet"));

        horizontalLayout->addWidget(txtIPSubnet);


        verticalLayout_31->addLayout(horizontalLayout);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        buttonWhitelistIPSubnet = new QPushButton(whitelistedIPSubnetBox);
        buttonWhitelistIPSubnet->setObjectName(QString::fromUtf8("buttonWhitelistIPSubnet"));

        horizontalLayout_12->addWidget(buttonWhitelistIPSubnet);

        buttonDeleteIPSubnet = new QPushButton(whitelistedIPSubnetBox);
        buttonDeleteIPSubnet->setObjectName(QString::fromUtf8("buttonDeleteIPSubnet"));

        horizontalLayout_12->addWidget(buttonDeleteIPSubnet);


        verticalLayout_31->addLayout(horizontalLayout_12);


        verticalLayout->addWidget(whitelistedIPSubnetBox);

        buttonBox = new QDialogButtonBox(IPSubnetWhitelistOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(whitelistedIPSubnetList, txtIPSubnet);
        QWidget::setTabOrder(txtIPSubnet, buttonWhitelistIPSubnet);
        QWidget::setTabOrder(buttonWhitelistIPSubnet, buttonDeleteIPSubnet);

        retranslateUi(IPSubnetWhitelistOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), IPSubnetWhitelistOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(IPSubnetWhitelistOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *IPSubnetWhitelistOptionsDialog)
    {
        IPSubnetWhitelistOptionsDialog->setWindowTitle(QCoreApplication::translate("IPSubnetWhitelistOptionsDialog", "List of whitelisted IP subnets", nullptr));
        txtIPSubnet->setPlaceholderText(QCoreApplication::translate("IPSubnetWhitelistOptionsDialog", "Example: 172.17.32.0/24, fdff:ffff:c8::/40", nullptr));
        buttonWhitelistIPSubnet->setText(QCoreApplication::translate("IPSubnetWhitelistOptionsDialog", "Add subnet", nullptr));
        buttonDeleteIPSubnet->setText(QCoreApplication::translate("IPSubnetWhitelistOptionsDialog", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IPSubnetWhitelistOptionsDialog: public Ui_IPSubnetWhitelistOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPSUBNETWHITELISTOPTIONSDIALOG_H
