// 2486. Append Characters to String to Make Subsequence

// https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/

/*

You are given two strings s and t consisting of only lowercase English letters.

Return the minimum number of characters that need to be appended to the end of s so that t becomes a subsequence of s.

A subsequence is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.



Example 1:

Input: s = "coaching", t = "coding"
Output: 4
Explanation: Append the characters "ding" to the end of s so that s = "coachingding".
Now, t is a subsequence of s ("coachingding").
It can be shown that appending any 3 characters to the end of s will never make t a subsequence.
Example 2:

Input: s = "abcde", t = "a"
Output: 0
Explanation: t is already a subsequence of s ("abcde").
Example 3:

Input: s = "z", t = "abcde"
Output: 5
Explanation: Append the characters "abcde" to the end of s so that s = "zabcde".
Now, t is a subsequence of s ("zabcde").
It can be shown that appending any 4 characters to the end of s will never make t a subsequence.


*/

#include <iostream>
#include <string>

using namespace std;

// To make t a subsequence of s, we need to find the longest prefix of t that is already a subsequence of s. The remaining characters of t that are not part of this longest prefix will need to be appended to the end of s.

/*
Step 1. Two Pointers Technique:
Use two pointers, one (i) for s and one (j) for t.
Traverse through s and t simultaneously. If characters s[i] and t[j] match, move both pointers forward. If they don’t match, move only the pointer i for s.
The goal is to find how many characters from t we can match in s sequentially.


Step 2. Remaining Characters:
After the traversal, if the pointer j is equal to the length of t, it means all characters in t are matched in s, and no characters need to be appended.
Otherwise, the number of characters that need to be appended is the length of t minus the position of j.


     Time Complexity: O(n + m), where n is the length of s and m is the length of t. This is because we are traversing both strings once.
Space Complexity: O(1), as we are using a constant amount of space for the pointers and no additional data structures.
*/
int appendCharacters(string s, string t)
{
     // Two pointers
     int sIndex = 0;
     int tIndex = 0;

     int sLength = s.length();
     int tLength = t.length();

     while (sIndex < sLength && tIndex < tLength)
     {
          if (s[sIndex] == t[tIndex])
          {
               tIndex++;
          }
          // S index will increase in both case. whether stirng matched or not
          sIndex++;
     }
     return tLength - tIndex;
}

int main()
{
     string s = "z";
     string t = "abcde";

     int result = appendCharacters(s, t);
     cout << "result " << result;
}