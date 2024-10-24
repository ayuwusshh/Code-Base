#include <iostream>
using namespace std;
class Shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};
class Rectangle: public Shape{
    private:
    float l;
    float b;
    public:
    Rectangle(float x,float y)
    {
        l=x;
        b=y;
    }
    float area(){return l*b;}
    float perimeter(){return 2*(l+b);}
};
class Circle: public Shape{
  private:
  float r;
  public:
  Circle(int z){
    r=z;
  }
    float area(){return 3.1425 * r * r;}
    float perimeter(){return 2 * 3.1425 * r;}
};
int main(){
    Shape *s=new Rectangle(10.6,5.5);
    cout<<"Area of Rectangle is "<<s->area()<<endl;
    cout<<"Perimeter of Rectangle is "<<s->perimeter()<<endl;
    s=new Circle(6);
    cout<<"Area of Circle is "<<s->area()<<endl;
    cout<<"Perimeter of Circle is "<<s->perimeter()<<endl;
}