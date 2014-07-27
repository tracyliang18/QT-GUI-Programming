#include <QtGui>

#include "gotocelldialog.h"

GoToCellDialog::GoToCellDialog(QWidget *parent) : QDialog(parent)
{
        setupUi(this);

        QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");

        lineEdit->setValidator(new QRegExpValidator(regExp, this));

        connect(ok, SIGNAL(clicked()), this, SLOT(accept()));

        connect(Cancel, SIGNAL(clicked()), this, SLOT(reject()));
}

void GoToCellDialog::on_lineEdit_textChanged()
{
        ok->setEnabled(lineEdit->hasAcceptableInput());
}
