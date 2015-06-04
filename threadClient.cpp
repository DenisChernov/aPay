/* 
 * File:   threadClient.cpp
 * Author: demiin
 * 
 * Created on June 4, 2015, 2:22 PM
 */

#include "threadClient.h"

threadClient::threadClient() {
}

threadClient::~threadClient() {
}

void threadClient::slot_Working() {
    responseClient msg;
    msg.ip = clientIP_;
    msg.psName = messageFromClient_;

    cout << "gotted" << endl;
    
    emit clientMsgParsed(msg);
}

