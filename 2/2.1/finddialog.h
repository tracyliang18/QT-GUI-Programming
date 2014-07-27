/*
 * finddialog.h
 *
 *  Created on: 2014-7-1
 *      Author: tracyliang
 */

#ifndef FINDDIALOG_H_
#define FINDDIALOG_H_

#include <QDialog>

/*前置声明，而没有include真是的头文件，加快编译速度，OMG*/
class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class FindDialog : public QDialog
{
        Q_OBJECT

public:
        FindDialog(QWidget *parent =0);

        signals:
                void findNext(const QString &str, Qt::CaseSensitivity cs);
                void findPrevious(const QString &str, Qt::CaseSensitivity cs);
        private slots:
                void findClicked();
                void enableFindButton(const QString &text);

        private:
                QLabel *label;
                QLineEdit *lineEdit;
                QCheckBox *caseCheckBox;
                QCheckBox *backCheckBox;
                QPushButton *findButton;
                QPushButton *closeButton;
};


#endif /* FINDDIALOG_H_ */
