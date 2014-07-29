/*
 * finddialog.cpp
 *
 *  Created on: 2014-7-1
 *      Author: tracyliang
 */

#include <QtGui>
#include "finddialog.h"

FindDialog::FindDialog(QWidget *parent) : QDialog(parent)
{
        label = new QLabel (tr("Find &what:"));
        lineEdit = new QLineEdit;
        label->setBuddy(lineEdit);

        caseCheckBox = new QCheckBox(tr("Match &case"));
        backCheckBox = new QCheckBox(tr("Search &backward"));

        findButton = new QPushButton(tr("&Find"));
        findButton->setDefault(true);
        findButton->setEnabled(false);

        closeButton = new QPushButton(tr("Close"));

        connect(lineEdit, SIGNAL(textChanged(const QString &)), this, SLOT(enableFindButton()));

        connect(findButton, SIGNAL(clicked()), this, SLOT(findClicked()));

        connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

        QHBoxLayout *topLeftLayout = new QHBoxLayout;
        topLeftLayout->addWidget(label);
        topLeftLayout->addWidget(lineEdit);

        QVBoxLayout *leftLayout = new QVBoxLayout;
        leftLayout->addLayout(topLeftLayout);
        leftLayout->addWidget(caseCheckBox);
        leftLayout->addWidget(backCheckBox);

        QVBoxLayout *rightLayout = new QVBoxLayout;
        rightLayout->addWidget(findButton);
        rightLayout->addWidget(closeButton);
        rightLayout->addStretch();//make sure the button is at the top of the layout

        QHBoxLayout *mainLayout = new QHBoxLayout;
        mainLayout->addLayout(leftLayout);
        mainLayout->addLayout(rightLayout);
        setLayout(mainLayout);
        setWindowTitle(tr("Find"));
        setFixedHeight(sizeHint().height());
}


//void FindDialog::findPrevious(const QString &str, Qt::CaseSensitivity cs)
//{

//}

void FindDialog::findClicked()
{
        QString text = lineEdit->text();
        Qt::CaseSensitivity cs = caseCheckBox->isChecked()? Qt::CaseSensitive : Qt::CaseInsensitive;

        if(backCheckBox->isChecked())
        {
               // emit findPreviou(text, cs );
        }
        else
        {
                //emit findNext(text, cs);
        }
}

void FindDialog::enableFindButton()
{
    this->findButton->setEnabled(true);
}







