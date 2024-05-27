
#include <iostream>
using namespace std;

// Encapsulation
class Animal
{
private:
  int age;
  int weight;

public:
  Animal() { this->age = 20; }
  void getAge() { cout << "Age " << age; }

  void setAge(int age) { this->age = age; }
};

// Inheritance
// Single Inheritance
class Dog : public Animal
{
public:
  string name = "Hira";
};

// multi-level
class BullDog : public Animal, public Dog
{
public:
  int age = 20;
};

int main()
{

  Dog *lebra = new Dog;
  BullDog *buddy = new BullDog;
  lebra->getAge();
  cout << "Bull dog" << buddy->name << buddy->age;
  return 0;
}