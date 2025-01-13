/**
 * Create a base class Animal with following a protected data member
 * 'name' to store name two public member function eat() display like name is eating sleep() displays like name is sleeping
 *
 *
 * derive a class Dog from Animal with following
 * A public member function bark() displays a massage like name is barking
 * In main function create an object of Animal class with generic name and call eat and sleep * create an object of class dog specific name to eat, sleep and barking
 * display all method
 */

#include <iostream>

using namespace std;

class Animal
{
protected:
    string name;

public:
    Animal(string n)
    {
        name = n;
    }

    void eat()
    {
        cout << name << " is eating" << endl;
    }
    void sleep()
    {
        cout << name << " is sleeping" << endl;
    }
};

class Dog : public Animal
{
public:
    Dog(string n) : Animal(n)
    {
        name = n;
    }

    void bark()
    {
        cout << name << " is barking" << endl;
    }
};

int main()
{
    Animal animal("Gm");
    animal.eat();
    animal.sleep();

    Dog dog("Buddy");
    dog.eat();
    dog.sleep();
    dog.bark();
}
