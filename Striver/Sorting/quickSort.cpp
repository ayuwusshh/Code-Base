#include<iostream>
#include<vector>
using namespace std;
int func(vector<int> &ans,int low,int high){
  //  [3 1 2 4 1 5 2 6 4]
  int pivot=ans[low];
  int i=low;
  int j=high;
  while(i<j){
    while(ans[i]<=pivot && i<=high-1){
      i++;
    }
    while(ans[j]>pivot && j>=low+1){
      j--;
    }
       if(i<j){
        swap(ans[i],ans[j]);
       }
  }
  swap(ans[low],ans[j]);
  return j;
}
void quickSort(vector<int> &ans,int low,int high){

  if(low<high){
    int partitionIndex=func(ans,low,high);
    quickSort(ans,low,partitionIndex-1);
    quickSort(ans,partitionIndex+1,high);
  }
}
int main(){
  int n;
  cin>>n;
  vector<int> ans(n);
  for(int i=0;i<n;i++){
    cin>>ans[i];
  }
  quickSort(ans,0,n-1);
  cout<<"Sorted array elements : ";
  for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
  }
}