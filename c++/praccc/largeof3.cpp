#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  int a[] = {1, 2, 3, 4, 5};
  int n = sizeof(a) / sizeof(a[0]);
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
  }
  cout << sum;
  return 0;
}