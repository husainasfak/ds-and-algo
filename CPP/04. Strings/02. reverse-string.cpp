#include<iostream>
#include<string>
#include <cstring>  // strlen declare here
using namespace std;

int getReverse(char name[]){
    int start = 0;
    int end = strlen(name) - 1;

    while(start<=end){
     swap(name[start],name[end]);
     start++;
     end--;
    }
    
    cout << name;
}

int main(){
     char name[100];

     cin.getline(name,100);

     getReverse(name);

     return 0;

}