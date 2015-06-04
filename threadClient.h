/* 
 * File:   threadClient.h
 * Author: demiin
 *
 * Created on June 4, 2015, 2:22 PM
 */

#ifndef THREADCLIENT_H
#define	THREADCLIENT_H

#include <QThread>
#include <QObject>
#include <regex>
#include <string>
#include <iostream>
#include <vector>
#include "parsing.h"

using namespace std;

class threadClient : public QObject{
    Q_OBJECT
public:
    threadClient();
    virtual ~threadClient();
    
    void setMessageFromClient(string messageFromClient) {
        this->messageFromClient_ = messageFromClient;
    }

    void setClientIP_(string clientIP) {
        this->clientIP_ = clientIP;
    }
    
private:
    string messageFromClient_;
    string clientIP_;
    
public slots:
    void slot_Working();
    
signals:
    void finished();
    void clientMsgParsed(responseClient response);
};

#endif	/* THREADCLIENT_H */

