// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/
/*
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
Example 2:

Input: s = "azxxzy"
Output: "ay"

*/
#include<iostream>
#include<string>
using namespace std;


// Sol - 1. create new array and check for duplicate adjacent - time - O(N) and space - O(N)
string removeAdjacentDuplicate(string s){
          string ans = "";
        int i = 0;

        while(i< s.length()){
          if(ans.length() > 0 && ans[ans.length()-1] == s[i]){
               ans.pop_back();
          }else{
               ans.push_back(s[i]);
          }
          i++;
        }
        return ans;
}    

int main(){
     string str = "abbaca";
     string result = removeAdjacentDuplicate(str);
     cout << result;
     return 0;
}

// https://leetcode.com/problems/minimize-string-length/description/
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/description/
// https://leetcode.com/problems/removing-stars-from-a-string/description/