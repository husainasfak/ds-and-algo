#include <iostream>
#include <string>
using namespace std;

// size of empty class is 1
// * TODO : Read concept of Padding and greedy alignment

/*
Three type of access modifier
1. public - we can access (value of behaviour) inside and outside the class
2. private  - we can only access (value of behaviour) inside the class
3. protected

By default private
*/

/*
Two types of memory
Stack -  Static allocation -> automatic cleaning
Heap - Dynamic memory allocation -> use new keyword   -> manual cleaning

*/
class Animal
{
private:
  int weight;

public:
  // State or properties
  int age;
  string name;
  string note;
  /*
    Constructor in cpp. name is same as class.
    no return type and used to initilization
    type
    1. default constructor
    2. parameterised constructor
    3. copy constructor
  */
  // override default constructor
  Animal(string note = "")
  {
    this->age = 20;
    this->name = "default";
    this->note = note;
  }

  // Behaviour or methods

  void eat()
  {
    cout << this->name << " is Eeating" << endl;
  } // this is the pointer to current object

  void sleep() { cout << name << " is Sleeping" << endl; }

  // Get private value
  int getWeight() { return weight; }

  // set private value
  int setWeight(int weight) { return this->weight = weight; }

  // Copy Constructor
  Animal(Animal &obj)
  { // pass by reference. if pass by value it will caught in inifinite loop
    this->age = obj.age;
    this->name = obj.name;
    this->note = obj.note;
    this->weight = obj.weight;
  }

  /*
    Destructor use for free the memoery
    Static memeory allocation - Destructor automatic called
    Dynamic memeory allocation - Destructor manually
  */
  ~Animal()
  {
    cout << "Inside Destructor" << endl;
  }
};

int main()
{
  // Object creation

  // Static Memory allocation
  Animal dog;

  cout << "Age of dog " << dog.age << endl;
  cout << "Name of dog " << dog.name << endl;

  dog.setWeight(101);
  cout << dog.getWeight() << endl;

  // Dynamic mem allocation
  Animal *donky = new Animal;

  (*donky).age = 15;
  (*donky).name = "Mike";

  Animal *elephant =
      new Animal("elephant is big animal"); // new operator return address of
                                            // alloacted memory
  elephant->age = 120;
  elephant->name = "Hippo";

  elephant->eat();
  cout << elephant->note << endl;

  // Object copy
  Animal *dFor = donky;
  Animal *eFor(elephant);

  cout << "copy " << dFor->name << endl;

  // Maually call Destructor
  delete elephant;

  return 0;
}