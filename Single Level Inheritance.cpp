#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    string name;

    void makeSound() {
        cout << name << " makes a generic animal sound!" << endl;
    }
};

// Derived class
class Dog : public Animal {

public:
    void bark() {
        cout << name << " says: Woof! Woof!" << endl;
    }
};

class Cat: public Animal{

public:
    void meow(){
    cout<<name <<" says: Meow! Meow!" <<endl;
    }

    };

int main() {
    // Create a Dog object
    Dog myDog;
    myDog.name = "Joy";

    Cat myCat;
    myCat.name = "Kitty";

    // Call methods
    myDog.makeSound(); // Inherited from Animal
    myDog.bark();      // Specific to Dog

    cout<<"\n";
    myCat.makeSound();
    myCat.meow();

    return 0;
}
