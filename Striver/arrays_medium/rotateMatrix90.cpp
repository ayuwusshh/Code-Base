#include<bits/stdc++.h>
using namespace std;
// brute
/* vector<vector<int>> rotateMatrix(const vector<vector<int>> &matrix){
int r=matrix.size();
int c=matrix[0].size();
    vector<vector<int>> rotated(c,vector<int>(r)); 
for(int i=0;i<r;i++){
  for(int j=0;j<c;j++){
    rotated[j][r-1-i]=matrix[i][j];
  }
}
return rotated;
}
*/
vector<vector<int>> rotateMatrix( vector<vector<int>> &matrix){
int r=matrix.size();
for(int i=0;i<r-1;i++){
  for(int j=i+1;j<r;j++){
    swap(matrix[i][j],matrix[j][i]);
  }
}
  for(int i=0;i<r;i++){
    reverse(matrix[i].begin(),matrix[i].end());
  }
return matrix;
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
     vector<vector<int>> rotated = rotateMatrix(matrix);
       for(int i=0;i<rotated.size();i++){
    for(int j=0;j<rotated[0].size();j++){
      cout<<rotated[i][j]<<" ";
    }
    cout<<endl;
   }
}