
#include <iostream>
using namespace std;

// Encapsulation
class Animal {
private:
  int age;
  int weight;

  

public:
  Animal() { this->age = 20; }
  void getAge() { cout << "Age " << age; }

  void setAge(int age) { this->age = age; }
};

// Inheritance
class Dog : public Animal {

};


int main() {
  
  Dog *lebra = new Dog;
  
  lebra->getAge();
  
  return 0;
}