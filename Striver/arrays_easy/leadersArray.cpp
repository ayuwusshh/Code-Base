#include<bits/stdc++.h>
using namespace std;
vector<int> leaders( vector<int> &arr ){
  int n=arr.size();
  vector<int> ans;
  // 10 22 12 3 0 6
  int maxi=INT_MIN;
  for(int i=n-1;i>=0;i++){
    if(arr[i]>=maxi){
      ans.push_back(arr[i]);
      maxi=max(arr[i],maxi);
    }
  }
  sort(ans.begin(),ans.end());
  return ans;
}
  int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  leaders(arr);
   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
  cout << endl;

}