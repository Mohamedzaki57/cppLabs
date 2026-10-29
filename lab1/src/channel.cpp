#include<iostream>
#include"channel.h"


channel::channel():readIndex(0),writeIndex(0),size(100)
{
 
    
    arr=new int[size];
    

}
void channel::write(int var){

    writeIndex %=size;
    arr[writeIndex]=var;
    writeIndex++;
}

void channel::read(int &var)
{
   
   
    var= arr[readIndex];

     readIndex=(readIndex+1)%size;
    
}

channel::~channel()
{
    delete []arr;
}