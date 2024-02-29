
#include<iostream>
#include <algorithm>
#include<cstring>
using namespace std;
// 'a' - 97
// 'A' - 65
// char - a + A
void convertToUpper(char arr[]){
          int length = strlen(arr);
          for(int i = 0; i<length; i++){
               arr[i] =  arr[i] - 'a' + 'A';
          }

          cout << arr;
}
void convertToLower(char arr[]){
     int length = strlen(arr);
          for(int i = 0; i<length; i++){
               arr[i] =  arr[i] - 'A' + 'a';
          }

          cout << arr;
}
int main(){
     char name[100] = "racecar";
     char name2[100] = "RACECAR";
     convertToUpper(name);
     convertToLower(name2);
    
     return 0;
}