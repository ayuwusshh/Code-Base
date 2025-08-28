#include<bits/stdc++.h>
using namespace std;
void rev(int arr[],int n,int i){
  if(i>=n/2) return;
  swap(arr[i],arr[n-i-1]);
  rev(arr,n,i+1);
}
int main(){
  int n,i=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  rev(arr,n,i);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<' ';
  }
}