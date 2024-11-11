#include <iostream>

using namespace std;

class box
{
public:
    box()
    {
        cout << "I am box class constructor" << endl;
    }
};

int main()
{
    box b1, b2;
}