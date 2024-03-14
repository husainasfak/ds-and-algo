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

*/
class Animal
{
private:
     int weight;

public:
     // State or properties
     int age;
     string name;

     // Behaviour or methods

     void eat()
     {
          cout << "Eeating" << endl;
     }

     void sleep()
     {
          cout << "Sleeping" << endl;
     }

     // Get private value
     int getWeight()
     {
          return weight;
     }

     // set private value
     int setWeight(int w)
     {
          weight = w;
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
     cout << dog.getWeight();
     return 0;
}