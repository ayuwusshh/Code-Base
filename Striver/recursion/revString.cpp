#include<bits/stdc++.h>
using namespace std;
void rev(string &s,int n,int i){
  if(i>=n/2) return;
  swap(s[i],s[n-i-1]);
  rev(s,n,i+1);
}
int main(){
  string s;
  cin>>s;
  int n=s.size();
  rev(s,n,0);
  cout<<s;
}