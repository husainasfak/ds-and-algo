/*
https://leetcode.com/problems/find-common-characters/description/

Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.



Example 1:

Input: words = ["bella","label","roller"]
Output: ["e","l","l"]
Example 2:

Input: words = ["cool","lock","cook"]
Output: ["c","o"]

*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

vector<string> commonChars(vector<string> &words)
{
     const size = words.size();
     unordered_map<char, int> frequency;

     for (int i = 0; i < size; i++)
     {
          string singleWord = words[i];
          for (auto x : singleWord)
          {
          }
     }
}

int main()
{
     vector<int> input{"bella", "label", "roller"};

     commonChars(input);
     return 0;
}