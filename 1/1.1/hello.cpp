/*
 * hello.cpp
 *
 *  Created on: 2014-7-1
 *      Author: tracyliang
 */

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
        QApplication app(argc, argv);
        //QLabel *label = new QLabel("Hello QT!");

        //QLabel Html label
        QLabel *label = new QLabel("<h2><i>Hello</i>""<font color=red>QT!</font></h2>");
        label->show();

        return app.exec();
}




