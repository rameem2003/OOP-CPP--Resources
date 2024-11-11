#include <iostream>

using namespace std;

class faculty
{
public:
    string name;
    int id;
    string department;
};

int main()
{

    faculty f1, f2;

    f1.name = "Fatema";
    f1.id = 4545;
    f1.department = "English";

    cout << "Enter Name \t";
    cin >> f2.name;
    cout << "Enter ID \t";
    cin >> f2.id;
    cout << "Enter Department \t";
    cin >> f2.department;

    cout << "Name: " << f2.name << endl;
    cout << "ID: " << f2.id << endl;
    cout << "Department: " << f2.department << endl;
}