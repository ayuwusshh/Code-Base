#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter no of rows ";
    cin >> r;
    if (r <= 0)
    {
        cout << "Please enter a positive number of rows." << endl;
        return 0;
    }
    for (int i = 0; i<r; i++)
    {
        for (int j = 0; j < r-i+1 ; j++)
        {
            cout << " ";
        }
         for (int j = 0; j < 2*i+1 ; j++)
        {
            cout << "*";
        }
         for (int j = 0; j < r-i+1 ; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}