#include <iostream>
using namespace std;
int main()
{
  int arr[] = {12, 3, 0, 4, 0};
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)

  {
    if (arr[i] == 0)
    {
      arr[i + 1] = arr[i];
    }
  }
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    cout << arr[i] << " ";
  }
}