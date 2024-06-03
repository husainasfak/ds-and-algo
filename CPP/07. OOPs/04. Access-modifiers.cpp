/*
Public Inheritance:

Public Members: Remain public in the derived class and are accessible from outside.
Protected Members: Remain protected in the derived class and are not accessible from outside.
Private Members: Not accessible in the derived class and from outside.
Protected Inheritance:

Public Members: Become protected in the derived class and are not accessible from outside.
Protected Members: Remain protected in the derived class and are not accessible from outside.
Private Members: Not accessible in the derived class and from outside.
Private Inheritance:

Public Members: Become private in the derived class and are not accessible from outside.
Protected Members: Become private in the derived class and are not accessible from outside.
Private Members: Not accessible in the derived class and from outside.


*/

#include <iostream>
using namespace std;

class Base
{
public:
     int publicVar;

protected:
     int protectedVar;

private:
     int privateVar;

public:
     Base() : publicVar(1), protectedVar(2), privateVar(3) {}
};

class PublicDerived : public Base
{
     // publicVar is public
     // protectedVar is protected
     // privateVar is not accessible
};

class ProtectedDerived : protected Base
{
     // publicVar is protected
     // protectedVar is protected
     // privateVar is not accessible
};

class PrivateDerived : private Base
{
     // publicVar is private
     // protectedVar is private
     // privateVar is not accessible
};

int main()
{
     Base base;
     PublicDerived publicDerived;
     ProtectedDerived protectedDerived;
     PrivateDerived privateDerived;

     // Accessible
     cout << base.publicVar << endl; // OK

     // Not Accessible
     // cout << base.protectedVar << endl; // Error
     // cout << base.privateVar << endl; // Error

     // PublicDerived
     cout << publicDerived.publicVar << endl; // OK
     // cout << publicDerived.protectedVar << endl; // Error
     // cout << publicDerived.privateVar << endl; // Error

     // ProtectedDerived
     // cout << protectedDerived.publicVar << endl; // Error
     // cout << protectedDerived.protectedVar << endl; // Error
     // cout << protectedDerived.privateVar << endl; // Error

     // PrivateDerived
     // cout << privateDerived.publicVar << endl; // Error
     // cout << privateDerived.protectedVar << endl; // Error
     // cout << privateDerived.privateVar << endl; // Error

     return 0;
}
