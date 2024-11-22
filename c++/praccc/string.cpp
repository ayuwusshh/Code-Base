#include <iostream>
using namespace std;

int main()
{
  string a[] = {"a", "b", "c", "d", "e"};
  int n = sizeof(a) / sizeof(a[0]);
  cout << n;
  return 0;
}