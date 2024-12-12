#include<iostream>
using namespace std;
int main(){
  int arr[]={2,4,0,-5,8,17,3,6};
  int n=8;
  int max=0;
  int min=0;
  for (int i = 0; i < n; i++)
  {
    if(arr[i]<arr[min]){
      min=i;
    }
    if(arr[i]>arr[max]){
      max=i;
    }
  }
  cout<<"Max index :"<<max<<endl;
  cout<<"Min index :"<<min;
}