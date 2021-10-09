/********************************************************************************
** Form generated from reading UI file 'stacktracedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACKTRACEDIALOG_H
#define UI_STACKTRACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StacktraceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *errorText;

    void setupUi(QDialog *StacktraceDialog)
    {
        if (StacktraceDialog->objectName().isEmpty())
            StacktraceDialog->setObjectName(QString::fromUtf8("StacktraceDialog"));
        StacktraceDialog->resize(640, 480);
        verticalLayout = new QVBoxLayout(StacktraceDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        errorText = new QTextBrowser(StacktraceDialog);
        errorText->setObjectName(QString::fromUtf8("errorText"));
        errorText->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>"));
        errorText->setOpenExternalLinks(true);

        verticalLayout->addWidget(errorText);


        retranslateUi(StacktraceDialog);

        QMetaObject::connectSlotsByName(StacktraceDialog);
    } // setupUi

    void retranslateUi(QDialog *StacktraceDialog)
    {
        StacktraceDialog->setWindowTitle(QCoreApplication::translate("StacktraceDialog", "Crash info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StacktraceDialog: public Ui_StacktraceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKTRACEDIALOG_H
