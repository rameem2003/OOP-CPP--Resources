#include <iostream>

using namespace std;

class faculty{
public:
    string name;
    int id;
    string department;
};

int main(){
    faculty f1;

    cout << "Enter Name: \t";
    cin >> f1.name;
    cout << "Enter ID: \t";
    cin >> f1.id;
    cout << "Enter Department: \t";
    cin >> f1.department;


    cout << "Enter Name: \t" << endl;
    cout << f1.name << endl;
    cout << f1.id << endl;
    cout << f1.department << endl;
}