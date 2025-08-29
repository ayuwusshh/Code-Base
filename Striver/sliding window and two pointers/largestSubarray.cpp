#include<bits/stdc++.h>
using namespace std;
//brute O(n^2)
/*

int sum(vector<int> &ans,int target,int n){
  int mxLen=0;
  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
      sum+=ans[j];
      if(sum<=target){
        mxLen=max(mxLen,j-i+1);
      }
    }
    return mxLen;
  }
} */

//better O(2n)
/*int sum(vector<int> &ans,int target,int n){
  int mxLen=0;
    //[10, 5, 2 ,7, 1, -10]
    int i=0,j=0;
   while(j<n){
    int sum=0;
    sum+=ans[j];
    while(sum>target){
      sum-=ans[j];
      i++;
    }
    if(sum<target){
      mxLen=max(mxLen,j-i+1);
    }
    j++;
   }
    return mxLen;
}*/

//optimal O(n)
int sum(vector<int> &ans,int target,int n){
  int mxLen=0;
    //[10, 5, 2 ,7, 1, -10]
    int i=0,j=0;
   while(j<n){
    int sum=0;
    sum+=ans[j];
    if(sum>target){
      sum-=ans[j];
      i++;
    }
    if(sum<target){
      mxLen=max(mxLen,j-i+1);
    }
    j++;
   }
    return mxLen;
}
int main(){
  int n;
  cout<<"Enter the size :";
  cin>>n;
  vector<int> ans(n);
  cout<<"Enter array elements :"<<endl;
  for(int i=0;i<n;i++){
    cin>>ans[i];
  }
  int target;
  cout<<"Enter target :";
  cin>>target;
  cout<<sum(ans,target,n);
  return 0;
}