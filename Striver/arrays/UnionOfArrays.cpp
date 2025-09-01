#include<bits/stdc++.h>
using namespace std;
void unionfind(vector<int> &arr1,vector<int> &arr2,vector<int>&res){
  int a1=arr1.size();
  int a2=arr2.size();
int i=0,j=0;
while(i<a1 && j<a2){
  //if(arr1[i]==arr2[j]) i++,j++;
  if(arr1[i]<=arr2[j]){
   if(res.empty() || res.back()!=arr1[i]){
     res.push_back(arr1[i]);
   }
    i++;
  }else{
     if(res.empty() || res.back()!=arr2[j]){
     res.push_back(arr2[j]);
   }
    j++;
  }
}
  while(j<a2){
if(res.empty() || res.back()!=arr2[j]){
     res.push_back(arr2[j]);
   }
    j++;
  }
  while(i<a1){
 if(res.empty() || res.back()!=arr1[i]){
     res.push_back(arr1[i]);
   }
    i++;
  }
}
int main(){
  int n;
  int m;
  cout<<"Enter size of Array 1 : ";
  cin>>n;
  cout<<"Enter size of Array 2 : ";
  cin>>m;
  vector<int>res;
  vector<int> arr1(n);
  vector<int> arr2(m);

  cout<<"Enter array elements : ";
  for(int i=0;i<n;i++){
  cin>>arr1[i];
  }
  cout<<"Enter array elements : ";
  for(int i=0;i<m;i++){
  cin>>arr2[i];
}
sort(arr1.begin(),arr1.end());
sort(arr2.begin(),arr2.end());
unionfind(arr1,arr2,res);
  for(int k=0;k<res.size();k++){
  cout<<res[k]<<" ";
}
return 0;
}