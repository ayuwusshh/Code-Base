/*#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Default of Base Class."<<endl;
    }
    Base(int a){
         cout<<"Parameterized of Base Class."<<endl;
    }
};
class Derived: public Base{
    public:
    Derived(){
        cout<<"Default of Derived Class."<<endl;
    }
    Derived(int a){
     cout<<"Parameterized of Derived Class."<<endl;   
    }
};
int main(){
    Derived d;
}*/
#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Default of Base class"<<endl;
    }
    Base(int x){
        cout<<"Parameterized of Base class"<<endl;
    }
}; 
class Derived: public Base{
    public:
    Derived(){
        cout<<"Default of Derived class"<<endl;
    }
    Derived(int a){
        cout<<"Parameterized of Derived class"<<endl;
    }
    Derived(int x,int a):Base(x){
        cout<<"Parameterized of Derived class"<<endl;
    }
};
int main(){
    Derived d(5,6);
}