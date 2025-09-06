#include<bits/stdc++.h>
using namespace std;
/*void reArrange(vector<int> &arr){
  int n=arr.size();
  vector<int> pos(n/2);
  vector<int> neg(n/2);
  int p=0,q=0;
  for(int i=0;i<n;i++){
    if(arr[i]>0){
     pos[p++]=arr[i];
    }
    else{
      neg[q++]=arr[i];
    }
  }
  for(int j=0;j < pos.size() && j < neg.size();j++){
    arr[j*2]=pos[j];
    arr[j*2+1]=neg[j];
  }
}*/
void reArrange(vector<int> &arr){
  int n=arr.size();
  vector<int>ans(n);
  int negg=1,poss=0;
  for(int i=0;i<n;i++){
    if(arr[i]>=0) {
      ans[poss]=arr[i];
      poss+=2;
    }
    else{
      ans[negg]=arr[i];
      negg+=2;
    }
  }
  arr=ans;
}
  int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
   reArrange(arr);
     for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  }