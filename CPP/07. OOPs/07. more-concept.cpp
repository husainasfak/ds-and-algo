#include <iostream>
using namespace std;

class Animal
{
public:
     virtual void speak()
     {
          cout << "Speaking " << endl;
     }
};

class Dog : public Animal
{
public:
     // Overide speak function
     void speak()
     {
          cout << "Barking " << endl;
     }
};

int main()
{
     Animal *a = new Animal();
     a->speak(); // Speaking

     Dog *a = new Dog();

     a->speak(); // Barking

     // Upcasting
     Animal *a = New Dog();
     a->speak(); // It will decide on run-time. Prent function will call. if you want to call the speaking function from dog class you have to marke the Parent class function as virtual

     // Down casting -> differ from compiler to compiler

     Dog *a = new Animal();

     // in upcasting and downcasting without virtual keyword, always pointer type method will call.
}

// 27.13 min