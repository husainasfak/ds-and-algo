// Poly - Many
// Morphism - Form

// Exist in many form
// Polymorphism - Compile time, run time

// compile time based on - Operator overloading, function overloading
#include <iostream>
using namespace std;

class Math
{
public:
     /*
     !Function overloading,
     number of parameter or type of parameter must be diffrent. different signature of the function. return type will be same
     double sum(int a, int a){
          return a+b
     }
     this will cause error

     */
     int sum(int a, int b)
     {
          return a + b;
     }

     int sum(int a, int b, int c)
     {
          return a + b + c;
     }

     int sum(int a, float b)
     {
          return a + b + 10;
     }
};

/*
     ! Operator overloading
     return_type operator (){

     }

*/

class Param
{
public:
     int val;

     void operator+(Param &obj2)
     {
          // * Remember -  a + b = a.add(b). that way we do int value1 = this->val; and obj2 come from in parameter
          int value1 = this->val;
          int value2 = obj2.val;
          cout << (value1 - value2) << endl;
     }
};

//  ! Runtime Poly or Dynamic binding

int main()
{
     Math obj;

     cout << obj.sum(2, 3.5f) << endl; // by default 2.5 is double. for indicating that it is float we have to pass 3.5f

     // Operator overloading

     Param object1, object2;
     object1.val = 2;
     object2.val = 5;

     // This + should return the diffrence between thm

     object1 + object2;
     return 0;
}