// https://leetcode.com/problems/palindromic-substrings/description/

/*
Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.



Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
Example 2:

Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".

*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
// Brute force  -  Find all substring and check palindrome and increase the count - Time - O(n3);

// Approach -  2: find odd length substring and check palindrome take O(n2) + find even length substring adn check Palindrome - O(n2) -> Total - O(N2)

int expandAroundIndex(string s, int start, int end)
{
     int length = s.length();
     int count = 0;
     while (start >= 0 && end < length && s[start] == s[end])
     {
          count++;
          start--;
          end++;
     }
     return count;
}

int countSubstrings(string s)
{
     int count = 0;
     int length = s.length();
     for (int i = 0; i < length; i++)
     {
          // for odd legth staring;
          int oddCount = expandAroundIndex(s, i, i);
          count += oddCount;

          int evenCount = expandAroundIndex(s, i, i + 1);
          count += evenCount;
     }
     return count;
}

int main()
{
     string s = "abc";
     int result = countSubstrings(s);
     cout << result;
}