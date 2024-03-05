// https://www.codingninjas.com/studio/problems/pair-sum_697295

/*
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

Note: Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

*/


/*
     Thinking -  1. Find all the pairs in the given array
                 2. Check the sum equal to S 

*/

#include<iostream>
#include<vector>
using namespace std;

// Brute force
void sol1(vector<int>& arr){
     int size =  arr.size();
     for(int i = 0; i<size; i++){
          int element = arr[i];
          for(int j = i+1; j<size; j++){
               if(element + arr[j] == 5){
                    cout << "{" <<element <<","<< arr[j] <<"}";
               }
          }
     }
}

int main(){

     vector<int> arr{1,2,3,4,5};
     sol1(arr);

     return 0;
}