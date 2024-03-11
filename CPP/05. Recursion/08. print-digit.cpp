
#include <iostream>
using namespace std;

void printDigit(int n)
{
     // base case
     if (n == 0)
     {
          return;
     }

          printDigit(n / 10);

     int digit = n % 10;
     cout << digit << " ";
}

int main()
{
     int n = 647;

     printDigit(n);

     return 0;
}