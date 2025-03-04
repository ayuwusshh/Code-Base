#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    bool isSwap = false;
    for (int j = 0; j < n - 1; j++)
    {
      if (arr[j + 1] < arr[j])
      {
        swap(arr[j], arr[j + 1]);
        isSwap = true;
      }
    }
    if (!isSwap)
    {
      return;
    }
  }
}
void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int arr[] = {4, 1, 5, 2, 3};
  int n = 5;
  bubbleSort(arr, n);
  printArray(arr, n);
  cout << "array sorted";
  return 0;
}