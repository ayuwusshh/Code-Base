#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxx)
{
  int st = 1, pages = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > maxx)
    {
      return false;
    }
    if (pages + arr[i] <= maxx)
    {
      pages += arr[i];
    }
    else
    {
      st++;
      pages = arr[i];
    }
  }
  if (st > m)
  {
    return false;
  }
  else
  {
    return true;
  }
}

int allocateBooks(vector<int> &arr, int n, int m)
{
  if (m > n)
  {
    return -1;
  }
  int sum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    sum += arr[i];
  }
  int ans = -1;
  int st = 0, end = sum; // range
  while (st <= end)
  {
    int mid = st + (end - st) / 2;
    if (isValid(arr, n, m, mid))
    { // if valid search left
      ans = mid;
      end = mid - 1;
    }
    else
    { // else serach right
      st = mid + 1;
    }
  }
  return ans;
}

int main()
{
  vector<int> arr = {2, 1, 3, 4};
  int n = 4, m = 2;
  cout << allocateBooks(arr, n, m) << endl;
  return 0;
}