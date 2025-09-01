#include<bits/stdc++.h>
using namespace std;
int appearedOnce(vector<int> &arr){
int n=arr.size();
unordered_map<long long,int> freq;
for(auto num:arr){
  freq[num]++;
}
  for(auto &pair:freq){
    if(pair.second==1){
      return pair.first;
    }
  }
  return -1;
}
int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int one=appearedOnce(arr);
  cout<<one;
  return 0;
}