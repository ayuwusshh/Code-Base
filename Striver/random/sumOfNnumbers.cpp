/*
#include<iostream>
using namespace std;
int f(int i,int sum){
    if(i<1){
        cout<<sum;
        return sum;
    }
      return f(i-1,sum+i);  
};
int main(){
    int n;
    cin>>n;
    f(n,0);
    return 0;
}
*/
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n+ sum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}