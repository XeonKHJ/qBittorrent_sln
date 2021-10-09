/********************************************************************************
** Form generated from reading UI file 'trackerentriesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKERENTRIESDIALOG_H
#define UI_TRACKERENTRIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TrackerEntriesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TrackerEntriesDialog)
    {
        if (TrackerEntriesDialog->objectName().isEmpty())
            TrackerEntriesDialog->setObjectName(QString::fromUtf8("TrackerEntriesDialog"));
        TrackerEntriesDialog->resize(506, 500);
        verticalLayout = new QVBoxLayout(TrackerEntriesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TrackerEntriesDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        plainTextEdit = new QPlainTextEdit(TrackerEntriesDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setTabChangesFocus(true);

        verticalLayout->addWidget(plainTextEdit);

        buttonBox = new QDialogButtonBox(TrackerEntriesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TrackerEntriesDialog);

        QMetaObject::connectSlotsByName(TrackerEntriesDialog);
    } // setupUi

    void retranslateUi(QDialog *TrackerEntriesDialog)
    {
        TrackerEntriesDialog->setWindowTitle(QCoreApplication::translate("TrackerEntriesDialog", "Edit trackers", nullptr));
        label->setText(QCoreApplication::translate("TrackerEntriesDialog", "One tracker URL per line.\n"
"\n"
"- You can split the trackers into groups by inserting blank lines.\n"
"- All trackers within the same group will belong to the same tier.\n"
"- The group on top will be tier 0, the next group tier 1 and so on.\n"
"- Below will show the common subset of trackers of the selected torrents.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackerEntriesDialog: public Ui_TrackerEntriesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKERENTRIESDIALOG_H
