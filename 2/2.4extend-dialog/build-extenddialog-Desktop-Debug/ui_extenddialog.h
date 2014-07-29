/********************************************************************************
** Form generated from reading UI file 'extenddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTENDDIALOG_H
#define UI_EXTENDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SortDialog
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *primaryKeyGroupBox;
    QGridLayout *gridLayout;
    QLabel *columnLabel;
    QComboBox *firstColcombo;
    QSpacerItem *horizontalSpacer;
    QLabel *orderLabel;
    QComboBox *firstOrdercombo;
    QVBoxLayout *verticalLayout;
    QPushButton *okButto;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer;
    QPushButton *moreButton;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *SecondGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *columnLabel_2;
    QComboBox *secondColcombo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *orderLabel_2;
    QComboBox *secondOrdercombo;
    QGroupBox *ThirdGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *columnLabel_3;
    QComboBox *thirdColcombo;
    QSpacerItem *horizontalSpacer_3;
    QLabel *orderLabel_3;
    QComboBox *thirdOrdercombo;

    void setupUi(QDialog *SortDialog)
    {
        if (SortDialog->objectName().isEmpty())
            SortDialog->setObjectName(QStringLiteral("SortDialog"));
        SortDialog->resize(417, 383);
        gridLayout_4 = new QGridLayout(SortDialog);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        primaryKeyGroupBox = new QGroupBox(SortDialog);
        primaryKeyGroupBox->setObjectName(QStringLiteral("primaryKeyGroupBox"));
        gridLayout = new QGridLayout(primaryKeyGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        columnLabel = new QLabel(primaryKeyGroupBox);
        columnLabel->setObjectName(QStringLiteral("columnLabel"));

        gridLayout->addWidget(columnLabel, 0, 0, 1, 1);

        firstColcombo = new QComboBox(primaryKeyGroupBox);
        firstColcombo->setObjectName(QStringLiteral("firstColcombo"));

        gridLayout->addWidget(firstColcombo, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(144, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        orderLabel = new QLabel(primaryKeyGroupBox);
        orderLabel->setObjectName(QStringLiteral("orderLabel"));

        gridLayout->addWidget(orderLabel, 1, 0, 1, 1);

        firstOrdercombo = new QComboBox(primaryKeyGroupBox);
        firstOrdercombo->setObjectName(QStringLiteral("firstOrdercombo"));

        gridLayout->addWidget(firstOrdercombo, 1, 1, 1, 2);


        gridLayout_4->addWidget(primaryKeyGroupBox, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        okButto = new QPushButton(SortDialog);
        okButto->setObjectName(QStringLiteral("okButto"));
        okButto->setDefault(true);

        verticalLayout->addWidget(okButto);

        cancelButton = new QPushButton(SortDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        verticalLayout->addWidget(cancelButton);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        moreButton = new QPushButton(SortDialog);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        moreButton->setCheckable(true);

        verticalLayout->addWidget(moreButton);


        gridLayout_4->addLayout(verticalLayout, 0, 1, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 56, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 1, 0, 1, 1);

        SecondGroupBox = new QGroupBox(SortDialog);
        SecondGroupBox->setObjectName(QStringLiteral("SecondGroupBox"));
        gridLayout_2 = new QGridLayout(SecondGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        columnLabel_2 = new QLabel(SecondGroupBox);
        columnLabel_2->setObjectName(QStringLiteral("columnLabel_2"));

        gridLayout_2->addWidget(columnLabel_2, 0, 0, 1, 1);

        secondColcombo = new QComboBox(SecondGroupBox);
        secondColcombo->setObjectName(QStringLiteral("secondColcombo"));

        gridLayout_2->addWidget(secondColcombo, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        orderLabel_2 = new QLabel(SecondGroupBox);
        orderLabel_2->setObjectName(QStringLiteral("orderLabel_2"));

        gridLayout_2->addWidget(orderLabel_2, 1, 0, 1, 1);

        secondOrdercombo = new QComboBox(SecondGroupBox);
        secondOrdercombo->setObjectName(QStringLiteral("secondOrdercombo"));

        gridLayout_2->addWidget(secondOrdercombo, 1, 1, 1, 2);


        gridLayout_4->addWidget(SecondGroupBox, 2, 0, 1, 1);

        ThirdGroupBox = new QGroupBox(SortDialog);
        ThirdGroupBox->setObjectName(QStringLiteral("ThirdGroupBox"));
        gridLayout_3 = new QGridLayout(ThirdGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        columnLabel_3 = new QLabel(ThirdGroupBox);
        columnLabel_3->setObjectName(QStringLiteral("columnLabel_3"));

        gridLayout_3->addWidget(columnLabel_3, 0, 0, 1, 1);

        thirdColcombo = new QComboBox(ThirdGroupBox);
        thirdColcombo->setObjectName(QStringLiteral("thirdColcombo"));

        gridLayout_3->addWidget(thirdColcombo, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        orderLabel_3 = new QLabel(ThirdGroupBox);
        orderLabel_3->setObjectName(QStringLiteral("orderLabel_3"));

        gridLayout_3->addWidget(orderLabel_3, 1, 0, 1, 1);

        thirdOrdercombo = new QComboBox(ThirdGroupBox);
        thirdOrdercombo->setObjectName(QStringLiteral("thirdOrdercombo"));

        gridLayout_3->addWidget(thirdOrdercombo, 1, 1, 1, 2);


        gridLayout_4->addWidget(ThirdGroupBox, 3, 0, 1, 1);

        QWidget::setTabOrder(firstColcombo, firstOrdercombo);
        QWidget::setTabOrder(firstOrdercombo, secondColcombo);
        QWidget::setTabOrder(secondColcombo, secondOrdercombo);
        QWidget::setTabOrder(secondOrdercombo, thirdColcombo);
        QWidget::setTabOrder(thirdColcombo, thirdOrdercombo);
        QWidget::setTabOrder(thirdOrdercombo, okButto);
        QWidget::setTabOrder(okButto, cancelButton);
        QWidget::setTabOrder(cancelButton, moreButton);

        retranslateUi(SortDialog);
        QObject::connect(okButto, SIGNAL(clicked()), SortDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), SortDialog, SLOT(reject()));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), SecondGroupBox, SLOT(setVisible(bool)));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), ThirdGroupBox, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(SortDialog);
    } // setupUi

    void retranslateUi(QDialog *SortDialog)
    {
        SortDialog->setWindowTitle(QApplication::translate("SortDialog", "Sort", 0));
        primaryKeyGroupBox->setTitle(QApplication::translate("SortDialog", "&Primary Key", 0));
        columnLabel->setText(QApplication::translate("SortDialog", "Column:", 0));
        firstColcombo->clear();
        firstColcombo->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
        );
        orderLabel->setText(QApplication::translate("SortDialog", "Order:", 0));
        firstOrdercombo->clear();
        firstOrdercombo->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Ascending", 0)
         << QApplication::translate("SortDialog", "Descending", 0)
        );
        okButto->setText(QApplication::translate("SortDialog", "ok", 0));
        cancelButton->setText(QApplication::translate("SortDialog", "cancel", 0));
        moreButton->setText(QApplication::translate("SortDialog", "&more", 0));
        SecondGroupBox->setTitle(QApplication::translate("SortDialog", "&Second Key", 0));
        columnLabel_2->setText(QApplication::translate("SortDialog", "Column:", 0));
        secondColcombo->clear();
        secondColcombo->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
        );
        orderLabel_2->setText(QApplication::translate("SortDialog", "Order:", 0));
        secondOrdercombo->clear();
        secondOrdercombo->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Ascending", 0)
         << QApplication::translate("SortDialog", "Descending", 0)
        );
        ThirdGroupBox->setTitle(QApplication::translate("SortDialog", "&Third Key", 0));
        columnLabel_3->setText(QApplication::translate("SortDialog", "Column:", 0));
        thirdColcombo->clear();
        thirdColcombo->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
        );
        orderLabel_3->setText(QApplication::translate("SortDialog", "Order:", 0));
        thirdOrdercombo->clear();
        thirdOrdercombo->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Ascending", 0)
         << QApplication::translate("SortDialog", "Descending", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class SortDialog: public Ui_SortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTENDDIALOG_H
