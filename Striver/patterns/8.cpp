#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    if (rows <= 0)
    {
        cout << "Please enter a positive number of rows." << endl;
        return 0;
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * (rows - i) - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
