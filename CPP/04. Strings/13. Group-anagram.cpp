/*
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.



Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]]

*/
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

vector<vector<string>> sol1(vector<string> &strs)
{
     unordered_map<string, vector<string>> group;

     for (auto str : strs)
     {
          string word = str;
          sort(word.begin(), word.end());
          group[word].push_back(str);
     }
     vector<vector<string>> ans;

     for (auto x : group)
     {
          ans.push_back(x.second);
     }
     return ans;
}

int main()
{
     vector<string> strs{"eat", "tea", "tan", "ate", "nat", "bat"};

     bool isAnagram = sol1(strs);
     cout << isAnagram;
}