#include <QtGui>
#include "extenddialog.h"


extenddialog::extenddialog(QWidget *parent) : QDialog(parent)
{
    setupUi(this);
    SecondGroupBox->hide();
    ThirdGroupBox->hide();

    layout()->setSizeConstraint(QLayout::SetFixedSize);

    setColumRange('A','Z');
}

void extenddialog::setColumRange(QChar first, QChar last)
{
    firstColcombo->clear();
    secondColcombo->clear();
    thirdColcombo->clear();

    secondColcombo->addItem(tr("None"));
    thirdColcombo->addItem(tr("None"));
    firstColcombo->setMinimumSize(secondColcombo->sizeHint());

    QChar ch = first;
    while( ch <= last)
    {
        firstColcombo->addItem(QString(ch));
        secondColcombo->addItem(QString(ch));
        thirdColcombo->addItem(QString(ch));

        ch = ch.unicode() + 1;
    }
}


