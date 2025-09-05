#include<bits/stdc++.h>
using namespace std;
void intersectionOfArray(vector<int> &arr1,vector<int> &arr2,vector<int> &res){
  int a1=arr1.size();
  int a2=arr2.size();
  int i=0,j=0;
  // arr1= [1 2 2 3 3 4 5 6]
  // arr2=[2 3 3 5 6 6 7]  
  while(i<a1 && j<a2){
   if(arr1[i]<arr2[j]) i++;
   else if(arr1[i]>arr2[j]) j++;
   else{
    res.push_back(arr1[i]);
    i++,j++;
   }
  }
}
int main(){
  int n;
  int m;
  cout<<"Enter size of Array 1 : ";
  cin>>n;
  vector<int> arr1(n);
 
   vector<int> res;
  cout<<"Enter array1 elements : ";
  for(int i=0;i<n;i++){
  cin>>arr1[i];
  }
  cout<<"Enter size of Array 2 : ";
  cin>>m;
   vector<int> arr2(m);
  cout<<"Enter array2 elements : ";
  for(int i=0;i<m;i++){
  cin>>arr2[i];
}
sort(arr1.begin(),arr1.end());
sort(arr2.begin(),arr2.end());
intersectionOfArray(arr1,arr2,res);
  for(int k=0;k<res.size();k++){
  cout<<res[k]<<" ";
}
return 0;
}