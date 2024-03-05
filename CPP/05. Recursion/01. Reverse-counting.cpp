#include <iostream>
using namespace std;

/*
i/p - n numbers
o/p - reverse countring from n to 1

*/
void reversePrint(int n)
{
     if (n == 1)
     {
          cout << 1 << endl;
          return;
     }
     else
     {
          cout << n;
          reversePrint(n - 1);
     }
}

int main()
{
     int n;
     cout << "Enter the number " << endl;
     cin >> n;

     reversePrint(n);

     return 0;
}