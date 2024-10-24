/*
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
class Cuboid : public Rectangle
{
private:
    int height;

public:
    void setHeight(int h)
    {
        if (h >= 0)
        {
            height = h;
        }
        else
            height = 0;
    }
    int getHeight() { return height; }
    Cuboid(int l = 0, int b = 0, int h = 0)
    {
        // height = h;
        setHeight(h);
        setLength(l);
        setBreadth(b);
    }
    int volume()
    {
        return getLength() * getBreadth() * height;
    }
    int area()
    {
        return (2 * getLength() * getBreadth()) + (2 * getLength() * height) + (2 * height * getBreadth());

    }
};
int main()
{
    Cuboid c(5, 3, 7);
    Rectangle r;
    Rectangle r1(8, 6);
    cout << r.area() << endl;
    cout << r1.area() << endl;
    cout << c.volume() << endl;
    cout << c.area() << endl;
    return 0;
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
        breadth = 9;
    }
    Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }
    void setLength(int l)
    {
        if (l > 0)
        {
            length = l;
        }
        else
        {
            length = 0;
        }
    }
    void setBreadth(int b)
    {
        if (b > 0)
        {
            breadth = b;
        }
        else
        {
            breadth = 0;
        }
    }
    getLength() { return length; }
    getBreadth() { return breadth; }
    int area()
    {
        return length * breadth;
    };
    int perimeter()
    {
        return 2 * (length + breadth);
    };
};
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid()
    {
        void setHeight(int h)
        {
            if (h > 0)
            {
                height = h;
            }
            else
            {
                height = 0;
            }
        }
        int getHeight() { return height; }
        Coboid(int l = 0, int b = 0, int h = 0)
        {
            setLength(l);
            setBreadth(b);
            setHeight(h);
        }
    }
};