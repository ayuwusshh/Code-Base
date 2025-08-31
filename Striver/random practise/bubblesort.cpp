#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
  for(int i=n-1;i>=1;i--){
    bool swapped=false;
    for(int j=0;j<i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped=true;
      }
    }
    if(!swapped){
      break;
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
  bubble_sort(arr,n);
   cout<<"Sorted array elements : ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}