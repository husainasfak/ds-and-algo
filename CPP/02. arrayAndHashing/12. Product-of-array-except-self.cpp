/*
238. https://leetcode.com/problems/product-of-array-except-self/description/

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.



Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> sol1(vector<int> &nums)
{
     int size = nums.size();
     cout << "size" << size;
     vector<int> prefix(size, 1);
     vector<int> suffix(size, 1);

     for (int i = 1; i < size; ++i)
     {
          prefix[i] = prefix[i - 1] * nums[i - 1];
     }

     for (int i = size - 2; i >= 0; --i)
     {
          suffix[i] = suffix[i + 1] * nums[i + 1];
     }

     vector<int> result(size);

     for (int i = 0; i < size; ++i)
     {
          result[i] = prefix[i] * suffix[i];
     }
     return result;
}
int main()
{
     vector<int> nums{1, 2, 3, 4};

     vector<int> result = sol1(nums);

     for (auto i : result)
     {
          cout << i << ", ";
     }
}