#include <iostream>
using namespace std;
int main()
{
  int arr[] = {9, 5, 6, 8, 7};
  int n = 5;
  for (int st = 0; st < n; st++)
  {
    for (int end = st; end < n; end++)
    {
      for (int i = st; i <= end; i++)
      {
        cout << arr[i];
      }
      cout << " ";
    }
    cout << endl;
  }
}
// #include <iostream>
// using namespace std;
// int main()
// {
//   int arr[] = {9, 5, 6, 8, 7};
//   int n = 5;
//   for (int st = 0; st < n; st++)
//   {
//     for (int end = st; end < n; end++)
//     {
//       for (int i = st; i <= end; i++)
//       {
//         cout << arr[i];
//       }
//       cout << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }