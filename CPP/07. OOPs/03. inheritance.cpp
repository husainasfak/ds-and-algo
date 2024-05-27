#include <iostream>
using namespace std;

// Scope resolution operator
// Diamond problem
// an issue that arises when a class inherits from two classes that have a common ancestor. This can lead to ambiguity in the inheritance hierarchy.
class A
{
public:
     int chemistry;
     A()
     {
          chemistry = 101;
     }
};

class B
{
public:
     int chemistry;
     B()
     {
          chemistry = 410;
     }
};

class C : public A,
          public B
{
public:
     int maths;
};

int main()
{
     C obj;

     cout << obj.B::chemistry;
}