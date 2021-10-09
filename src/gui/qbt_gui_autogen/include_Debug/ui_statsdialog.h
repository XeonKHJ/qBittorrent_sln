/********************************************************************************
** Form generated from reading UI file 'statsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATSDIALOG_H
#define UI_STATSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StatsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupUser;
    QGridLayout *gridLayout_2;
    QLabel *labelWaste;
    QLabel *labelPeersText;
    QLabel *labelGlobalRatioText;
    QLabel *labelPeers;
    QLabel *labelAlltimeDLText;
    QLabel *labelAlltimeDL;
    QLabel *labelGlobalRatio;
    QLabel *labelWasteText;
    QLabel *labelAlltimeULText;
    QLabel *labelAlltimeUL;
    QGroupBox *groupCache;
    QGridLayout *gridLayout;
    QLabel *labelCacheHitsText;
    QLabel *labelCacheHits;
    QLabel *labelTotalBuf;
    QLabel *labelTotalBufText;
    QGroupBox *groupPerf;
    QGridLayout *gridLayout_3;
    QLabel *labelJobsTime;
    QLabel *labelQueuedJobs;
    QLabel *labelWriteStarve;
    QLabel *labelReadStarve;
    QLabel *labelQueuedJobsText;
    QLabel *labelWriteStarveText;
    QLabel *labelJobsTimeText;
    QLabel *labelReadStarveText;
    QLabel *labelQueuedBytesText;
    QLabel *labelQueuedBytes;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StatsDialog)
    {
        if (StatsDialog->objectName().isEmpty())
            StatsDialog->setObjectName(QString::fromUtf8("StatsDialog"));
        StatsDialog->resize(286, 401);
        verticalLayout = new QVBoxLayout(StatsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupUser = new QGroupBox(StatsDialog);
        groupUser->setObjectName(QString::fromUtf8("groupUser"));
        gridLayout_2 = new QGridLayout(groupUser);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelWaste = new QLabel(groupUser);
        labelWaste->setObjectName(QString::fromUtf8("labelWaste"));
        labelWaste->setText(QString::fromUtf8("TextLabel"));

        gridLayout_2->addWidget(labelWaste, 3, 1, 1, 1, Qt::AlignRight);

        labelPeersText = new QLabel(groupUser);
        labelPeersText->setObjectName(QString::fromUtf8("labelPeersText"));

        gridLayout_2->addWidget(labelPeersText, 4, 0, 1, 1);

        labelGlobalRatioText = new QLabel(groupUser);
        labelGlobalRatioText->setObjectName(QString::fromUtf8("labelGlobalRatioText"));

        gridLayout_2->addWidget(labelGlobalRatioText, 2, 0, 1, 1);

        labelPeers = new QLabel(groupUser);
        labelPeers->setObjectName(QString::fromUtf8("labelPeers"));
        labelPeers->setText(QString::fromUtf8("TextLabel"));

        gridLayout_2->addWidget(labelPeers, 4, 1, 1, 1, Qt::AlignRight);

        labelAlltimeDLText = new QLabel(groupUser);
        labelAlltimeDLText->setObjectName(QString::fromUtf8("labelAlltimeDLText"));

        gridLayout_2->addWidget(labelAlltimeDLText, 1, 0, 1, 1);

        labelAlltimeDL = new QLabel(groupUser);
        labelAlltimeDL->setObjectName(QString::fromUtf8("labelAlltimeDL"));
        labelAlltimeDL->setText(QString::fromUtf8("TextLabel"));

        gridLayout_2->addWidget(labelAlltimeDL, 1, 1, 1, 1, Qt::AlignRight);

        labelGlobalRatio = new QLabel(groupUser);
        labelGlobalRatio->setObjectName(QString::fromUtf8("labelGlobalRatio"));
        labelGlobalRatio->setText(QString::fromUtf8("TextLabel"));

        gridLayout_2->addWidget(labelGlobalRatio, 2, 1, 1, 1, Qt::AlignRight);

        labelWasteText = new QLabel(groupUser);
        labelWasteText->setObjectName(QString::fromUtf8("labelWasteText"));

        gridLayout_2->addWidget(labelWasteText, 3, 0, 1, 1);

        labelAlltimeULText = new QLabel(groupUser);
        labelAlltimeULText->setObjectName(QString::fromUtf8("labelAlltimeULText"));

        gridLayout_2->addWidget(labelAlltimeULText, 0, 0, 1, 1);

        labelAlltimeUL = new QLabel(groupUser);
        labelAlltimeUL->setObjectName(QString::fromUtf8("labelAlltimeUL"));
        labelAlltimeUL->setText(QString::fromUtf8("TextLabel"));

        gridLayout_2->addWidget(labelAlltimeUL, 0, 1, 1, 1, Qt::AlignRight);


        verticalLayout->addWidget(groupUser);

        groupCache = new QGroupBox(StatsDialog);
        groupCache->setObjectName(QString::fromUtf8("groupCache"));
        gridLayout = new QGridLayout(groupCache);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelCacheHitsText = new QLabel(groupCache);
        labelCacheHitsText->setObjectName(QString::fromUtf8("labelCacheHitsText"));

        gridLayout->addWidget(labelCacheHitsText, 0, 0, 1, 1);

        labelCacheHits = new QLabel(groupCache);
        labelCacheHits->setObjectName(QString::fromUtf8("labelCacheHits"));
        labelCacheHits->setText(QString::fromUtf8("TextLabel"));

        gridLayout->addWidget(labelCacheHits, 0, 1, 1, 1, Qt::AlignRight);

        labelTotalBuf = new QLabel(groupCache);
        labelTotalBuf->setObjectName(QString::fromUtf8("labelTotalBuf"));
        labelTotalBuf->setText(QString::fromUtf8("TextLabel"));

        gridLayout->addWidget(labelTotalBuf, 1, 1, 1, 1, Qt::AlignRight);

        labelTotalBufText = new QLabel(groupCache);
        labelTotalBufText->setObjectName(QString::fromUtf8("labelTotalBufText"));

        gridLayout->addWidget(labelTotalBufText, 1, 0, 1, 1);


        verticalLayout->addWidget(groupCache);

        groupPerf = new QGroupBox(StatsDialog);
        groupPerf->setObjectName(QString::fromUtf8("groupPerf"));
        gridLayout_3 = new QGridLayout(groupPerf);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labelJobsTime = new QLabel(groupPerf);
        labelJobsTime->setObjectName(QString::fromUtf8("labelJobsTime"));
        labelJobsTime->setText(QString::fromUtf8("TextLabel"));

        gridLayout_3->addWidget(labelJobsTime, 3, 1, 1, 1, Qt::AlignRight);

        labelQueuedJobs = new QLabel(groupPerf);
        labelQueuedJobs->setObjectName(QString::fromUtf8("labelQueuedJobs"));
        labelQueuedJobs->setText(QString::fromUtf8("TextLabel"));

        gridLayout_3->addWidget(labelQueuedJobs, 2, 1, 1, 1, Qt::AlignRight);

        labelWriteStarve = new QLabel(groupPerf);
        labelWriteStarve->setObjectName(QString::fromUtf8("labelWriteStarve"));
        labelWriteStarve->setText(QString::fromUtf8("TextLabel"));

        gridLayout_3->addWidget(labelWriteStarve, 0, 1, 1, 1, Qt::AlignRight);

        labelReadStarve = new QLabel(groupPerf);
        labelReadStarve->setObjectName(QString::fromUtf8("labelReadStarve"));
        labelReadStarve->setText(QString::fromUtf8("TextLabel"));

        gridLayout_3->addWidget(labelReadStarve, 1, 1, 1, 1, Qt::AlignRight);

        labelQueuedJobsText = new QLabel(groupPerf);
        labelQueuedJobsText->setObjectName(QString::fromUtf8("labelQueuedJobsText"));

        gridLayout_3->addWidget(labelQueuedJobsText, 2, 0, 1, 1);

        labelWriteStarveText = new QLabel(groupPerf);
        labelWriteStarveText->setObjectName(QString::fromUtf8("labelWriteStarveText"));

        gridLayout_3->addWidget(labelWriteStarveText, 0, 0, 1, 1);

        labelJobsTimeText = new QLabel(groupPerf);
        labelJobsTimeText->setObjectName(QString::fromUtf8("labelJobsTimeText"));

        gridLayout_3->addWidget(labelJobsTimeText, 3, 0, 1, 1);

        labelReadStarveText = new QLabel(groupPerf);
        labelReadStarveText->setObjectName(QString::fromUtf8("labelReadStarveText"));

        gridLayout_3->addWidget(labelReadStarveText, 1, 0, 1, 1);

        labelQueuedBytesText = new QLabel(groupPerf);
        labelQueuedBytesText->setObjectName(QString::fromUtf8("labelQueuedBytesText"));

        gridLayout_3->addWidget(labelQueuedBytesText, 4, 0, 1, 1);

        labelQueuedBytes = new QLabel(groupPerf);
        labelQueuedBytes->setObjectName(QString::fromUtf8("labelQueuedBytes"));
        labelQueuedBytes->setText(QString::fromUtf8("TextLabel"));

        gridLayout_3->addWidget(labelQueuedBytes, 4, 1, 1, 1, Qt::AlignRight);


        verticalLayout->addWidget(groupPerf);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(StatsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(StatsDialog);

        QMetaObject::connectSlotsByName(StatsDialog);
    } // setupUi

    void retranslateUi(QDialog *StatsDialog)
    {
        StatsDialog->setWindowTitle(QCoreApplication::translate("StatsDialog", "Statistics", nullptr));
        groupUser->setTitle(QCoreApplication::translate("StatsDialog", "User statistics", nullptr));
        labelPeersText->setText(QCoreApplication::translate("StatsDialog", "Connected peers:", nullptr));
        labelGlobalRatioText->setText(QCoreApplication::translate("StatsDialog", "All-time share ratio:", nullptr));
        labelAlltimeDLText->setText(QCoreApplication::translate("StatsDialog", "All-time download:", nullptr));
        labelWasteText->setText(QCoreApplication::translate("StatsDialog", "Session waste:", nullptr));
        labelAlltimeULText->setText(QCoreApplication::translate("StatsDialog", "All-time upload:", nullptr));
        groupCache->setTitle(QCoreApplication::translate("StatsDialog", "Cache statistics", nullptr));
        labelCacheHitsText->setText(QCoreApplication::translate("StatsDialog", "Read cache hits:", nullptr));
        labelTotalBufText->setText(QCoreApplication::translate("StatsDialog", "Total buffer size:", nullptr));
        groupPerf->setTitle(QCoreApplication::translate("StatsDialog", "Performance statistics", nullptr));
        labelQueuedJobsText->setText(QCoreApplication::translate("StatsDialog", "Queued I/O jobs:", nullptr));
        labelWriteStarveText->setText(QCoreApplication::translate("StatsDialog", "Write cache overload:", nullptr));
        labelJobsTimeText->setText(QCoreApplication::translate("StatsDialog", "Average time in queue:", nullptr));
        labelReadStarveText->setText(QCoreApplication::translate("StatsDialog", "Read cache overload:", nullptr));
        labelQueuedBytesText->setText(QCoreApplication::translate("StatsDialog", "Total queued size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatsDialog: public Ui_StatsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATSDIALOG_H
