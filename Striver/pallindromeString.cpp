/*
#include<iostream>
using namespace std;
void reverse(char *start,char *end){
    if(start>=end)
     return;
    int temp=*start;
    *start=*end;
    *end=temp;
    reverse(start+1,end-1);
}
bool isPalindrome(char *start, char *end) {
    while (start < end) {
        if (*start != *end) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
     char arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    reverse(arr,arr+n-1);
     // Check if the array is a palindrome
    if (isPalindrome(arr, arr + n - 1)) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }
     cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
*/
#include<iostream>
void reverse(char *start,char *end){
    if(start>=end){
        return;
    char temp=*start;
    *start=*end;
    *end=temp;
    reverse(start+1,end-1);       
    }
}
bool isPalindrome(char *start,char *end){
    while(start<end){
    if(*start!=*end){
    return false;
    }
    start++;
    end--;
    }
}
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(isPalindrome(arr,arr+n-1)){
        cout<<"Is pallindrome"<<endl;
    }
    else{
        cout<<"Is not a pallindrome"<<endl;
    }
    cout<<"Reverse array is: "<<endl;
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}