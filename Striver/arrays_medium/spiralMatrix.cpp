/*
01 02 03 04 05 06
20 21 22 23 24 07
19 32 33 34 25 08
18 31 36 35 26 09
17 30 29 28 27 10
16 15 14 13 12 11 
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> spiralMatrix( vector<vector<int>> &matrix){
    int row=matrix.size();
  int col=matrix[0].size();
  vector<int> ans;
  int top=0,left=0,right=col-1,bottom=row-1;
while(top<=bottom && left<=right){
    for(int i=left;i<=right;i++){
    ans.push_back(matrix[top][i]);
  }
  top++;
  for(int i=top;i<=bottom;i++){
      ans.push_back(matrix[i][right]);
  }
  right--;
  for(int i=right;i>=left;i--){
      ans.push_back(matrix[bottom][i]);
  }
  bottom--;
  for(int i=bottom;i>=top;i--){
    ans.push_back(matrix[i][left]);
  }
  left++;
}
return ans;
}
int main(){
  int rows,cols;
  cout<<"Enter rows : ";
  cin>>rows;
  cout<<"Enter cols : ";
  cin>>cols;
   vector<vector<int>> matrix(rows, vector<int>(cols));
   for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      cin>>matrix[i][j];
    }
   }
    cout<<endl;
 cout<<endl;
    vector<int> ans = spiralMatrix(matrix);
    for(int x: ans){
        cout<<x<<" ";
    }
    cout<<endl;
   }