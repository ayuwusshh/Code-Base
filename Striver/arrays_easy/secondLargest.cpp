// C++ program to find second largest element in an array
// using Sorting

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// function to find the second largest element

//brute force using sorting O(nlogn+n)
/*int getSecondLargest(vector<int> &arr) {
    int n=arr.size()-1;
    sort(arr.begin(),arr.end());
    int mx=arr[n];
    for(int i=n;i>=0;i--){
      if(arr[i]==mx) continue;
      else if(arr[i]<mx) return arr[i];
    }
    return -1;
}*/

// better approach using 2 passes O(2n)
/*int getSecondLargest(vector<int> &arr) {
    int n=arr.size()-1;
    int mx=arr[0];
    for(int i=0;i<n;i++){
      if(arr[i]>mx){
        mx=arr[i];
      }
    }
    int sm=-1;
      for(int i=0;i<n;i++){
      if(arr[i]>sm && arr[i]!=mx){
        sm=arr[i];
      }
    }
    return sm;
}*/

//optimal approach O(n)
int getSecondLargest(vector<int> &arr) {
    int n=arr.size()-1;
    int l=arr[0],sl=-1;
    for(int i=1;i<n;i++){
      if(arr[i]>l){
        sl=l;
        l=arr[i];
      }
      else if(arr[i]<l && arr[i]>sl){
        sl=arr[i];
      }
    }
    return sl;
}
int main() {
    vector<int> arr = {10, 5, 10};
    cout<<getSecondLargest(arr);
    return 0;
}