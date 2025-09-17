#include<bits/stdc++.h>
using namespace std;
int countSub(vector<int> &arr,int target){
  map<int,int> prefixMap;
  int sum=0,count=0;
  prefixMap[0]=1;
  for(int i=0;i<arr.size();i++){
      sum+=arr[i];
      int rem=sum-target;
      count+=prefixMap[rem];
      prefixMap[sum]+=1;
  }
  return count;
}
int main(){
int n;
cin>>n;
int target;
cin>>target;
vector<int>arr(n);
for(int i=0;i<n;i++){
  cin>>arr[i];
}
cout<<countSub(arr,target);
}