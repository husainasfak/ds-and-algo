/*
link - https://leetcode.com/problems/two-sum/description/
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

*/

/*
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// Brute force

vector<int> sol1(vector<int> &nums, int target)
{
     int size = nums.size();
     for (int i = 0; i < size; i++)
     {
          int element = nums[i];
          for (int j = i + 1; j < size; j++)
          {
               if (element + nums[j] == target)
               {
                    return {i, j};
               }
          }
     }
     return {-1, -1};
}

// Hashmap
/*
1. Create empty unordered_map <index, element>
2. Iterate through the array from L to R
3. For each nums[i], calculate the complement = target - nums[i].
4. Check complement exist on the hash table or not.
     1. If found the complement, we got the our solution
     2. If not, then push the element nums[i] to hash table

This approach has a time complexity of O(n) since hash table lookups take constant time on average. It allows us to solve the Two Sum problem efficiently by making just one pass through the array.
*/
vector<int> sol2(vector<int> &nums, int target)
{
     unordered_map<int, int> map;
     int size = nums.size();
     for (int i = 0; i < size; i++)
     {
          int element = nums[i];
          int complement = target - nums[i];

          if (map.find(complement) != map.end())
          {
               return {i, map[complement]};
          }

          map[nums[i]] = i;
     }
}

int main()
{
     // vector<int> arr{2, 7, 11, 15};
     vector<int> arr{3, 3};

     int target = 6;
     vector<int> result = sol2(arr, target);

     for (auto i : result)
     {
          cout << i << endl;
     }
}