#include <iostream>
using namespace std;

class myClass
{
    int a;

public:
    myClass(int i)
    {
        a = i;
    }

    int get_a()
    {
        return a;
    }
};

int sqr(myClass ob)
{
    return ob.get_a() * ob.get_a();
}

int main()
{
    myClass ob1(10), ob2(20);

    cout << sqr(ob1) << endl;
    cout << sqr(ob2) << endl;
}