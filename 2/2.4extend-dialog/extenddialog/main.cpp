#include "extenddialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    extenddialog *dialog = new extenddialog;
    dialog->setColumRange('C','F');
    dialog->show();

    return a.exec();
}
