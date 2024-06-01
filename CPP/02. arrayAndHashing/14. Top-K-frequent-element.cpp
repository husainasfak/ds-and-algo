/*
347. https://leetcode.com/problems/top-k-frequent-elements/description/
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.



Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// 1 - Solution one can be using map and sort the frequency
// 2 - using Max heap and pop element exactly k times
// 3 - Bucket sort

vector<int> sol1(vector<int> &nums, int k)
{

     // Create Hashmap to count the frequency of each element
     unordered_map<int, int> frequency;

     for (auto x : nums)
     {
          frequency[x]++;
     }

     // create a bucket where index represent frequency
     int size = nums.size();
     vector<vector<int>> buckets(size + 1);

     for (auto &map : frequency)
     {
          buckets[map.second].push_back(map.first);
     }

     // Collect the top K elements
     vector<int> result;
     for (int i = size; i >= 0 && result.size() < k; --i)
     {
          for (int num : buckets[i])
          {
               result.push_back(num);
               if (result.size() == k)
               {
                    break;
               }
          }
     }
     return result;
}
int main()
{
     vector<int> nums{1, 1, 1, 2, 2, 3};
     int k = 2;
     vector<int> result = sol1(nums, k);

     for (auto i : result)
     {
          cout << i;
     }
}