// https://leetcode.com/problems/valid-palindrome/

/*
    A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.



Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

*/

/*
* By reading the question you may think that first we need to convert the string to desired form and then check if its a valid palindrome or not.

 * But all of that is just distraction you can check valid palindrome by simply using two pointers no need to convert.

If a character is not alphanumeric we can simply ignore it and update our pointer to next character (for both pointers)

and then we check by converting the alphanumeric character to lowercase (tolower() function on numbers has no change)
if those two are not equal then return false(not palindrome)
else update both pointers and continue.

Finally after all checking if reach at last then string must be a valid palindrome so return true
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s)
{
     int start = 0;
     int end = s.length() - 1;
     while (start <= end)
     {
          if (!isalnum(s[start]))
          {
               start++;
               continue;
          }
          if (!isalnum(s[end]))
          {
               end--;
               continue;
          }
          if (tolower(s[start]) != tolower(s[end]))
               return false;
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
     string str = "A man, a plan, a canal: Panama";
     bool result = isPalindrome(str);
     cout << result;
}