#include<iostream>
#include<string> 
using namespace std;
int main(){
     char charArray[6];
     charArray[0] = 'H';
     charArray[1] = 'e';
     charArray[2] = 'l';
     charArray[3] = 'l';
     charArray[4] = 'o';
     charArray[5] = '\0'; // Null terminator

     // Create charcater array and init
     char name[100] = "Ashfaq Hussain";
     cout << name;

     char enterName[100];

     cin.getline(enterName,100); //read space tab etc. by default enter is delim
     cout << enterName;

     // char arr[] means array which holds char and string is datatype. can say string is dynamic char array

     string str;
     /*
          *METHODS
          str.length();
          str.empty();
          str.push_back('a');
          str.pop_back();
          str.substr(0,6); start index,endIndex
          str.compare(str2) 0 -  exactly same,
          str.find("string") give first index of maching string
          str.replace(0,4,word) from 0 to remove 4 char and replace with word
          str.erase(0,4) from 0 to 4 char erase
          
     
     */
     return 0;
}