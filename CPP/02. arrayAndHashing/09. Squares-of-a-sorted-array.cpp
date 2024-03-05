// https://leetcode.com/problems/squares-of-a-sorted-array/description
/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.



Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

*/

#include <iostream>
#include <vector>
using namespace std;

// Approach - 1. just square each element O(N) times and store in the different array after that sort the array in O(NlogN) time.  total time - O(NlogN)

// Apprach  - 2. Two pointer approach. Time - O(N) and Space - O(n)

vector<int> sortedSquares(vector<int> &nums)
{
     int size = nums.size();
     // array for storing sorted squares of size nums
     vector<int> squares(size);

     int left = 0;
     int right = size - 1;
     int highestIndex = size - 1;
     while (left <= right)
     {
          int leftSquare = nums[left] * nums[left];
          int rightSquare = nums[right] * nums[right];

          if (rightSquare > leftSquare)
          {
               squares[highestIndex] = rightSquare;
               highestIndex--;
               right--;
          }
          else
          {
               squares[highestIndex] = leftSquare;
               highestIndex--;
               left++;
          }
     }
     return squares;
}
int main()
{
     vector<int> nums = {-4, -1, 0, 3, 10};
     vector<int> result = sortedSquares(nums);

     for (auto i : result)
     {
          cout << i << endl;
     }
}