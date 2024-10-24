/*
#include<iostream>
using namespace std;
class Test{
    private: int a;
    protected: int b;
    public: int c;
    friend void fun();
};
void fun(){
    Test t;
    t.a=5;
    t.b=6;
    t.c=7;
    cout<<t.a<<endl;
    cout<<t.b;
    cout<<t.c;
}
int main(){

}
*/
#include <iostream>
using namespace std;
class Your;
class My
{
private:  int a;
protected: int b;
public: int c;
friend Your;
};
class Your
{
    My m;

public:
    void fun()
    {
        m.a = 10;
        m.b = 15;
        m.c = 20;
    }
       void printData() {
        cout << m.a << endl;
        cout << m.b << endl;
        cout << m.c << endl;
    }
};
int main(){
    Your y;
    y.fun();
    y.printData();
    return 0;
}