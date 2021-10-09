/********************************************************************************
** Form generated from reading UI file 'searchjobwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHJOBWIDGET_H
#define UI_SEARCHJOBWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchJobWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *resultsLbl;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QComboBox *filterMode;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpinBox *minSeeds;
    QLabel *label_4;
    QSpinBox *maxSeeds;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *minSize;
    QComboBox *minSizeUnit;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *maxSize;
    QComboBox *maxSizeUnit;
    QTreeView *resultsBrowser;

    void setupUi(QWidget *SearchJobWidget)
    {
        if (SearchJobWidget->objectName().isEmpty())
            SearchJobWidget->setObjectName(QString::fromUtf8("SearchJobWidget"));
        SearchJobWidget->resize(1216, 364);
        verticalLayout = new QVBoxLayout(SearchJobWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        resultsLbl = new QLabel(SearchJobWidget);
        resultsLbl->setObjectName(QString::fromUtf8("resultsLbl"));

        horizontalLayout->addWidget(resultsLbl);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_5 = new QLabel(SearchJobWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(label_5);

        filterMode = new QComboBox(SearchJobWidget);
        filterMode->setObjectName(QString::fromUtf8("filterMode"));

        horizontalLayout->addWidget(filterMode);

        horizontalSpacer_2 = new QSpacerItem(12, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(SearchJobWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        minSeeds = new QSpinBox(SearchJobWidget);
        minSeeds->setObjectName(QString::fromUtf8("minSeeds"));
        minSeeds->setMinimum(0);
        minSeeds->setMaximum(1000);
        minSeeds->setValue(0);

        horizontalLayout->addWidget(minSeeds);

        label_4 = new QLabel(SearchJobWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_4);

        maxSeeds = new QSpinBox(SearchJobWidget);
        maxSeeds->setObjectName(QString::fromUtf8("maxSeeds"));
        maxSeeds->setMinimum(-1);
        maxSeeds->setMaximum(1000);
        maxSeeds->setValue(-1);

        horizontalLayout->addWidget(maxSeeds);

        horizontalSpacer_3 = new QSpacerItem(12, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_3 = new QLabel(SearchJobWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        minSize = new QDoubleSpinBox(SearchJobWidget);
        minSize->setObjectName(QString::fromUtf8("minSize"));
        minSize->setMinimum(0.000000000000000);
        minSize->setMaximum(1000.000000000000000);
        minSize->setValue(0.000000000000000);

        horizontalLayout_3->addWidget(minSize);

        minSizeUnit = new QComboBox(SearchJobWidget);
        minSizeUnit->setObjectName(QString::fromUtf8("minSizeUnit"));
        minSizeUnit->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_3->addWidget(minSizeUnit);


        horizontalLayout->addLayout(horizontalLayout_3);

        label_2 = new QLabel(SearchJobWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        maxSize = new QDoubleSpinBox(SearchJobWidget);
        maxSize->setObjectName(QString::fromUtf8("maxSize"));
        maxSize->setMinimum(-1.000000000000000);
        maxSize->setMaximum(1000.000000000000000);
        maxSize->setValue(1000.000000000000000);

        horizontalLayout_4->addWidget(maxSize);

        maxSizeUnit = new QComboBox(SearchJobWidget);
        maxSizeUnit->setObjectName(QString::fromUtf8("maxSizeUnit"));
        maxSizeUnit->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_4->addWidget(maxSizeUnit);


        horizontalLayout->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        resultsBrowser = new QTreeView(SearchJobWidget);
        resultsBrowser->setObjectName(QString::fromUtf8("resultsBrowser"));

        verticalLayout->addWidget(resultsBrowser);

#if QT_CONFIG(shortcut)
        label_5->setBuddy(filterMode);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SearchJobWidget);

        maxSizeUnit->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SearchJobWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchJobWidget)
    {
        SearchJobWidget->setWindowTitle(QCoreApplication::translate("SearchJobWidget", "Form", nullptr));
        resultsLbl->setText(QCoreApplication::translate("SearchJobWidget", "Results(xxx)", nullptr));
        label_5->setText(QCoreApplication::translate("SearchJobWidget", "Search in:", nullptr));
#if QT_CONFIG(tooltip)
        filterMode->setToolTip(QCoreApplication::translate("SearchJobWidget", "<html><head/><body><p>Some search engines search in torrent description and in torrent file names too. Whether such results will be shown in the list below is controlled by this mode.</p><p><span style=\" font-weight:600;\">Everywhere </span>disables filtering and shows everything returned by the search engines.</p><p><span style=\" font-weight:600;\">Torrent names only</span> shows only torrents whose names match the search query.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("SearchJobWidget", "<html><head/><body><p>Set minimal and maximal allowed number of seeders</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("SearchJobWidget", "Seeds:", nullptr));
#if QT_CONFIG(tooltip)
        minSeeds->setToolTip(QCoreApplication::translate("SearchJobWidget", "<html><head/><body><p>Minimal number of seeds</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("SearchJobWidget", "to", nullptr));
#if QT_CONFIG(tooltip)
        maxSeeds->setToolTip(QCoreApplication::translate("SearchJobWidget", "<html><head/><body><p>Maximal number of seeds</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        maxSeeds->setSpecialValueText(QCoreApplication::translate("SearchJobWidget", "\342\210\236", nullptr));
        maxSeeds->setPrefix(QString());
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("SearchJobWidget", "<html><head/><body><p>Set minimal and maximal allowed size of a torrent</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("SearchJobWidget", "Size:", nullptr));
#if QT_CONFIG(tooltip)
        minSize->setToolTip(QCoreApplication::translate("SearchJobWidget", "<html><head/><body><p>Minimal torrent size</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("SearchJobWidget", "to", nullptr));
#if QT_CONFIG(tooltip)
        maxSize->setToolTip(QCoreApplication::translate("SearchJobWidget", "<html><head/><body><p>Maximal torrent size</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        maxSize->setSpecialValueText(QCoreApplication::translate("SearchJobWidget", "\342\210\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchJobWidget: public Ui_SearchJobWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHJOBWIDGET_H
