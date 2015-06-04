/*
 * File:   form_UserPay.cpp
 * Author: demiin
 *
 * Created on June 4, 2015, 2:18 PM
 */

#include "form_UserPay.h"

form_UserPay::form_UserPay() {
    frmUserPay.setupUi(this);
    
    threadServer* srv = new threadServer();
    QThread* thread = new QThread;
        
    srv->moveToThread(thread);
    //engine->setSiteToSearch(site);

    connect(thread, &QThread::started, srv, &threadServer::slot_Working);
    connect(srv, &threadServer::finished, thread, &QThread::quit);
    //connect(srv, &engine_site::finished_loadInitSiteContent, this, &mainwindow::thread_finishedLoadInitSiteContent);
//            connect(engine, &engine_site::finished_gettingBookInfo, this, &mainwindow::thread_finishedGettingBookInfo);
     thread->start();
}

form_UserPay::~form_UserPay() {
}

