#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  bool is = true;
  for (int i = 2; i < n - 1; i++)
  {
    if (n % i == 0)
    {
      is = false;
      break;
    }
  }
  if (is == true)
  {
    cout << "Prime";
  }
  else
  {
    cout << " Non Prime";
  }
  return 0;
}