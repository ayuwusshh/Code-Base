/*
A
B A
C B A
D C B A
*/
#include <iostream>
using namespace std;
int main()
{
  int n = 4;
  for (int i = 1; i <= n; i++)
    char ch = 'A';
  {
    for (int j = i; j >= 1; j--)
    {
      cout << ch << " ";
      ch += 1;
    }
    cout << endl;
  }
}