#include<iostream>
using namespace std;
void reverse(int *start,int *end){
    if(start>=end)
     return;
    int temp=*start;
    *start=*end;
    *end=temp;
    reverse(start+1,end-1);
}
int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    reverse(arr,arr+n-1);
     cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}