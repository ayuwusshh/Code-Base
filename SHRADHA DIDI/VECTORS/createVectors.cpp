#include <iostream>
#include <vector> // header needed to implement vectors
using namespace std;
int main()
{
  vector<int> vec; // declaring vectors with size 0
  // vector<char> vec(5, 0);                // declaring vectors with size 5 and values 0b
  vec.push_back(1); // adds values at the last index
  vec.push_back(2);
  vec.push_back(3);
  cout << "Size before popping =" << vec.size() << endl;
  // vec.pop_back();                         // delete 3
  cout << "Size= " << vec.size() << endl;     // gives the size of array(vector)
  cout << "Front is " << vec.front() << endl; // shows the first element
  cout << "Last is " << vec.back() << endl;   // shows the last element
  cout << "At 1 is " << vec.at(1) << endl;    // shows the value at given index
  for (int val : vec)                         // stores size not the index
  {
    cout << val << endl;
  }
}
