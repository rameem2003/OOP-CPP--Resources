#include <iostream>
using namespace std;

inline int iseven(int x)
{
    return (x % 2);
}

int main()
{
    int a = 10;

    if (iseven(a) == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd " << endl;
    }
}