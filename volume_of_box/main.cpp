/**
 * Write down the C++ code of taking three variables of a box class to derive the
 * volume of that box where the variables are public members.
 */

#include <iostream>

using namespace std;

class box
{
public:
    int box_height;
    int box_weight;
    int box_length;

    int volume_box()
    {
        int vol = box_height * box_weight * box_length;

        cout << "Volume of box is = " << vol << " Cubic unit";
    }
};

int main()
{

    box b1;

    b1.box_height = 50;
    b1.box_weight = 100;
    b1.box_length = 50;

    b1.volume_box();
}
