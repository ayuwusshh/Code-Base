
//[1,2,3,4,5,6,7]
//brute
#include<bits/stdc++.h>
using namespace std;
/*vector<int> krotate(vector<int> &arr,int k){
  vector<int> temp;
  int n=arr.size();
  k = k % n;
  for(int i=k;i<n;i++){
    temp.push_back(arr[i]);
    }
  for(int i=0;i<k;i++){
    temp.push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
      arr[i]=temp[i];
    }
    return arr;
}*/
void leftKkrotate(vector<int> &arr,int k){
  int n=arr.size();
  k = k % n;
    if (k == 0) return;
  reverse(arr.begin(),arr.begin()+k);
  reverse(arr.begin()+k,arr.end());
  reverse(arr.begin(),arr.end());
}
void rightKkrotate(vector<int> &arr,int k){
  int n=arr.size();
  k = k % n;
    if (k == 0) return;
  reverse(arr.begin(),arr.end());
  reverse(arr.begin(),arr.begin()+k);
  reverse(arr.begin()+k,arr.end());//
}
int main(){
  int n;
  cout<<"Enter size : ";
  cin>>n;
vector<int> arr(n);
cout<<"Enter array1 elements : ";
for(int i=0;i<n;i++){
  cin>>arr[i];
}
cout<<"Enter array2 elements : ";
vector<int> arr1(n);
for(int i=0;i<n;i++){
  cin>>arr1[i];
}
int k;
cout<<"Enter value of K : ";
cin>>k;
leftKkrotate(arr,k);
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout<<endl;
  rightKkrotate(arr1,k);
    for (int i = 0; i < n; i++){
    cout << arr1[i] << " ";
  }
}