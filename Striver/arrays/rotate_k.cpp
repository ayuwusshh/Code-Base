#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;
  int n = sizeof(arr) / sizeof(arr[0]);
  int temp[k];
  for (int i = 0; i < k; i++){
    temp[i] = arr[i];
  }
  for (int i = k; i < n; i++){
    arr[i - k] = arr[i];
  }
  for (int i = 0; i < k; i++){
    arr[n - k + i] = temp[i];
  }
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}