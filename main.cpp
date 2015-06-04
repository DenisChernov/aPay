/*
 * File:   main.cpp
 * Author: demiin
 *
 * Created on June 4, 2015, 2:16 PM
 */

#include <QApplication>
#include <vector>
#include "form_UserPay.h"
#include "parsing.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    qRegisterMetaType<responseClient>("responseClient");
    
    form_UserPay* mainWnd = new form_UserPay;
    mainWnd->show();

    return app.exec();
}
