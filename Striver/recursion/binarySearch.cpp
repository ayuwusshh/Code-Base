#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int high,int low,int t){
  if (low > high) return -1;
  int mid = low + (high - low) / 2;
  if(arr[mid]==t) return mid;
if(arr[mid] < t) return bs(arr, high, mid+1, t);
if(arr[mid] > t) return bs(arr, mid-1, low, t);

}
int main(){
int n,t;
cout<<"Enter the size: ";
cin>>n;
int arr[n];
int high=n-1;
int low=0;
for(int i=0;i<n;i++){
  cin>>arr[i];
}
cout<<"Enter the target: ";
cin>>t;
if(bs(arr,high,low,t)){
  cout<<"Found";
}else cout<<"Not found";
}