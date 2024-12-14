// kadanesAlgorithm

#include <iostream>
using namespace std;
int main()
{
  int arr[] = {3, -4, 5, 4, -1, 7, -8};
  int n = 7;
  int maxSum = INT_MIN;
  int currentSum = 0;
  for (int i = 0; i < n; i++)
  {
    currentSum += arr[i];
    maxSum = max(currentSum, maxSum);
    if (currentSum < 0)
    {
      currentSum = 0;
    }
  }
  cout << maxSum << endl;
  return 0;
}