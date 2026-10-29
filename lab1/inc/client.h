#ifndef CLIENT_H
#define CLIENT_H
#include"server.h"


class client{

    private:
      server &client_ser;
      channel *client_ch;
      int clientchID;

    public:
    client(server &s,int ch);
    void read(int & data);
};

#endif