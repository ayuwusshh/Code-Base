#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int i;
  int temp = arr[0];
  for (i = 0; i < n - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp;
  for (int j = 0; j < n; j++)
  {
    cout << arr[j] << " ";
  }
}