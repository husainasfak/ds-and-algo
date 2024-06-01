// 3110 - https://leetcode.com/problems/score-of-a-string

/*
You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.

Return the score of s.



Example 1:

Input: s = "hello"

Output: 13

Explanation:

The ASCII values of the characters in s are: 'h' = 104, 'e' = 101, 'l' = 108, 'o' = 111. So, the score of s would be |104 - 101| + |101 - 108| + |108 - 108| + |108 - 111| = 3 + 7 + 0 + 3 = 13.

Example 2:

Input: s = "zaz"

Output: 50

Explanation:

The ASCII values of the characters in s are: 'z' = 122, 'a' = 97. So, the score of s would be |122 - 97| + |97 - 122| = 25 + 25 = 50.


*/

#include <iostream>
#include <string>

using namespace std;

// Brute force - slow submission
int sol1(string s)
{
     int length = s.length();
     int sum = 0;
     for (int i = 0; i < length - 1; i++)
     {
          int c = s[i];
          int adjacent = s[i + 1];
          int absoluteDiff = abs(c - adjacent);
          sum += absoluteDiff;
     }
     return sum;
}

// abs function causing more time to submit

int sol2(string s)
{
     int length = s.length();
     int sum = 0;
     for (int i = 0; i + 1 <= length - 1; i++)
     {
          int a = s[i];
          int b = s[i + 1];
          if (a > b)
          {
               sum += a - b;
          }
          else
          {
               sum += b - a;
          }
     }
     return sum;
}

int main()
{
     string s = "hello";
     int score = sol2(s);
     cout << score;
     return 0;
}