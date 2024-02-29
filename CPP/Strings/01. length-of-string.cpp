#include<iostream>
#include<string>
#include <cstring>  // strlen declare here
using namespace std;

int getLength(char name[]){
     int length = 0;
     int i = 0;
     while(name[i] != '\0'){
          length++;
          i++;
     }
     return length;
}

int main(){
     char name[100];

     cin.getline(name,100);

     int length = getLength(name);

     cout << "Length "<< length << endl;

     // Function

     cout << "Length " << strlen(name) << endl;
     return 0;

}