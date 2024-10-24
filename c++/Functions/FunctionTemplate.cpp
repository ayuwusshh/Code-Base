#include<iostream>
using namespace std;

template<class T>
T maxx(T a,T b){
    return (a>b)?a:b;
}
int main(){
 cout<<maxx(15,4)<<endl;
 cout<<maxx(15.5,4.6)<<endl;
return 0;
}
