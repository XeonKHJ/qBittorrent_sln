/********************************************************************************
** Form generated from reading UI file 'automatedrssdownloader.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOMATEDRSSDOWNLOADER_H
#define UI_AUTOMATEDRSSDOWNLOADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/fspathedit.h"

QT_BEGIN_NAMESPACE

class Ui_AutomatedRssDownloader
{
public:
    QVBoxLayout *verticalLayout_5;
    QLabel *labelWarn;
    QSplitter *hsplitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QToolButton *removeRuleBtn;
    QToolButton *addRuleBtn;
    QListWidget *listRules;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *ruleDefBox;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *checkRegex;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *lblEFilter;
    QLabel *lblEFilterStat;
    QLabel *labelMustNotStat;
    QLineEdit *lineContains;
    QLabel *labelMustStat;
    QLabel *labelEpFilterStat;
    QLineEdit *lineNotContains;
    QLineEdit *lineEFilter;
    QCheckBox *checkSmart;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QComboBox *comboCategory;
    QToolButton *addCategoryBtn;
    QCheckBox *checkBoxSaveDiffDir;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    FileSystemPathLineEdit *lineSavePath;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lblIgnoreDays;
    QSpinBox *spinIgnorePeriod;
    QLabel *lblLastMatch;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lblAddPaused;
    QComboBox *comboAddPaused;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lblContentLayout;
    QComboBox *comboContentLayout;
    QVBoxLayout *verticalLayout;
    QLabel *lblListFeeds;
    QListWidget *listFeeds;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTreeWidget *treeMatchingArticles;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *importBtn;
    QPushButton *exportBtn;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AutomatedRssDownloader)
    {
        if (AutomatedRssDownloader->objectName().isEmpty())
            AutomatedRssDownloader->setObjectName(QString::fromUtf8("AutomatedRssDownloader"));
        AutomatedRssDownloader->resize(818, 571);
        verticalLayout_5 = new QVBoxLayout(AutomatedRssDownloader);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        labelWarn = new QLabel(AutomatedRssDownloader);
        labelWarn->setObjectName(QString::fromUtf8("labelWarn"));
        QFont font;
        font.setItalic(true);
        labelWarn->setFont(font);
        labelWarn->setStyleSheet(QString::fromUtf8("color: red;"));
        labelWarn->setWordWrap(true);

        verticalLayout_5->addWidget(labelWarn);

        hsplitter = new QSplitter(AutomatedRssDownloader);
        hsplitter->setObjectName(QString::fromUtf8("hsplitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hsplitter->sizePolicy().hasHeightForWidth());
        hsplitter->setSizePolicy(sizePolicy);
        hsplitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(hsplitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        removeRuleBtn = new QToolButton(layoutWidget);
        removeRuleBtn->setObjectName(QString::fromUtf8("removeRuleBtn"));
        removeRuleBtn->setIconSize(QSize(24, 20));

        horizontalLayout_2->addWidget(removeRuleBtn);

        addRuleBtn = new QToolButton(layoutWidget);
        addRuleBtn->setObjectName(QString::fromUtf8("addRuleBtn"));
        addRuleBtn->setIconSize(QSize(24, 20));

        horizontalLayout_2->addWidget(addRuleBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);

        listRules = new QListWidget(layoutWidget);
        listRules->setObjectName(QString::fromUtf8("listRules"));
        listRules->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_3->addWidget(listRules);

        hsplitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(hsplitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        ruleDefBox = new QGroupBox(layoutWidget1);
        ruleDefBox->setObjectName(QString::fromUtf8("ruleDefBox"));
        verticalLayout_6 = new QVBoxLayout(ruleDefBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        checkRegex = new QCheckBox(ruleDefBox);
        checkRegex->setObjectName(QString::fromUtf8("checkRegex"));

        verticalLayout_6->addWidget(checkRegex);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(ruleDefBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(ruleDefBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        lblEFilter = new QLabel(ruleDefBox);
        lblEFilter->setObjectName(QString::fromUtf8("lblEFilter"));

        gridLayout->addWidget(lblEFilter, 2, 0, 1, 1);

        lblEFilterStat = new QLabel(ruleDefBox);
        lblEFilterStat->setObjectName(QString::fromUtf8("lblEFilterStat"));
        lblEFilterStat->setMaximumSize(QSize(18, 18));

        gridLayout->addWidget(lblEFilterStat, 2, 2, 1, 1);

        labelMustNotStat = new QLabel(ruleDefBox);
        labelMustNotStat->setObjectName(QString::fromUtf8("labelMustNotStat"));
        labelMustNotStat->setMaximumSize(QSize(18, 18));

        gridLayout->addWidget(labelMustNotStat, 1, 2, 1, 1);

        lineContains = new QLineEdit(ruleDefBox);
        lineContains->setObjectName(QString::fromUtf8("lineContains"));

        gridLayout->addWidget(lineContains, 0, 1, 1, 1);

        labelMustStat = new QLabel(ruleDefBox);
        labelMustStat->setObjectName(QString::fromUtf8("labelMustStat"));
        labelMustStat->setMaximumSize(QSize(18, 18));

        gridLayout->addWidget(labelMustStat, 0, 2, 1, 1);

        labelEpFilterStat = new QLabel(ruleDefBox);
        labelEpFilterStat->setObjectName(QString::fromUtf8("labelEpFilterStat"));
        labelEpFilterStat->setMaximumSize(QSize(18, 18));

        gridLayout->addWidget(labelEpFilterStat, 2, 2, 1, 1);

        lineNotContains = new QLineEdit(ruleDefBox);
        lineNotContains->setObjectName(QString::fromUtf8("lineNotContains"));

        gridLayout->addWidget(lineNotContains, 1, 1, 1, 1);

        lineEFilter = new QLineEdit(ruleDefBox);
        lineEFilter->setObjectName(QString::fromUtf8("lineEFilter"));

        gridLayout->addWidget(lineEFilter, 2, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        checkSmart = new QCheckBox(ruleDefBox);
        checkSmart->setObjectName(QString::fromUtf8("checkSmart"));

        verticalLayout_6->addWidget(checkSmart);

        line = new QFrame(ruleDefBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(ruleDefBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_7);

        comboCategory = new QComboBox(ruleDefBox);
        comboCategory->setObjectName(QString::fromUtf8("comboCategory"));
        comboCategory->setEditable(false);

        horizontalLayout_3->addWidget(comboCategory);

        addCategoryBtn = new QToolButton(ruleDefBox);
        addCategoryBtn->setObjectName(QString::fromUtf8("addCategoryBtn"));

        horizontalLayout_3->addWidget(addCategoryBtn);


        verticalLayout_6->addLayout(horizontalLayout_3);

        checkBoxSaveDiffDir = new QCheckBox(ruleDefBox);
        checkBoxSaveDiffDir->setObjectName(QString::fromUtf8("checkBoxSaveDiffDir"));

        verticalLayout_6->addWidget(checkBoxSaveDiffDir);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(ruleDefBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(false);

        horizontalLayout_5->addWidget(label_6);

        lineSavePath = new FileSystemPathLineEdit(ruleDefBox);
        lineSavePath->setObjectName(QString::fromUtf8("lineSavePath"));

        horizontalLayout_5->addWidget(lineSavePath);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lblIgnoreDays = new QLabel(ruleDefBox);
        lblIgnoreDays->setObjectName(QString::fromUtf8("lblIgnoreDays"));

        horizontalLayout_8->addWidget(lblIgnoreDays);

        spinIgnorePeriod = new QSpinBox(ruleDefBox);
        spinIgnorePeriod->setObjectName(QString::fromUtf8("spinIgnorePeriod"));
        spinIgnorePeriod->setEnabled(true);
        spinIgnorePeriod->setMinimum(0);
        spinIgnorePeriod->setMaximum(365);

        horizontalLayout_8->addWidget(spinIgnorePeriod);


        verticalLayout_6->addLayout(horizontalLayout_8);

        lblLastMatch = new QLabel(ruleDefBox);
        lblLastMatch->setObjectName(QString::fromUtf8("lblLastMatch"));
        lblLastMatch->setEnabled(true);
        lblLastMatch->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(lblLastMatch);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        lblAddPaused = new QLabel(ruleDefBox);
        lblAddPaused->setObjectName(QString::fromUtf8("lblAddPaused"));
        sizePolicy1.setHeightForWidth(lblAddPaused->sizePolicy().hasHeightForWidth());
        lblAddPaused->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(lblAddPaused);

        comboAddPaused = new QComboBox(ruleDefBox);
        comboAddPaused->addItem(QString());
        comboAddPaused->addItem(QString());
        comboAddPaused->addItem(QString());
        comboAddPaused->setObjectName(QString::fromUtf8("comboAddPaused"));

        horizontalLayout_9->addWidget(comboAddPaused);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        lblContentLayout = new QLabel(ruleDefBox);
        lblContentLayout->setObjectName(QString::fromUtf8("lblContentLayout"));
        sizePolicy1.setHeightForWidth(lblContentLayout->sizePolicy().hasHeightForWidth());
        lblContentLayout->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(lblContentLayout);

        comboContentLayout = new QComboBox(ruleDefBox);
        comboContentLayout->addItem(QString());
        comboContentLayout->addItem(QString());
        comboContentLayout->addItem(QString());
        comboContentLayout->addItem(QString());
        comboContentLayout->setObjectName(QString::fromUtf8("comboContentLayout"));

        horizontalLayout_10->addWidget(comboContentLayout);


        verticalLayout_6->addLayout(horizontalLayout_10);


        verticalLayout_4->addWidget(ruleDefBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblListFeeds = new QLabel(layoutWidget1);
        lblListFeeds->setObjectName(QString::fromUtf8("lblListFeeds"));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        lblListFeeds->setFont(font2);

        verticalLayout->addWidget(lblListFeeds);

        listFeeds = new QListWidget(layoutWidget1);
        listFeeds->setObjectName(QString::fromUtf8("listFeeds"));

        verticalLayout->addWidget(listFeeds);


        verticalLayout_4->addLayout(verticalLayout);

        hsplitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(hsplitter);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        treeMatchingArticles = new QTreeWidget(layoutWidget2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeMatchingArticles->setHeaderItem(__qtreewidgetitem);
        treeMatchingArticles->setObjectName(QString::fromUtf8("treeMatchingArticles"));
        treeMatchingArticles->header()->setVisible(false);

        verticalLayout_2->addWidget(treeMatchingArticles);

        hsplitter->addWidget(layoutWidget2);

        verticalLayout_5->addWidget(hsplitter);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        importBtn = new QPushButton(AutomatedRssDownloader);
        importBtn->setObjectName(QString::fromUtf8("importBtn"));
        importBtn->setEnabled(true);

        horizontalLayout_4->addWidget(importBtn);

        exportBtn = new QPushButton(AutomatedRssDownloader);
        exportBtn->setObjectName(QString::fromUtf8("exportBtn"));
        exportBtn->setEnabled(true);

        horizontalLayout_4->addWidget(exportBtn);

        buttonBox = new QDialogButtonBox(AutomatedRssDownloader);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setFocusPolicy(Qt::StrongFocus);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_4->addWidget(buttonBox);


        verticalLayout_5->addLayout(horizontalLayout_4);

        QWidget::setTabOrder(removeRuleBtn, addRuleBtn);
        QWidget::setTabOrder(addRuleBtn, listRules);
        QWidget::setTabOrder(listRules, checkRegex);
        QWidget::setTabOrder(checkRegex, checkSmart);
        QWidget::setTabOrder(checkSmart, lineContains);
        QWidget::setTabOrder(lineContains, lineNotContains);
        QWidget::setTabOrder(lineNotContains, lineEFilter);
        QWidget::setTabOrder(lineEFilter, comboCategory);
        QWidget::setTabOrder(comboCategory, checkBoxSaveDiffDir);
        QWidget::setTabOrder(checkBoxSaveDiffDir, lineSavePath);
        QWidget::setTabOrder(lineSavePath, spinIgnorePeriod);
        QWidget::setTabOrder(spinIgnorePeriod, comboAddPaused);
        QWidget::setTabOrder(comboAddPaused, comboContentLayout);
        QWidget::setTabOrder(comboContentLayout, listFeeds);
        QWidget::setTabOrder(listFeeds, treeMatchingArticles);
        QWidget::setTabOrder(treeMatchingArticles, importBtn);
        QWidget::setTabOrder(importBtn, exportBtn);

        retranslateUi(AutomatedRssDownloader);
        QObject::connect(buttonBox, SIGNAL(accepted()), AutomatedRssDownloader, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AutomatedRssDownloader, SLOT(reject()));
        QObject::connect(checkBoxSaveDiffDir, SIGNAL(toggled(bool)), label_6, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxSaveDiffDir, SIGNAL(toggled(bool)), lineSavePath, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AutomatedRssDownloader);
    } // setupUi

    void retranslateUi(QDialog *AutomatedRssDownloader)
    {
        AutomatedRssDownloader->setWindowTitle(QCoreApplication::translate("AutomatedRssDownloader", "RSS Downloader", nullptr));
        labelWarn->setText(QCoreApplication::translate("AutomatedRssDownloader", "Auto downloading of RSS torrents is currently disabled. You can enable it in application settings.", nullptr));
        label->setText(QCoreApplication::translate("AutomatedRssDownloader", "Download Rules", nullptr));
        ruleDefBox->setTitle(QCoreApplication::translate("AutomatedRssDownloader", "Rule Definition", nullptr));
        checkRegex->setText(QCoreApplication::translate("AutomatedRssDownloader", "Use Regular Expressions", nullptr));
        label_4->setText(QCoreApplication::translate("AutomatedRssDownloader", "Must Contain:", nullptr));
        label_5->setText(QCoreApplication::translate("AutomatedRssDownloader", "Must Not Contain:", nullptr));
        lblEFilter->setText(QCoreApplication::translate("AutomatedRssDownloader", "Episode Filter:", nullptr));
#if QT_CONFIG(tooltip)
        checkSmart->setToolTip(QCoreApplication::translate("AutomatedRssDownloader", "Smart Episode Filter will check the episode number to prevent downloading of duplicates.\n"
"Supports the formats: S01E01, 1x1, 2017.12.31 and 31.12.2017 (Date formats also support - as a separator)", nullptr));
#endif // QT_CONFIG(tooltip)
        checkSmart->setText(QCoreApplication::translate("AutomatedRssDownloader", "Use Smart Episode Filter", nullptr));
        label_7->setText(QCoreApplication::translate("AutomatedRssDownloader", "Category:", nullptr));
        checkBoxSaveDiffDir->setText(QCoreApplication::translate("AutomatedRssDownloader", "Save to a Different Directory", nullptr));
        label_6->setText(QCoreApplication::translate("AutomatedRssDownloader", "Save to:", nullptr));
        lblIgnoreDays->setText(QCoreApplication::translate("AutomatedRssDownloader", "Ignore Subsequent Matches for (0 to Disable)", nullptr));
        spinIgnorePeriod->setSpecialValueText(QCoreApplication::translate("AutomatedRssDownloader", "Disabled", nullptr));
        spinIgnorePeriod->setSuffix(QCoreApplication::translate("AutomatedRssDownloader", " days", nullptr));
        lblAddPaused->setText(QCoreApplication::translate("AutomatedRssDownloader", "Add Paused:", nullptr));
        comboAddPaused->setItemText(0, QCoreApplication::translate("AutomatedRssDownloader", "Use global settings", nullptr));
        comboAddPaused->setItemText(1, QCoreApplication::translate("AutomatedRssDownloader", "Always", nullptr));
        comboAddPaused->setItemText(2, QCoreApplication::translate("AutomatedRssDownloader", "Never", nullptr));

        lblContentLayout->setText(QCoreApplication::translate("AutomatedRssDownloader", "Torrent content layout:", nullptr));
        comboContentLayout->setItemText(0, QCoreApplication::translate("AutomatedRssDownloader", "Use global settings", nullptr));
        comboContentLayout->setItemText(1, QCoreApplication::translate("AutomatedRssDownloader", "Original", nullptr));
        comboContentLayout->setItemText(2, QCoreApplication::translate("AutomatedRssDownloader", "Create subfolder", nullptr));
        comboContentLayout->setItemText(3, QCoreApplication::translate("AutomatedRssDownloader", "Don't create subfolder", nullptr));

        lblListFeeds->setText(QCoreApplication::translate("AutomatedRssDownloader", "Apply Rule to Feeds:", nullptr));
        label_3->setText(QCoreApplication::translate("AutomatedRssDownloader", "Matching RSS Articles", nullptr));
        importBtn->setText(QCoreApplication::translate("AutomatedRssDownloader", "&Import...", nullptr));
        exportBtn->setText(QCoreApplication::translate("AutomatedRssDownloader", "&Export...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutomatedRssDownloader: public Ui_AutomatedRssDownloader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOMATEDRSSDOWNLOADER_H
