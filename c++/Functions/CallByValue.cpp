#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}
int main(){
    int x=20,y=60;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    return 0;
}