#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  // 1 2 2 5 6
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  int sum = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] <= arr[i - 1])
    {
      arr[i] = arr[i - 1] + 1;
    }
    sum += arr[i];
  }
  cout << sum;
  return 0;
}