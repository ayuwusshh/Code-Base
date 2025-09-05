#include<bits/stdc++.h>
using namespace std;
/*pair<int,int> twoSum(vector<int> &arr,int target){
    map<int,int> m;
    int n=arr.size();
    for(int i=0;i<n;i++){
      int rem=target-arr[i];
      if(m.find(rem)!=m.end()){
        return {m[rem],i};
      }
      m[arr[i]] = i;
    }
    return {-1,-1};
}*/
pair<int,int> twoSum(vector<int> &arr,int target){
  int n=arr.size();
  sort(arr.begin(),arr.end());
  int i=0,j=n-1;
  while(i<j){
    int sum=arr[i]+arr[j];
    if(sum<target){
      i++;
    }
    else if(sum>target){
      j--;
    }
    else{
      return {i,j};
    }
  }
  return {-1,-1};
}
int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cin>>target;
   pair<int,int> ans = twoSum(arr, target);
    if(ans.first == -1) cout << "No solution found";
    else cout << ans.first << " " << ans.second;
  return 0;
}