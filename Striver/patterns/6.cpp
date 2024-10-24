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
    for (int i = r; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}