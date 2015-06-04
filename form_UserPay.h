/* 
 * File:   form_UserPay.h
 * Author: demiin
 *
 * Created on June 4, 2015, 2:18 PM
 */

#ifndef _FORM_USERPAY_H
#define	_FORM_USERPAY_H

#include "ui_form_UserPay.h"

#include <string>
#include <iostream>
#include <regex>
#include <QThread>

#include "threadServer.h"

using namespace std;

class form_UserPay : public QMainWindow {
    Q_OBJECT
public:
    form_UserPay();
    virtual ~form_UserPay();
    
  
private:
    Ui::form_UserPay frmUserPay;

};

#endif	/* _FORM_USERPAY_H */
