#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<string> arr = {"h", "s", "u", "y", "A", "O"};
  reverse(arr.begin(), arr.end());
  for (const string &s : arr)
  {
    cout << s << " ";
  }
  return 0;
}