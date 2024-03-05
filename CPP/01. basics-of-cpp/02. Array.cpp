#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
     cout<<"size of array in this function "<<sizeof(arr) << endl; 
     // ! Array passed by reference so this would print size of address not actual array size (only address passed not actual array and both array share the common memory address)

     // ? good practice is that pass size of array along with actual array

     // ? int * arr or int arr[]

     for(int i =0; i<size; i++){
          cout << arr[i] << endl;
     }
}


int main(){
     // ! Creating array
     int arr[] = {1,2,3,4,5,6};
     
     int sizeOfArray = sizeof(arr)/sizeof(int);

     cout <<"size of the array" << sizeOfArray << endl;

     printArray(arr,sizeOfArray);

     return 0;
}

/*

Array holds value of the same type at contigous memeory location. we're usually concerned about two things - the position/index of an element and the element itself.

Advantages

     Store multiple elements of the same type with one single variable name
     Accessing elements is fast as long as you have the index, as opposed to linked lists where you have to traverse from the head.

Disadvantages

     Addition and removal of elements into/from the middle of an array is slow because the remaining elements need to be shifted to accommodate the new/missing element. An exception to this is if the position to be inserted/removed is at the end of the array.

     For certain languages where the array size is fixed, it cannot alter its size after initialization. If an insertion causes the total number of elements to exceed the size, a new array has to be allocated and the existing elements have to be copied over. The act of creating a new array and transferring elements over takes O(n) time.


Common terms - 

Subarray - A range of contiguous values within an array.
Example: given an array [2, 3, 6, 1, 5, 4], [3, 6, 1] is a subarray while [3, 1, 5] is not a subarray.


Subsequence - A sequence that can be derived from the given sequence by deleting some or no elements without changing the order of the remaining elements.
Example: given an array [2, 3, 6, 1, 5, 4], [3, 1, 5] is a subsequence but [3, 5, 1] is not a subsequence.

*/

// Traverse - O(n)
// Accessing - O(1)
// Search  -  Linear - O(n)
// Serach - Sorted Array - O(logN)
// Insert -  O(N), at the end - O(1)
// Remove - O(N), at the end - O(1)


// Corner cases

// Empty sequence

// Sequence with 1 or 2 elements

// Sequence with repeated elements

// Duplicated values in the sequence