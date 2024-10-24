#include<iostream>
using namespace std;
int main(){
    int a[5]={2,4,6,8,10};
    int *p=a;           // comtainingthe first element of the array
    int *q=&a[4];
    //1.
    cout<<*p<<endl;
    cout<<endl;
    //2.
    p++;                // moving to the next index
    cout<<*p<<endl;
    cout<<endl;
    //3.
    p--;                // moving to the previous index
    cout<<*p<<endl;
    cout<<endl;
    //4.
    cout<<*(p+3)<<endl; // moving to the desired index
    cout<<endl;
     //5.
    cout<<q-p<<endl;
    cout<<endl;
    // using for loop.
    cout<<endl;
    cout<<"Pointers prev address "<<p<<endl;
    for (int i = 0; i < 5; i++)
    {
       // cout<<p[i]<<endl;       // using pointer name instead of array name.
       cout<<*p<<endl;
       p++;
    }
    cout<<"Pointers new address "<<p<<endl;
    return 0;
}