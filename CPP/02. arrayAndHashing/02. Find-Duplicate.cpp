// Leet Code 287 - https://leetcode.com/problems/find-the-duplicate-number/description/

// ? Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// ? There is only one repeated number in nums, return this repeated number.

// ?  You must solve the problem without modifying the array nums and uses only constant extra space.

#include<iostream>
#include<vector>
#include <algorithm>
#include <cmath> 
using namespace std;

/*

* Sol - 1. Sort the array and check that a[i] and a[i+1] is same then it a[i] is repeated value.
     for sorting O(NlogN), for checking O(N)
     Complexity -  O(NlogN)
*/
int sol1(vector<int> arr){
     sort(arr.begin(),arr.end());

     for(auto i:arr){
          if(arr[i] == arr[i+1]){
               return arr[i];
          }
     }
     return -1;
}

/*

* Sol - 2. Visiting every index and mark them visited. If we visit, visited node than it will be repeating value. Array N+1 so we can use their elemenet as index as well.
     
*/


int sol2(vector<int> arr){
     int arraySize =  arr.size();
     int visited = -1;

     for(int i = 0; i<arraySize; i++){
          
          int index = abs(arr[i]);

          // Already visited
          if(arr[index] < 0){
               return index;
          }

          // Mark negative or visited
          arr[index] *= visited;
     }
     return visited;
}

/*
 * sol - 3. Swapping the element to its index and check that element is already presenet there or not.
*/

int sol3(vector<int> arr){
     int index = arr[0];  // always pointing to 1st element

     while(index != arr[index]){
          swap(index,arr[index]);
     }
     return index;
}

/*

     * Sol - 4. using Binary Search

     1. Define a range for binary search between 1 and n (inclusive).
     2. For each mid value, count the number of elements in the array that are less than or equal to the mid value.
     3. If the count is greater than the mid value, it implies that the repeated element lies within the range [1, mid], else it lies within the range [mid+1, n]. If the count is greater than the mid value, it indicates that there are more elements than there should be in the range [1, mid]. This suggests that the repeated number lies within this range, as there must be a duplicate number.
     4. Repeat the process until you find the repeated element.

*/
int sol4(vector<int>& arr) {
        int low = 0, high = arr.size(), count;
        
        while(low <=  high)
        {
            int mid = low + (high - low) / 2;
            count = 0;
            
            for(int i : arr)
            {
                if(i <= mid)
                    ++count;
            }
          
               // Right search
            if(count <= mid)
                low = mid + 1;
            else{
               // left search
               high = mid - 1;
            }
               
            
        }
        return low;
}

/*

     !TODO:  Solution - 5. using floyd's Tortoise's Algo. Cycle detection in LL

*/

int main(){
     // vector<int> arr{1,3,4,2,2};
     vector<int> arr{3,1,3,4,2};

     // int repeatedVal = sol1(arr);
     // cout << "Repeating val "<< repeatedVal; 

     // int repeatedVal = sol2(arr);
     // cout << "Repeating val "<< repeatedVal; 

     
     // int repeatedVal = sol3(arr);
     // cout << "Repeating val "<< repeatedVal; 

     int repeatedVal = sol4(arr);
     cout << "Repeating val "<< repeatedVal; 
     
     return 0;
}