#include<bits/stdc++.h>
using namespace std;
//vector
void expVector(){
   vector<int> v; 
   v.push_back(1);// add values to the vector.
   v.emplace_back(2);
   v.emplace_back(3);
   v.emplace_back(4);//increase vector size and add element in the end.
   for(auto it=v.begin();it!=v.end();it++){ // vector<int>::iterator = auto
  cout<<*(it)<<" ";
  }
    cout<<endl;
 //  v.erase(v.begin()+1);//deleting one element
   v.erase(v.begin()+1,v.begin()+2);
 /// for(vector<int>::iterator it=v.begin();it!=v.end();it++){
 for(auto it=v.begin();it!=v.end();it++){ // vector<int>::iterator = auto
  cout<<*(it)<<" ";
  }
  cout<<endl;
}
//pair vector
void pairVector(){
      vector<pair <int,int>>vec;
    vec.push_back({5,6});
    vec.emplace_back(7,8);
    vec.emplace_back(9,10);
    vec.emplace_back(11,12);
     for(auto it=vec.begin();it!=vec.end();it++){
    cout<<"("<<it->first<<" "<<it->second<<")"<<endl;
   } 
    vec.erase(vec.begin());//deleting one element
      for(auto it=vec.begin();it!=vec.end();it++){
    cout<<"("<<it->first<<" "<<it->second<<")"<<endl;
   } 
}
void Clear(){
    cout<<"Implementing clear function "<<endl;
       vector<int> V; 
   V.emplace_back(2);
   V.emplace_back(3);
   V.push_back(1);
   V.emplace_back(4);
      vector<int> v; 
   V.push_back(1);// add values to the vector.
   V.emplace_back(2);
   V.emplace_back(3);
   V.emplace_back(4);
   V.clear();
}
int main(){
    expVector();
    pairVector();
    Clear();
    return 0;
}