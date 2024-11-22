#include <iostream>
using namespace std;

int main()
{
  int val;
  int *ptr = &val;
  *ptr = 30;
  cout << val;
  return 0;
}