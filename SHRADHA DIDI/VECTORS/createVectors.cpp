#include <iostream>
#include <vector>                           // header needed to implement vectors
using namespace std;
int main()
{
  vector<char> vec(5, 0);                // declaring vectors with size 5 and values 0
  cout << "Size= "<<vec.size()<<endl;   //gives the size of array(vector)
  for (int val : vec)                  //stores size not the index
  {
    cout << val << endl;
  }
}