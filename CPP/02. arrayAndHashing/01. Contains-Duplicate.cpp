// Leet Code 217 - https://leetcode.com/problems/contains-duplicate/description/

// ? Desc - Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// Solutions - BruteForce -  time - o(n2)
bool sol1(vector<int> &arr)
{
     int size = arr.size();
     for (int i = 0; i < size; i++)
     {
          for (int j = i + 1; j < size; j++)
          {
               if (arr[i] == arr[j])
               {
                    return true;
               }
          }
     }
     return false;
}

// Sol-2 sort and check -  time - O(NlogN)
bool sol2(vector<int> arr)
{
     int size = arr.size();

     sort(arr.begin(), arr.end());

     for (int i = 0; i < size; i++)
     {
          if (arr[i] == arr[i + 1])
          {
               return true;
          }
     }
     return false;
}

// Sol-3 Use hasmap and check -  time - O(N) and space - O(M)

/*
The hash map approach is similar to the hash set approach but also keeps track of the count of occurrences for each element. It uses a hash map to store the elements as keys and their counts as values. If a duplicate element is encountered (count greater than or equal to 1), it returns true. This approach provides more information than just the presence of duplicates and has a time complexity of O(n).


In this approach, we iterate through the array and store each element as a key in a hash map. The value associated with each key represents the count of occurrences of that element. If we encounter an element that already exists in the hash map with a count greater than or equal to 1, we return true, indicating that a duplicate has been found. Otherwise, we update the count of that element in the hash map. If we complete the iteration without finding any duplicates, we return false.

*/

bool sol3(vector<int> arr)
{
     unordered_map<int, int> seen;
     for (int num : nums)
     {
          if (seen[num] >= 1)
               return true;
          seen[num]++;
     }

     return false;
}

// sol-4 Use Has set method

/*
The hash set approach uses a hash set data structure to store encountered elements. It iterates through the array, checking if an element is already in the set. If so, it returns true. Otherwise, it adds the element to the set. This approach has a time complexity of O(n) and provides an efficient way to check for duplicates.

A more efficient approach is to use a hash set data structure to store the encountered elements. While iterating through the array, if an element is already present in the hash set, return true. Otherwise, add the element to the hash set. If the loop completes without finding any duplicates, return false.

time - O(n)
*/

bool sol4(vector<int> &arr)
{
     unordered_set<int> seen;
     for (int num : arr)
     {
          if (seen.count(num) > 0)
               return true;

          seen.insert(num);
     }
     return false;
}

int main()
{
     vector<int> arr{1, 2, 3, 1};

     // bool duplicate = sol1(arr);
     bool duplicate = sol4(arr);
     cout << "Duplicate " << duplicate;
}
