// #include <iostream>
// using namespace std;
// int main()
// {
//   int arr[] = {3, -4, 5, 4, -1, 7, -8};
//   int n = 7;
//   int maxx = INT_MIN;
//   int currentSum = 0;
//   for (int i = 0; i < n; i++)
//   {
//     currentSum += arr[i];
//     maxx = max(currentSum, maxx);
//     if (currentSum < 0)
//     {
//       currentSum = 0;
//     }
//   }
//   cout << maxx;
//   return 0;
// }

#include <iostream>
using namespace std;
int main()
{
  int arr[] = {3, -4, 5, 4, -1, 7, -8};
  int n = 6;
  int maxx =INT_MIN;
  int currentSum = 0;
  for (int i = 0; i < n; i++)
  {
    currentSum += arr[i];
    maxx = max(maxx, currentSum);
    if (currentSum < 0)
    {
      currentSum = 0;
    }
  }
  cout << maxx;
  return 0;
}