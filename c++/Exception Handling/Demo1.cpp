#include <iostream>
using namespace std;
int main()
{
    int a = 8, b = 2, c;
    try
    {
        if (b == 0)
        {
            throw 1;
        }
        c = a / b;
        cout << c << endl;
    }
    catch (int x)
    {
        cout << "division by 0" << x << endl;
    }
    return 0;
}