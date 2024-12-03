#include <iostream>

using namespace std;

int count = 0;

class Alpha
{
public:
    Alpha()
    {
        count++;
        cout << "Created" << count << endl;
    }

    ~Alpha()
    {
        cout << "Destroyed" << count << endl;
        count--;
    }
};

int main()
{

    Alpha ob1, ob2, ob3;

    {
        Alpha ob4;
    }
    {
        Alpha ob5;
    }
}