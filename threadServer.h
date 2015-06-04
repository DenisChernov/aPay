/* 
 * File:   threadServer.h
 * Author: demiin
 *
 * Created on June 4, 2015, 2:44 PM
 */

#ifndef THREADSERVER_H
#define	THREADSERVER_H

#include <iostream>
#include <string>
#include <QObject>
#include <QThread>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>
#include "threadClient.h"
#include "parsing.h"

using namespace std;

class threadServer : public QObject{
    Q_OBJECT
public:
    threadServer();
    virtual ~threadServer();
private:
    const string port_ = "31771";    
    
    void createServer();
        
    
public slots:
    void slot_from();
    void slot_Working();
    void slot_clientMsgParsed(responseClient msg);
    
signals:
    void clientTransmited();
    void finished();
    
};

#endif	/* THREADSERVER_H */

