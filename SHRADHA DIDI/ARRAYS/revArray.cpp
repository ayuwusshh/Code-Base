#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
  int end = size - 1;
  cout << "after reverse" << endl;
  for (int i = size - 1; i >= 0; i--)
  {
    cout << arr[end] << " ";
    end--;
  }
  cout << endl;
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = 6;
  cout << "before reverse" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  reverseArray(arr, n);
  return 0;
}