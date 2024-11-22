#include <iostream>
using namespace std;
void mult(int a, int b)
{
  int m = a * b;
  cout << m;
}
int main()
{
  int a, b;
  cin >> a >> b;
  mult(a, b);
}