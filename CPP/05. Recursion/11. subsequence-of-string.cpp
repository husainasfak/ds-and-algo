#include <iostream>
#include <string>
using namespace std;

// Include - exclude pattern or pick or not pick pattern

void printSubsequences(string &str, string output, int i)
{
     int length = str.length();
     // Base case when i is out of string length
     if (i >= length)
     {
          cout << output << endl;
          return;
     }

     // Exclude
     printSubsequences(str, output, i + 1);

     // Include
     output.push_back(str[i]);
     printSubsequences(str, output, i + 1);
}

int main()
{
     string str = "abc";

     string output = "";
     int i = 0;
     printSubsequences(str, output, i);

     return 0;
}
