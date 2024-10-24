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
    Rectangle r;
    Rectangle *p;
    p=&r;
    p->l=15;
    p->b=10;
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;
    return 0;
}