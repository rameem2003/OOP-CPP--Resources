#include <iostream>

using namespace std;

class triangle
{
    int length, height;

public:
    // triangle(int l, int h)
    // {
    //     length = l;
    //     height = h;
    // }

    void display_triangle_area()
    {
        int area = 0.5 * length * height;
        cout << "The area of the triangle is " << area << " sqr unit" << endl;
    }
    void get_value();
};

void triangle ::get_value()
{

    cout << "Enter values : ";
    cin >> length >> height;
}

class circle
{
    int radias;

public:
    circle(int r)
    {
        radias = r;
    }

    void display_circle_area()
    {
        int area = 3.1416 * radias * radias;
        cout << "The area of the circle is " << area << " sqr unit" << endl;
    }
};

int main()
{
    triangle tr;

    tr.get_value();
    tr.display_triangle_area();

        circle cr(50);
    cr.display_circle_area();
}