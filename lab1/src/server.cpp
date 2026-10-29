#include "server.h"




void server::write(int channelID,int data)
{
   if(channelID<speed || channelID>rpm){return;}
   ch [channelID].write(data);
}

channel* server::connect(int channelID)
{
    if(channelID<speed || channelID>numOfchannels){return nullptr;}

    return &ch[channelID];
}


