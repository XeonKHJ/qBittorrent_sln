/********************************************************************************
** Form generated from reading UI file 'searchwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWIDGET_H
#define UI_SEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/lineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SearchWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *searchBarLayout;
    LineEdit *lineEditSearchPattern;
    QComboBox *comboCategory;
    QComboBox *selectPlugin;
    QPushButton *searchButton;
    QStackedWidget *stackedPages;
    QWidget *emptyPage;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *searchPage;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QHBoxLayout *layout2;
    QSpacerItem *spacer2;
    QPushButton *pluginsButton;

    void setupUi(QWidget *SearchWidget)
    {
        if (SearchWidget->objectName().isEmpty())
            SearchWidget->setObjectName(QString::fromUtf8("SearchWidget"));
        SearchWidget->resize(843, 669);
        verticalLayout_3 = new QVBoxLayout(SearchWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        searchBarLayout = new QHBoxLayout();
        searchBarLayout->setObjectName(QString::fromUtf8("searchBarLayout"));
        lineEditSearchPattern = new LineEdit(SearchWidget);
        lineEditSearchPattern->setObjectName(QString::fromUtf8("lineEditSearchPattern"));

        searchBarLayout->addWidget(lineEditSearchPattern);

        comboCategory = new QComboBox(SearchWidget);
        comboCategory->setObjectName(QString::fromUtf8("comboCategory"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboCategory->sizePolicy().hasHeightForWidth());
        comboCategory->setSizePolicy(sizePolicy);

        searchBarLayout->addWidget(comboCategory);

        selectPlugin = new QComboBox(SearchWidget);
        selectPlugin->setObjectName(QString::fromUtf8("selectPlugin"));
        sizePolicy.setHeightForWidth(selectPlugin->sizePolicy().hasHeightForWidth());
        selectPlugin->setSizePolicy(sizePolicy);

        searchBarLayout->addWidget(selectPlugin);

        searchButton = new QPushButton(SearchWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchButton->sizePolicy().hasHeightForWidth());
        searchButton->setSizePolicy(sizePolicy1);

        searchBarLayout->addWidget(searchButton);


        verticalLayout_3->addLayout(searchBarLayout);

        stackedPages = new QStackedWidget(SearchWidget);
        stackedPages->setObjectName(QString::fromUtf8("stackedPages"));
        emptyPage = new QWidget();
        emptyPage->setObjectName(QString::fromUtf8("emptyPage"));
        verticalLayout = new QVBoxLayout(emptyPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(emptyPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        stackedPages->addWidget(emptyPage);
        searchPage = new QWidget();
        searchPage->setObjectName(QString::fromUtf8("searchPage"));
        verticalLayout_2 = new QVBoxLayout(searchPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(searchPage);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabsClosable(true);

        verticalLayout_2->addWidget(tabWidget);

        stackedPages->addWidget(searchPage);

        verticalLayout_3->addWidget(stackedPages);

        layout2 = new QHBoxLayout();
        layout2->setObjectName(QString::fromUtf8("layout2"));
        spacer2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout2->addItem(spacer2);

        pluginsButton = new QPushButton(SearchWidget);
        pluginsButton->setObjectName(QString::fromUtf8("pluginsButton"));

        layout2->addWidget(pluginsButton);


        verticalLayout_3->addLayout(layout2);


        retranslateUi(SearchWidget);

        stackedPages->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SearchWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchWidget)
    {
        SearchWidget->setWindowTitle(QCoreApplication::translate("SearchWidget", "Search", nullptr));
        searchButton->setText(QCoreApplication::translate("SearchWidget", "Search", nullptr));
        label->setText(QCoreApplication::translate("SearchWidget", "There aren't any search plugins installed.\n"
"Click the \"Search plugins...\" button at the bottom right of the window to install some.", nullptr));
        pluginsButton->setText(QCoreApplication::translate("SearchWidget", "Search plugins...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchWidget: public Ui_SearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWIDGET_H
