// Leet Code 217 - https://leetcode.com/problems/contains-duplicate/description/

// ? Desc - Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


#include<iostream>
#include<vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// Solutions - BruteForce -  time - o(n2) 
bool sol1(vector<int>& arr){
     int size = arr.size();
     for(int i=0; i<size;i++){
          for(int j=i+1; j<size;j++){
               if(arr[i] == arr[j]){
                    return true;
               }
          }
     }
     return false;
}

// Sol-2 sort and check -  time - O(NlogN)
bool sol2(vector<int> arr){
     int size =  arr.size();

     sort(arr.begin(),arr.end());

     for(int i=0; i<size; i++){
          if(arr[i] == arr[i+1]){
               return true;
          }
     }
     return false;
}

// Sol-3 Use hasmap and check -  time - O(N) and space - O(M)

bool sol3(vector<int> arr){
     
}

int main(){
     vector<int> arr{1,2,3,1};

     // bool duplicate = sol1(arr);
     bool duplicate = sol2(arr);
     cout << "Duplicate "<< duplicate;
}

