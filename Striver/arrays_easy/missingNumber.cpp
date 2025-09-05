#include<bits/stdc++.h>
using namespace std;
/*
better approach
int missingElement(vector<int> &arr){
   int n=arr.size();
 vector<int>hash(n+1,0);
 for(int i=0;i<n;i++){
  hash[arr[i]]=1;
 }
 for(int j=0;j<=hash.size();j++){
    if(hash[j]==0) return j;
 }
 return -1;
}*/

//optimal approach 
int missingElement(vector<int> &arr){
  int n=arr.size();
  int expSum=(n*(n+1))/2;
  int actSum=0;
  for(int i=0;i<n;i++){
    actSum+=arr[i];
  }
  return expSum-actSum;
}
int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
int missing=missingElement(arr);
  cout<<missing;
}