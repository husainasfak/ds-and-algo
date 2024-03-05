/*
Unique element in an array where all elements occur k times except one

     Input  : arr[] = {6, 2, 5, 2, 2, 6, 6}
            k = 3
Output : 5
Explanation: Every element appears 3 times accept 5.

Input  : arr[] = {2, 2, 2, 10, 2}
            k = 4
Output: 10
Explanation: Every element appears 4 times accept 10.
*/
#include<iostream>
#include<vector>

using namespace std;

// * Sol-1 XOR of all element. This only works when exactly even time element will repeat

int sol1(vector<int> arr){

     int size =  arr.size();
     int ans = 0;
     for(int i:arr){
          ans ^= i;
     }
     return ans;
}


int main(){
     // vector<int> arr{2, 2, 2, 10, 2};
     vector<int> arr{6, 2, 5, 2, 2, 6, 6};

     int uniqueElement = sol1(arr);
     cout << "Unique Element "<< uniqueElement; 
     
     return 0;
}