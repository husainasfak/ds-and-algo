#include <iostream>
#include <string>

using namespace std;

int checkChar(string &str, char &key, int index)
{
     int length = str.length();

     // Base case
     if (index >= length)
     {
          return -1;
     }

     if (str[index] == key)
     {
          return index;
     }
     return checkChar(str, key, index + 1);
}
int main()
{
     string str = "Raceing";
     char key = 'e';
     int i = 0;
     int result = checkChar(str, key, i);

     cout << result;

     return 0;
}