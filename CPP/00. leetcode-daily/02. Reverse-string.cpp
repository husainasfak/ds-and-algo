/*
https://leetcode.com/problems/reverse-string/description/
344. Reverse String
Easy
Topics
Companies
Hint
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.



Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseStringUsingBuiltinFn(vector<char> &s)
{
     reverse(s.begin(), s.end());
}
void reverseString(vector<char> &s)
{
     int size = s.size();
     int start = 0;
     int end = size - 1;
     while (start <= end)
     {
          swap(s[start], s[end]);
          start++;
          end--;
     }
}
int main()
{
     vector<char> s{'h', 'e', 'l', 'l', 'o'};
     reverseStringUsingBuiltinFn(s);

     for (auto x : s)
     {
          cout << x << endl;
     }
     return 0;
}
