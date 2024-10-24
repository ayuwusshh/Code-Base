#include<iostream>
using namespace std;
int main(){
  /* int *p = new int[50];
    p[0]=(5);
    p[1]=(6);
    cout<<p[0]<<endl;
    delete p;
    p=nullptr;*/ 

    /*
    int a[20];          size of array cannot be changed in stack
    a[21];*/

// we can do it in heap.
    int size;
    cout<<"Enter the size"<<endl;
    cin >> size;
    int *p = new int[size];

    cout<<"Enter the new size"<<endl;
    cin>>size;
    p=new int[size];
    return 0;
}