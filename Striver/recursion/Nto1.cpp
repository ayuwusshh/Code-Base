#include<bits/stdc++.h>
using namespace std;
void f(int n,int i){
  if(i>n) return;
  f(n,i+1);
  cout<<i<<' ';
}
int main(){
  int n,i;
  cin>>n;
  f(n,1);
}
