#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  int arr[] = {5, 11, 2, -8, 7};

  int minIndex = 0;
  int maxIndex = 0;

  for (int i = 1; i < n; i++)
  {
    if (arr[i] < arr[minIndex])
    {
      minIndex = i;
    }

    if (arr[i] > arr[maxIndex])
    {
      maxIndex = i;
    }
  }

  cout << "Index of minimum element: " << minIndex << endl;
  cout << "Index of maximum element: " << maxIndex << endl;

  return 0;
}
