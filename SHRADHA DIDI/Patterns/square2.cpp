/*
123
456
789
*/
#include <iostream>
using namespace std;
int main()
{
  int n = 10;
  int count = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << count << " ";
      count += 1;
    }
    cout << endl;
  }
  cout << "After code:" << count;
}