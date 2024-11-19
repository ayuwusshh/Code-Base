#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;
  int n = sizeof(arr) / sizeof(arr[0]);
  int temp = (arr[0], arr[1], arr[2]);
  for (int i = k; i < n; i++)
  {
    arr[i] = arr[i - k];
  }
  for (int j = k; j < n; j++)
  {
    arr[i] = temp[j];
  }
}