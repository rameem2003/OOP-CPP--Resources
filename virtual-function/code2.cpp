#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a Circle!" << endl;
    }
};
class Square : public Shape
{
    void draw()
    {
        cout << "Drawing a Square!" << endl;
    }
};

int main()
{
    Circle circleObj;
    Square squareObj;
    Shape *shapePtr;
    shapePtr = &circleObj;
    shapePtr->draw();
    shapePtr = &squareObj;
    shapePtr->draw();

    return 0;
}