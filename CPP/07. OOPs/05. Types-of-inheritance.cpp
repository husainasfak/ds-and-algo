
#include <iostram>
using namespace std;

// 1. Single Inheritance - Single inheritance involves a single base class and a single derived class.

// Base class
class Base
{
public:
     void display()
     {
          cout << "Base class display function" << endl;
     }
};

// Derived class
class Derived : public Base
{
public:
     void show()
     {
          cout << "Derived class show function" << endl;
     }
};

// 2. Multiple Inheritance - Multiple inheritance involves a derived class inheriting from more than one base class.

class Base1
{
public:
     void display()
     {
          cout << "Base1 class display function" << endl;
     }
};

// Base class 2
class Base2
{
public:
     void show()
     {
          cout << "Base2 class show function" << endl;
     }
};

// Derived class
class DerivedClass : public Base1, public Base2
{
public:
     void demonstrate()
     {
          cout << "Derived class demonstrate function" << endl;
     }
};

// 3. Multilevel Inheritance - Multilevel inheritance involves a chain of inheritance where a derived class inherits from another derived class.

// Base class
class Base
{
public:
     void display()
     {
          cout << "Base class display function" << endl;
     }
};

// Intermediate derived class
class Intermediate : public Base
{
public:
     void show()
     {
          cout << "Intermediate class show function" << endl;
     }
};

// Final derived class
class Derived : public Intermediate
{
public:
     void demonstrate()
     {
          cout << "Derived class demonstrate function" << endl;
     }
};

// 4. Hierarchical Inheritance - Hierarchical inheritance involves multiple derived classes inheriting from a single base class.

// Base class
class Base
{
public:
     void display()
     {
          cout << "Base class display function" << endl;
     }
};

// Derived class 1
class Derived1 : public Base
{
public:
     void show()
     {
          cout << "Derived1 class show function" << endl;
     }
};

// Derived class 2
class Derived2 : public Base
{
public:
     void demonstrate()
     {
          cout << "Derived2 class demonstrate function" << endl;
     }
};

// 5.  Hybrid Inheritance - Hybrid inheritance is a combination of two or more types of inheritance. Typically, it involves a combination of multiple and hierarchical inheritance.
// Base class
class Base
{
public:
     void display()
     {
          cout << "Base class display function" << endl;
     }
};

// Intermediate base class 1
class Intermediate1 : public Base
{
public:
     void show()
     {
          cout << "Intermediate1 class show function" << endl;
     }
};

// Intermediate base class 2
class Intermediate2 : public Base
{
public:
     void exhibit()
     {
          cout << "Intermediate2 class exhibit function" << endl;
     }
};

// Derived class
class Derived : public Intermediate1, public Intermediate2
{
public:
     void demonstrate()
     {
          cout << "Derived class demonstrate function" << endl;
     }
};
int main()
{
     Derived obj;
     obj.display(); // Base class function
     obj.show();    // Derived class function
     return 0;
}