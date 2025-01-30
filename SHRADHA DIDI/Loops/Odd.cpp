#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int sum = 0;
  cout << "Odd numbers are: ";
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      sum += i;
      cout << i << " ";
    }
  }
  cout << endl;
  cout << "Sum is: " << sum;
  return 0;
}