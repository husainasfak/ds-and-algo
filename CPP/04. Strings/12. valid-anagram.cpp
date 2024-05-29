/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.



Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false

*/
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <unordered_map>
using namespace std;

// Approach 1 - Sort both strings ascending order or alphabetical order. and compare the string. This approach takes advantage of the fact that anagarams have the same characters, but in diffrent order. time - O(NlgN)
bool sol1(string s, string t)
{
     sort(s.begin(), s.end());
     sort(t.begin(), t.end());
     return s == t;
}

// Approach 2 - Using Hashmap
/*
 -  Create unordered_map and key will be character and the value will be the frequency of character.
 - For string s. increamnet the frequency
 - for string t, decrement the frequency
 - at the end iterate the hashmap and if present any non-zero frequency of the char, that means that string is not valid anagram
- Time -  O(N), space - O(N)
*/
bool sol2(string s, string t)
{
     unordered_map<char, int> frequency;

     for (auto x : s)
     {
          frequency[x]++;
     }

     for (auto x : t)
     {
          frequency[x]--;
     }

     // for (const auto &pair : frequency)
     // {
     //      std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
     // }

     for (auto x : frequency)
     {
          if (x.second != 0)
          {
               return false;
          }
     }
     return true;
}
int main()
{
     string s = "anagram";
     string t = "nagaram";
     // string s = "rat";
     // string t = "car";
     bool isAnagram = sol2(s, t);
     cout << isAnagram;
}