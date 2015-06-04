/* 
 * File:   threadServer.cpp
 * Author: demiin
 * 
 * Created on June 4, 2015, 2:44 PM
 */

#include <arpa/inet.h>

#include "threadServer.h"

threadServer::threadServer() {
}

threadServer::~threadServer() {
}

void threadServer::createServer() {
    int sockfd = 0;
    int portno = 0;
    socklen_t clilen;
    struct sockaddr_in serv_addr, cli_addr;
    int n = 0;
    int newsockfd = -1;

    sockfd =  socket(AF_INET, SOCK_STREAM, 0);
    if (fcntl( sockfd, F_SETFL, fcntl( sockfd, F_GETFL, 0 ) | O_NONBLOCK ) < 0){
       cout << "Ошибка установки неблокирующего режима" << endl;
    }
     
    if (sockfd < 0)  {
        cout << "Ошибка открытия сокета" << endl;
    }
    bzero((char *) &serv_addr, sizeof(serv_addr));

    portno = atoi(port_.c_str());
    serv_addr.sin_family = AF_INET;  
    serv_addr.sin_addr.s_addr = INADDR_ANY;  
    serv_addr.sin_port = htons(portno);
    for (;;) {
        if (bind(sockfd, (struct sockaddr *) &serv_addr,  sizeof(serv_addr)) < 0) {
            cout << "Ошибка привязывания к порту" << endl;
        } 
        else {
            break;
        }
    }
    listen(sockfd,5);
    clilen = sizeof(cli_addr);

    for (;;) {
        newsockfd = -1;     
     
        while (newsockfd == -1) {
            newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);
        }
        char buff[256];
        bzero(buff,256);

        n = read(newsockfd,buff,255);
        if (n < 0) {
            cout << "Ошибка чтения из сокета" << endl;
        }
        
        QThread* thread = new QThread;
        threadClient* clnt = new threadClient();
        clnt->moveToThread(thread);
        clnt->setMessageFromClient(string(buff));
        clnt->setClientIP_(string(inet_ntoa(cli_addr.sin_addr)));
        connect(thread, &QThread::started, clnt, &threadClient::slot_Working);
        connect(clnt, &threadClient::finished, thread, &QThread::quit);
        connect(clnt, &threadClient::clientMsgParsed, this, &threadServer::slot_clientMsgParsed);
        
        
        thread->start();
        //cout << inet_ntoa(cli_addr.sin_addr) << endl;
//     printf("server: got connection from %s port %d\n",
//            inet_ntoa(cli_addr.sin_addr), ntohs(cli_addr.sin_port));


        send(newsockfd, "Hello, world!\n", 13, 0);

        close(newsockfd);
     //close(sockfd);
     }
}

void threadServer::slot_Working() {
    createServer();
}

void threadServer::slot_from() {

}

void threadServer::slot_clientMsgParsed(responseClient msg) {
    cout << msg.ip << endl;
}
