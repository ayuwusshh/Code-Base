#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l;
    int b;
    int area(){
        return l*b;
    }
    int perimeter(){
        return 2*(l+b);
    }
};
int main(){
    Rectangle r1,r2;
    r1.l=10;
    r1.b=5;
    cout<<r1.area()<<endl;
    r2.l=15;
    r2.b=12;
    cout<<r2.perimeter()<<endl;
    return 0;
};