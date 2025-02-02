// 2,2,1,1,1,1,2,2

#include <iostream>
#include <vector>
using namespace std;
vector<int> majorityElement(vector<int> nums)
{
  // ector<int> ans;
  int n = nums.size();
  int count = 0;
  int output = n / 2;
  for (int val : nums)
  {
    for (int el : nums)
    {
      if (el == val)
      {
        count++;
      }
    }
    if (count > output)
    {
      return val;
    }
  }
}
int main()
{
  vector<int> nums = {2, 2, 1, 1, 1, 1, 2, 2};
}