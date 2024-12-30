

// //brute force

// #include <iostream>
// using namespace std;
// int main()
// {
//   int arr[] = {3, -4, 5, 4, -1, 7, -8};
//   int n = 7;
//   int maxSum = INT_MIN;
//   for (int st = 0; st < n; st++)
//   {
//     int currentSum = 0;
//     for (int end = st; end < n; end++)
//     {
//       currentSum += arr[end];
//       maxSum = max(currentSum, maxSum);
//     }
//   }
//   cout << maxSum;
//   return 0;
// }

#include <iostream>
using namespace std;
int main()
{
  int maxx = INT_MIN;
  int arr[] = {-5, 9, -1, 5, -6, 3, 7, -1};
  int n = 8;
  for (int st = 0; st < n; st++)
  {
    int currentSum = 0;
    for (int end = st; end < n; end++)
    {
      currentSum += arr[end];
      maxx = max(currentSum, maxx);
    }
  }
  cout << maxx;
}