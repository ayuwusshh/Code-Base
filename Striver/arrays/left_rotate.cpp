#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int i;
  int temp = arr[i];
  for (i = 0; i < n - 1; i++)
  {
    arr[i] = arr[i + 1];
    if (arr[i] == n)
    {
      arr[i] = temp;
    }
  }
  for (int j = 0; j < n; j++)
  {
    cout << arr[j] << " ";
  }
}