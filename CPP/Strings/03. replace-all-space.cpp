#include<iostream>
#include<string>
#include <cstring>  // strlen declare here
using namespace std;

int removeSpace(char name[]){
    int size =  strlen(name);
    // Keep track of nonspace count
    int shiftLeft = 0;

    for(int i= 0; i<size; i++){
     if (name[i] != ' ' && name[i] != '\t' && name[i] != '\n'){
          //It shifts non-whitespace characters to the left to fill the spaces left by the removed whitespace characters.
          name[i - shiftLeft] = name[i];
     }else{
          ++shiftLeft;
     }
    }
    name[size - shiftLeft] = '\0';
    cout << name;
}

int main(){
     char name[100] = "India is the great country";

     removeSpace(name);

     return 0;

}