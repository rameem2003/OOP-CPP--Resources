#include <iostream>

using namespace std;

class rol
{
public:
    void display()
    {
        cout << "ROL" << endl;
    }
};

class rol_studio : public rol
{
public:
    void display()
    {
        cout << "ROL Studio BD" << endl;
    }
};

class rameem : public rol
{
public:
    void display()
    {
        cout << "Rameem" << endl;
    }
};

int main()
{
    rol rol;
    rol.display();

    rol_studio rol_studio;
    rol_studio.display();

    rameem rameem;
    rameem.display();
}