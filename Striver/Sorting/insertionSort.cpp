#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
  for(int i=0;i<n;i++){
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
      swap(arr[j],arr[j-1]);
      j--;
    }
  }
}

int main(){
  int n;
  cout<<"Enter size : ";
  cin>>n;
  int arr[n];
  cout<<"Enter array elements : ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  insertion_sort(arr,n);
   cout<<"Sorted array elements : ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}