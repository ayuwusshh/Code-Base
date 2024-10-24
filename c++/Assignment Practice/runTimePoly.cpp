#include<iostream>
using namespace std;
class Car{
    public:
    virtual void start()=0;
    virtual void stop()=0;
};
class Swift: public Car{
    public:
    void start(){
        cout<<"Swift started."<<endl;
    }
    void stop(){
        cout<<"Swift stopped."<<endl;
    }
};
class Creta: public Car{
    public:
    void start(){
        cout<<"Creta started."<<endl;
    }
    void stop(){
        cout<<"Creta stopped."<<endl;
    }
};
int main(){
    Car *c=new Swift();
    c->start();
    c->stop();
}