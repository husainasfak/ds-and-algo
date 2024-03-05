// https://leetcode.com/problems/valid-palindrome-ii/description/

/*
    Given a string s, return true if the s can be palindrome after deleting at most one character from it.
     Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool checkPalindrome(string s, int start, int end)
{
     while (start <= end)
     {
          if (s[start] != s[end])
          {
               return false;
          }
          else
          {
               start++;
               end--;
          }
     }
     return true;
}

bool isPalindrome(string s)
{
     int start = 0;
     int end = s.length() - 1;
     while (start <= end)
     {
          if (s[start] != s[end])
          {
               return checkPalindrome(s, start + 1, end) || checkPalindrome(s, start, end - 1);
          }
          else
          {
               start++;
               end--;
          }
     }
     return true;
}

int main()
{
     string str = "abc"; // abca, aba
     bool result = isPalindrome(str);
     cout << result;
}

// 3. https://leetcode.com/problems/valid-palindrome-iii/description/
// 4. https://leetcode.com/problems/valid-palindrome-iv/description/