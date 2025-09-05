#include<bits/stdc++.h>
using namespace std;
int removeDup(vector<int> &arr){
  int n=arr.size();
  int i=0;
  for(int j=1;j<n;j++){
    if(arr[j]!=arr[i]){
      arr[i+1]=arr[j];
      i++;
    }
  }
  return i+1;
}
int main(){
int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
   sort(arr.begin(), arr.end());

    removeDup(arr);

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

}