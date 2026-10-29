#ifndef CHANNEL_H
#define CHANNEL_H

class channel{

    private:
    int *arr;
    int writeIndex;
    int readIndex;
    int size ;
  

    public:
    channel();
    void write(int var);
    void read(int &var);
    ~channel();

};
#endif