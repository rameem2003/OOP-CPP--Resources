#include <iostream>

using namespace std;

class person
{

public:
    string name;
    int age;

    person()
    {
    }

    void display()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
    }
};

class student
{
public:
    int id;

    student()
    {
    }

    void display()
    {
        cout << "Id :" << id << endl;
    }
};

class child : public person, public student
{

public:
    child()
    {
    }
};

int main()
{
    child ob;
    ob.name = "ecfweu";
    ob.age = 40;
    ob.id = 4511;
    ob.display(); // line is error
}