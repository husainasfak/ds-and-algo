// Vector is dynamic array
// vector use contiguous storage locations for their elements, which measn that their elements can also be accessed directly in o(1) time.
// Vectors are used to create dynamic 1D and 2D arrays
// unlike arrays, vectors passed by value to a function, we can still pass by them by reference if need arises.
//  when vector is full, it double itself
#include<bits/stdc++.h>
using namespace std;

int main() {
     vector<int> arr; //size zero

     vector<int> arr2 = {1,2,3,4,5};

     // push_back insertion at the end of the array in constant time

     arr2.push_back(16);


     // size --- number of elements
     cout << "size" <<  arr.size() << endl;
     cout << "size" << arr2.size() << endl;

     // capacity --- actual memory allocated to the vector

     cout << "capacity" << arr.capacity() << endl;
     cout << "capacity" << arr2.capacity() << endl;

     // print all the element
     for(int i =0; i<arr2.size(); i++){
          cout  << arr2[i] << endl;
     }

     // pop_back remove at last in constant size
     arr2.pop_back();

     // we can use fill constructor and it will fill the array
     
     vector<int> arr3(10,7);
      for(int i =0; i<arr3.size(); i++){
          cout  << arr3[i] << endl;
     }


}