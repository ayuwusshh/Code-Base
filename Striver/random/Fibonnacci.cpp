/*//using loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[100];
    arr[0]=0,arr[1]=1;
    for (int i = 2; i < n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/
//using recursion
#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<fibo(i)<<" ";
  }
}