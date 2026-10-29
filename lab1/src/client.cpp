#include "client.h"

client::client(server &s ,int channelID) : client_ser{s},clientchID{channelID},client_ch(s.connect(channelID))
{
   
   
}

void client::read(int &data )
{
    if(client_ch==nullptr){return;}
    client_ch->read(data);
}