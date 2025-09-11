#include<bits/stdc++.h>
using namespace std;
void rotateMatrix(static vector<vector<int>> &matrix){

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
   rotateMatrix(matrix);
    for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      cout<<matrix[i][j]<<" ";
    }
   }
}