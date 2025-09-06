#include<bits/stdc++.h>
using namespace std;
/*int majorityElement( vector<int> &arr){
  int n=arr.size();
  for(int i=0;i<n-1;i++){
    int count=0;
    for(int j=i+1;j<n;j++){
      if(arr[j]==arr[i]){
        count++;
      }
    }
    if(count>=n/2) return arr[i];
  }
  return -1;
}*/
int majorityElement( vector<int> &arr){
  int n=arr.size();
  map<int,int> m;
  for(auto num:arr){
    m[num]++;
  }
  for(auto it:m){
    if(it.second>n/2){
      return it.first;
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
cout<< majorityElement(arr);

  }