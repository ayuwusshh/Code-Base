#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int i;
  int temp = (arr[0], arr[1], arr[2]);
  for (i = 2; i < n - 2; i++)
  {
    arr[i] = arr[i + 1];
  }
  arr[n - 2] = temp;
  for (int j = 0; j < n - 2; j++)
  {
    cout << arr[j] << " ";
  }
}