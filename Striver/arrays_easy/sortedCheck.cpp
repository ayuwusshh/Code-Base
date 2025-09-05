#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int> &arr){
  for(int i=1;i<=arr.size()-1;i++){
    if(arr[i]<arr[i-1])return false;
  }
  return true;
}
int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  if(isSorted(arr))
        cout << "YES";
    else
        cout << "NO";
}