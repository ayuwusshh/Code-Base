#include <iostream>
using namespace std;
void revArray(int arr[], int n)
{
  int start = 0;
  int end = n - 1;
  while (start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int n = 8;
  revArray(arr, n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}