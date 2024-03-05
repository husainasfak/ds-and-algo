#include<bits/stdc++.h>
using namespace std;


int linear_search(int arr[], int sizeOfArray, int key){

     for(int i = 0; i<sizeOfArray; i++){

          if(arr[i] == key){
               return i;
          }
     }
     
     return -1;

}

int main(){
     int arr[] = {1,2,3,4,5,6,7,8,9};

     int sizeOfArray = sizeof(arr)/sizeof(int);

     int key;  

     cout << " Enter the key" << endl;
     cin >> key; 

     int index = linear_search(arr,sizeOfArray,key);

     if(index == -1){
          cout << "Element not found";
     
     }else{
          cout << "Element found at index "<< index << endl;
     }
     
     return 0;
}

// ! best case O(1) when element found at first position
// ! worst case O(n) 