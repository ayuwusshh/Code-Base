#include <iostream>
using namespace std;
int main()
{
  int arr[] = {12, 3, 0, 4, 0};
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)

  {
    if (arr[i] == 0)
    {
      arr[i + 1] = arr[i];
    }
  }
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    cout << arr[i] << " ";
  }
}/*

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
    int index=-1;
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i-1]<arr[i]){
        index=i-1;
        break;
        }
        }
         if(index==-1){
             reverse(arr.begin(),arr.end());
             return;
         }
         for(int j=arr.size()-1;j>index;j--){
            if(arr[j]>arr[index]){
                 swap(arr[j],arr[index]);
             break;
            }
         }
         reverse(arr.begin()+index+1,arr.end());
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
*/