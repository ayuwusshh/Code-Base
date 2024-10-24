#include<bits/stdc++.h>
using namespace std;
//inserting a single element in the vector.
void insert(){
    vector<int> v(2,101);
    v.insert(v.begin(),99);
    v.insert(v.end(),101);
    v.insert(v.begin()+1,3,100);
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<endl;
    }
}
//inserting a vector in other vector
void insertVec(){
    cout<<"inserting a vector in other vector"<<endl;
    vector<int>v1(3,49);
    vector<int>copy(2,50);
    v1.insert(v1.begin()+1,copy.begin(),copy.end());
     for(auto it=v1.begin();it!=v1.end();it++){
        cout<<*(it)<<endl;
    }
}
//swapping two vectors
void swap(){
    vector<int>v1;
    v1.push_back(10);
    v1.emplace_back(20);
    vector<int>v2;
    v2.push_back(30);
    v2.emplace_back(40);
    cout<<"old V1 is ";
    for(auto it=v1.begin();it!=v1.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    v1.swap(v2);
    //v2.swap(v1);
     cout<<"new V1 is ";
    for(auto it=v1.begin();it!=v1.end();it++){
        cout<<*(it)<<" ";
    }
    
}
int main(){
  //  insert();
   // insertVec();
   swap();
    return 0;
}