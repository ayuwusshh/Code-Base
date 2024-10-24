/*
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
public:
   Rectangle(){
    length=1;
    breadth=1;
}
   Rectangle(int l,int b){
    setLength(l);
    setBreadth(b);
}
    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }
    void setBreadth(int b){
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }
    int getLength(){return length;}
    int getBreadth(){return breadth;}

    int area(){
        return length*breadth;
    };
    int perimeter(){
        return 2*(length+breadth);
    };
};
int main(){
    Rectangle r1(5,8);
     cout<<r1.area()<<endl;
}
*/
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = 5;
        breadth = 4;
    }
    Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }
    void setLength(int l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
            length = 0;
    }
    void setBreadth(int b)
    {
        if (b >= 0)
        {
            breadth = b;
        }
        else
            breadth = 0;
    }
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    int area()
    {
        return length * breadth;
    };
    int perimeter()
    {
        return 2 * (length + breadth);
    };
};
int main()
{
    Rectangle r;
    Rectangle r1(8, 6);
    cout << r.area() << endl;
    cout << r1.area() << endl;
    return 0;
}