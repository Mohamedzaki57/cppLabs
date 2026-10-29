
#include <iostream>
#include "channel.h"
#include "server.h"
#include "client.h"
int main(void)
{

    server s;
    s.write(speed, 6);
    
    client c1(s, speed);
    int d = 0;
    std::cout << d << std::endl;

    c1.read(d);
    std::cout<<"recieved data "<<d;
  
}