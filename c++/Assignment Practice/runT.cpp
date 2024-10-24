#include <iostream>
using namespace std;
class Base
{
public:
    void show_val()
    {
        cout << "class::Base" << endl;
    }
};
class Derived : public Base
{
public:
    void show_val()
    {
        cout << "Class::Derived" << endl;
    }
};
int main()
{
    Base b;
    Derived d;
    b.show_val();
    d.show_val();
}
