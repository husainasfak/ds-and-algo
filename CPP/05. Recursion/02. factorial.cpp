#include <iostream>
using namespace std;

int factorial(int n)
{
     // base case
     if (n == 1)
     {
          return 1;
     }
     int result = n * factorial(n - 1);
     return result;
}

int main()
{
     int n;
     cout << "Enter the number " << endl;
     cin >> n;

     int result = factorial(n);
     cout << "Factorial of " << n << " is " << result;
     return 0;
}