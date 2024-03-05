#include <iostream>
using namespace std;
// 0, 1, 1, 2, 3, 5, 8, 13, 21,

int fib(int n)
{
     // base case
     if (n == 1)
     {
          // first term
          return 0;
     }
     if (n == 2)
     {
          return 1;
     }

     return fib(n - 1) + fib(n - 2);
}

int main()
{

     int n;
     cout << "Enter the number " << endl;
     cin >> n;

     int term = fib(n);
     cout << term;
     return 0;
}