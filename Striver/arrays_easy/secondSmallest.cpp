#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int getSecondSmalles(vector<int> &arr) {
  int n=arr.size()-1;
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=0;i<n;i++){
      if(arr[i]<smallest){
        ssmallest=smallest;
        smallest=arr[i];
      }
      else if(arr[i]!=smallest && arr[i]<ssmallest){
        ssmallest=arr[i];
      }
    }
    return ssmallest;
}
int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout<<getSecondSmalles(arr);
    return 0;
}