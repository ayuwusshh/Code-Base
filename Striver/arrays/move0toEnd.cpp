#include<bits/stdc++.h>
using namespace std;
void movezero(vector<int> &ans){
  // [1 0 2 3 2 0 0 4 5 1]
  int n=ans.size();
  int index=0;
    for(int i=0;i<n;i++){
      if(ans[i]!=0){
        ans[index]=ans[i];
        index++;
      }
    }
    while(index<n){
      ans[index]=0;
      index++;
    }
  }
int main(){
int n;
cin>>n;
vector<int> ans(n);
for(int i=0;i<n;i++){
  cin>>ans[i];
}
movezero(ans);
for(int i=0;i<n;i++){
  cout<<ans[i]<<" ";
}
return 0;
}