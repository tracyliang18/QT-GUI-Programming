#ifndef EXTENDDIALOG_H
#define EXTENDDIALOG_H

#include <QDialog>
#include "ui_extenddialog.h"

class extenddialog : public QDialog, public Ui::SortDialog
{
    Q_OBJECT

public:
    extenddialog(QWidget *parent = 0);

    void setColumRange(QChar first, QChar last);
};

#endif // EXTENDDIALOG_H
