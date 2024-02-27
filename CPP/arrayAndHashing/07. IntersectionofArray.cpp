#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;
int main(){
     int arr1[] = {1,2,3,4,6,8};
     int size1 = sizeof(arr1)/sizeof(int);
     int arr2[] = {3,4,9,10};
     int size2 = sizeof(arr2)/sizeof(int);
     
     vector<int> answer;

     for(int i = 0; i<size1; i++){
          for(int j=0; j<size2; j++){
               if(arr1[i]==arr2[j]){
                    // Mark if value repeated
                    arr2[j] = INT_MIN;
                    answer.push_back(arr1[i]);
                   
               }
          }
     }
 for(auto ele:answer){
          cout << ele << ", ";
     }
     return 0;
}