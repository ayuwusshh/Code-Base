 #include<bits/stdc++.h>
 using namespace std;
 /*better O(N^2)
  int longest(vector<int> &arr,int target){
  //  1 2 3 1 1 1 1 4 2 3
  int n=arr.size();
  int mxLen=0;
  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
      sum+=arr[j];
      if(sum==target){
        mxLen=max(mxLen,j-i+1);
      }
    }
  }
  return mxLen;
 }*/

 //better approach 
 /* int longest(vector<int> &arr,int target){
    int n=arr.size();
    long long sum;
    map<long long,int> prefixMap;
    int mxLen=0;
    for(int i=0;i<n;i++){
      sum+=arr[i];
      if(sum==target){
        mxLen=max(mxLen,i+1);
      }
      int rem=sum-target;
      if(prefixMap.find(rem)!=prefixMap.end()){
        int len=i-prefixMap[rem];
        mxLen=max(mxLen,len);
      }
      prefixMap[sum]=i;
    }
    return mxLen;
  }
 */
#include <bits/stdc++.h>
using namespace std;

int longest(vector<int> &arr, int target) {
    int n = arr.size();
    int i = 0, j = 0;
    long long sum = 0;
    int mxLen = 0;

    while (j < n) {
          sum += arr[j];
        while (i <= j && sum > target) {
            sum -= arr[i];
            i++;
        }
        if (sum == target) {
            mxLen = max(mxLen, j - i + 1);
        }
        j++;
    }
    return mxLen;
}

int main() {
    int n, target;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;

    cout << longest(arr, target);
    return 0;
}
