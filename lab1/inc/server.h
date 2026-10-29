#ifndef SERVER
#define SERVER
#include"channel.h"

typedef enum{
    speed,
    temper,
    rpm,
    numOfchannels
}channelTypes;

class server{

    private:
    channel ch[numOfchannels];

    public:
    server()=default;
    void write(int channelID, int data);
    channel* connect(int channelID);
    ~server()=default;


};
#endif