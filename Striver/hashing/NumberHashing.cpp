#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    cout << "Frequency of each number from 0 to 12 in the input array:" << endl;
    for (int i = 0; i < 13; i++) {
        if (hash[i] > 0) {
            cout << "Number " << i << ": " << hash[i] << " times" << endl;
        }
    }
    int q;
    cout<<"Enter number of querries ";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter number to querry ";
        cin>>number;
       // cout<<hash[number]<<endl;
       if(number<0 || number>12){
        cout<<"Number out of range ";
       }
       else{
        cout<<"Number "<<number<<" appears "<<hash[number]<<" times "<<endl;
       }
    }
}