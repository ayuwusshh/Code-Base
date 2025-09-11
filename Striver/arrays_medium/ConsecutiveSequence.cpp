#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &arr){
  int n=arr.size();
  sort(arr.begin(),arr.end());
  int count=0,lastSmaller=INT_MIN,longest=1;
  for(int i=0;i<n;i++){
// 1 2 3 4 5 8
    if(arr[i]-1==lastSmaller){
      count+=1;
      lastSmaller=arr[i];
    }else if(lastSmaller!=arr[i]){
      count=1;
      lastSmaller=arr[i];
    }
    longest=max(longest,count);
  }
  return longest;
}
  int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout << longestConsecutive(arr);;
}
