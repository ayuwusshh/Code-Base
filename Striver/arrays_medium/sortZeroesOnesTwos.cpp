#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &arr){
  int n=arr.size();
  int low=0,mid=0,high=n-1;
  for(int i=0;i<n;i++){
    if(arr[mid]==0){
      swap(arr[low++],arr[mid++]);
      
    }
    else if(arr[mid]==1){
      mid++;
    }else{
      swap(arr[mid],arr[high--]);
    }
  }
}
int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 sortColors(arr);
    for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
  }
}