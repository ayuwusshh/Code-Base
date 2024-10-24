#include<iostream>
using namespace std;
class A{
    public:
    int add(int x, int y){
        return x+y;
    }
};
class B: public A{
    public:
    int mult(int x, int y){
        return x*y;
    }
};
class C: public A,public B{
    public:
    void display(int x, float y){
        cout<<"Ambigious "<<x<<" "<<y<<endl;
    }
};
int main(){
    C obj;
    cout<<"Addition"<<obj.add(5,6)<<endl;
    cout<<"Multipliation"<<obj.mult(5,6)<<endl;
}

