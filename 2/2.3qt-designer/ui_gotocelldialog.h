/********************************************************************************
** Form generated from reading UI file 'gotocelldialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTOCELLDIALOG_H
#define UI_GOTOCELLDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GoToCellDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok;
    QPushButton *Cancel;

    void setupUi(QWidget *GoToCellDialog)
    {
        if (GoToCellDialog->objectName().isEmpty())
            GoToCellDialog->setObjectName(QString::fromUtf8("GoToCellDialog"));
        GoToCellDialog->resize(252, 86);
        widget = new QWidget(GoToCellDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 9, 234, 66));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ok = new QPushButton(widget);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setEnabled(false);
        ok->setDefault(true);

        horizontalLayout_2->addWidget(ok);

        Cancel = new QPushButton(widget);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));

        horizontalLayout_2->addWidget(Cancel);


        verticalLayout->addLayout(horizontalLayout_2);

        ok->raise();
        Cancel->raise();
        lineEdit->raise();
        label->raise();
        lineEdit->raise();
#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, ok);
        QWidget::setTabOrder(ok, Cancel);

        retranslateUi(GoToCellDialog);

        QMetaObject::connectSlotsByName(GoToCellDialog);
    } // setupUi

    void retranslateUi(QWidget *GoToCellDialog)
    {
        GoToCellDialog->setWindowTitle(QApplication::translate("GoToCellDialog", "well", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GoToCellDialog", "&Cell Location", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QString());
        ok->setText(QApplication::translate("GoToCellDialog", "ok", 0, QApplication::UnicodeUTF8));
        Cancel->setText(QApplication::translate("GoToCellDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GoToCellDialog: public Ui_GoToCellDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTOCELLDIALOG_H
