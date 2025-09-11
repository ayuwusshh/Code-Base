#include<bits/stdc++.h>
using namespace std;
/*
//Bruteforce O(n*m)+(n+m)*n*m
void markRows(int i ,vector<vector <int>> &matrix){
  int n = matrix[0].size();
  for(int j=0;j<n;j++){
    if(matrix[i][j]!=0){
      matrix[i][j]=0;
    }
  }
}
void markCols(int j,vector<vector <int>> &matrix ){
 int m = matrix.size();
  for(int i=0;i<m;i++){
    if(matrix[i][j]!=0){
      matrix[i][j]=0;
    }
  }
}
void sortZeros(vector<vector <int>> &matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        if(matrix[i][j]==0){
          markRows(i,matrix);
          markCols(j,matrix);
        }
      }
    }
     for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        if(matrix[i][j]==0){
          matrix[i][j]=0;
        }
      }
    }
}*/
/* //optimal
void sortZeros(vector<vector <int>> &matrix){
  int m=matrix.size();
  int n=matrix[0].size();
  vector<int> rowTracker(m);
   vector<int> colTracker(n);
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(matrix[i][j]==0){
        rowTracker[i]=0;
        colTracker[j]=0;
      }
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(rowTracker[i]==0 || colTracker[j]==0){
        matrix[i][j]=0;
      }
    }
  }
}*/
void sortZeros(vector<vector <int>> &matrix){
  int m=matrix.size();
  int n=matrix[0].size();
  int col0=1;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(matrix[i][j]==0){
        matrix[i][0]=0;
        if(j!=0){
          matrix[0][j]=0;
        }
        else
        col0=0;
      }
    }
  }
   for(int i=1;i<m;i++){
    for(int j=1;j<n;j++){
      if(matrix[i][j]!=0 ){
        if(matrix[0][j]==0 || matrix[i][0]==0){
          matrix[i][j]=0;
        }
      }
    }
  }
  if(matrix[0][0]==0){
    for(int j=0;j<n;j++) matrix[0][j]=0;
  }
  if(col0==0){
    for(int i=0;i<m;i++) matrix[i][0]=0;
  }
}
int main(){
  int n,m;
  cout<<"Rows : ";
  cin>>m;
  cout<<"Cols : ";
  cin>>n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        cin>>matrix[i][j];
      }
    }
      sortZeros(matrix);

    cout << "Result:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}