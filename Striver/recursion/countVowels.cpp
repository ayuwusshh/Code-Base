#include<bits/stdc++.h>
using namespace std;
void vowels(string &s,int n,int i,int &count){
char ch= tolower(s[i]);
  if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
    count++;
  }
  if(i==n) return;
   vowels(s,n,i+1,count);
}
int main(){
  int count=0;
string s;
cin>>s;
int n=s.size();
vowels(s,n,0,count);
cout<<count;
}