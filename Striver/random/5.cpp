#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter no of rows ";
    cin >> r;
    if (r <= 0)
    {
        cout << "Please enter a positive number of rows." << endl;
        return 0;
    }
    cout << "Enter no of cols ";
    cin >> c;
    if (c <= 0)
    {
        cout << "Please enter a positive number of rows." << endl;
        return 0;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = r; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}