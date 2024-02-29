// NOON -> left to right and right to left is same. Palindrome string

// Sol - 1 compare each char from original string with reverse of the original string
#include<iostream>
#include <algorithm>
#include<cstring>
using namespace std;

// Sol - 1 O(N) and space O(N)
bool isPalindrome(char arr[]){
     int length = strlen(arr);
     char reversed[length - 1];
     strcpy(reversed,arr);
     // reverse(str.begin(),str.end()); // work on string
     strrev(reversed);

     for (int i = 0; i < length; ++i) {
        if (arr[i] != reversed[i]) {
            return false; // Not a palindrome
        }
    }
    return true;
}

// Sol - 2 Two pointer Time -> O(N) and Space -> O(1)

bool sol2(char arr[]){
     int start = 0;
     int end =  strlen(arr) - 1;

     while(start<=end){
          if(arr[start] != arr[end]){
               return false;
          }
          start++;
          end--;
     }
     return true;
     
}

int main(){
     char name[100] = "racecar";

     bool palin = sol2(name);
     cout << palin; // 1 -> true, 0-> false
     return 0;
}