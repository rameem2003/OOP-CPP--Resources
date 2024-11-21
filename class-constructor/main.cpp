#include <iostream>
using namespace std;

class box
{
    int l, w, h;

public:
    void volume();
    void getdata();
};

// scope resulation
void box ::volume()
{
    {
        int vol;
        vol = l * w * h;

        cout << "Volume is " << vol << endl;
    }
}

void box ::getdata()
{
    cout << "Enter values : ";
    cin >> l >> w >> h;
}

int main()
{

    box ob;
    ob.getdata();

    ob.volume();
}