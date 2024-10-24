#include<bits/stdc++.h>
using namespace std;
void print(){
    cout<<"Ayush"<<endl;
}
int sum(int a,int b){
    return a+b; 
}
//initialising pairs
void expPair(){
     pair<int,int> p=make_pair(8,9);
    cout<<p.first<<" "<<p.second<<endl;
}
//nested pair
void expPairr(){
    pair<int,pair<int,int>> q=make_pair(5,make_pair(7,6));
        cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;
}
int main(){
    print();
    int s=sum(5,6);
    cout<<s<<endl;
    expPair();
    expPairr();
    return 0;
    }