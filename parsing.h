/* 
 * File:   parsing.h
 * Author: demiin
 *
 * Created on June 4, 2015, 4:38 PM
 */

#ifndef PARSING_H
#define	PARSING_H

#include <regex>
#include <string>

using namespace std;

struct responseClient {
    string ip;
    string psName;
};

class parsing {
public:
    parsing();
    virtual ~parsing();
private:

};

#endif	/* PARSING_H */

