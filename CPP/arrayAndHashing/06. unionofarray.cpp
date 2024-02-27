#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;

int main(){

     int arr1[] = {1,2,4,6,8,10};
     int size1 = sizeof(arr1)/sizeof(int);
     int arr2[] = {3,4,5,6};
     int size2 = sizeof(arr2)/sizeof(int);
     
     vector<int> answer;

     // With Duplicates
     // Check the second array element and if present same as 1st array element mark with int_min
     for(int i =0; i<size1; i++){
          for(int j=0; j<size2; j++){
               if(arr1[i] == arr2[j]){
                    arr2[j] = INT_MIN;
               }
          }
     }

     // push element of arr1 into answer;
     for(int i = 0; i<size1; i++){
          answer.push_back(arr1[i]);
     }
     
     // push element of arr2 into answer
     for(int j = 0; j<size2; j++){
          if(arr2[j] != INT_MIN){
               answer.push_back(arr2[j]);
          }
          
     }

     for(auto ele:answer){
          cout << ele << ", ";
     }



     return 0;
}