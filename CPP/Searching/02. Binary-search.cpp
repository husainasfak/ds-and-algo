// ! Binary search work in sorted array only

/* Summary 
 start = 0; end = arraySize - 1
 while (start <= end)
  find mid and comparision with mid 
  comparision 1. equal 2. less than 3. greater than  according to the result move left and right 
  do until loop would break
*/

#include<bits/stdc++.h>
using namespace std;

int binary_search(int *arr, int sizeOfArray, int key){

     int start = 0;
     int end = sizeOfArray - 1;

     while(start <= end){
          // This is not good solution for finding mid. This can cause integer overflow
          // if start = 2^31 -1 and end = 2^31 - 1. then start+end cause integer overflow
          int mid = (start + end)/2;

          // Better solution
          // ! start + (end - start)/2 or start/2 + end/2

          if(arr[mid] == key){
               return mid;
          }
          else if (arr[mid] > key)
          {
               end = mid -1;

          }else{
               start = mid + 1;
          }
          
     }

     return -1;
}


int main(){
     int arr[] = {1};

     int sizeOfArray = sizeof(arr)/sizeof(int);

     int key;  

     cout << " Enter the key" << endl;
     cin >> key; 

     int index = binary_search(arr,sizeOfArray,key);

     if(index == -1){
          cout << "Element not found";
     
     }else{
          cout << "Element found at index "<< index << endl;
     }
     
     return 0;
}

// best case O(1)
// worst case O(lg n)

// every time we half the array 
//  at 1 = n/2 pow(k) solving this we get log n 
// log n steps we could find the element. but only work on sorted space or monotonic (value either dec or inc or same)