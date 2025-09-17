#include<bits/stdc++.h>
using namespace std;
/*
int XorOperation(vector<int> arr,int target){
 int count=0;
  for(int i=0;i<arr.size();i++){
     int xorr=0;
    for(int j=i;j<arr.size();j++){
      xorr^=arr[j];
      if(xorr==target) count++;
    }
  }
  return count;
}*/
int XorOperation(vector<int> arr,int target){
int count=0,xorr=0;
 map <int,int> m;
 m[xorr]++;
  for(int i=0;i<arr.size();i++){
    xorr^=arr[i];
    int x=xorr^target;
    count+=m[x];
    m[xorr]++;
  }
  return count;
}
int main(){
int n,target;
cin>>n;
cin>>target;
vector<int> arr(n);
for(int i=0;i<n;i++){
  cin>>arr[i];
}
cout<<XorOperation(arr,target);
}