#include<bits/stdc++.h>
using namespace std;
int maxOnes(vector<int> &ans){
  int n=ans.size();
  int freq=0;
  int mx=0;
  for(int i=0;i<n;i++){
    if(ans[i]==1){
      freq++;
    }else{
      freq=0;
    }
    mx=max(freq,mx);
  }
  return mx;
}
int main(){
  int n;
  cin>>n;
  vector<int> ans(n);
  for(int i=0;i<n;i++){
    cin>>ans[i];
  }
  int one=maxOnes(ans);
  cout<<one;
  return 0;
}