#include <bits/stdc++.h>
using namespace std;

int subCount(vector<int> &arr, int target) {
   unordered_map <int,int> prefixSum;
   prefixSum[0]=1;
   int count=0,sum=0;
   for(int i=0;i<arr.size();i++){
    sum+=arr[i];
    int rem=sum-target;
    count+=prefixSum[rem];
    prefixSum[sum]+=1; 
   }
   return count;
}

int main() {
    int n, target;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> target;
    cout << subCount(arr, target);
    return 0;
}
