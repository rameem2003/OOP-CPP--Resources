#include <iostream>

using namespace std;

class Father
{
public:
    string name;

    Father()
    {
        cout << "Father 0 param" << endl;
    }
    Father(string name1)
    {
        name = name1;
        cout << "Father 1 param" << endl;
    }
    Father(string name1, int age1)
    {
        cout << "Father 2 param" << endl;
    }

    virtual void display()
    {
        cout << "Name is" << name << endl;
    }
};

class Son : public Father
{
public:
    int age, id;

    Son()
    {
        cout << "Son 0 param" << endl;
    }
    Son(string n)
    {
        cout << "Son 1 param" << endl;
    }
    Son(int age1, int id1)
    {
        age = age1;
        id = id1;
        cout << "Son 2 param" << endl;
    }
    Son(string name1, int age1, int id1) : Father(name1)
    {
        age = age1;
        id = id1;
        cout << "Son 3 param" << endl;
    }

    void display_son()
    {
        cout << "Name " << name << endl;
        cout << "Age " << age << endl;
        cout << "id " << id << endl;
    }
};

int main()
{
    Father fobj("Baba");
    cout << "For son class" << endl;
    Son sobj("baba", 25, 41);

    cout << "fobj displayfather" << endl;
    fobj.display();

    cout << "sobj displayfather" << endl;
    sobj.display();

    cout << "sobj displayson" << endl;
    sobj.display_son();
}