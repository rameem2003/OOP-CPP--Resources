#include <iostream>

using namespace std;

class coord
{
    int x, y;

public:
    coord(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }

    void print()
    {
        cout << x << ", " << y << endl;
    }

    coord operator+(coord ob2);
    coord operator+(int value);
};

coord coord::operator+(coord ob2)
{
    coord temp;
    temp.x = x + ob2.x;
    temp.y = y + ob2.y;
    return temp;
}

coord coord::operator+(int value)
{
    coord temp;
    temp.x = x + value;
    temp.y = y + value;
    return temp;
}

int main()
{

    coord o1(10, 10), o2(5, 3), o3, ob(10, 15);

    o1.print();
    o2.print();

    o3 = o1 + o2;
    o3.print();

    ob = ob + 100;
    ob.print();
}