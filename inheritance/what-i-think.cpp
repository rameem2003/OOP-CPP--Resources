#include <iostream>
using namespace std;
class person
{
protected:
    string name;
    string why;

public:
    person(string n, string w)
    {
        name = n;
        why = w;
    }

    void im_looser()
    {
        cout << "I am " << name << endl;
        cout << "Because " << why << endl;
    }

    void wishing_of_my_death()
    {
        cout << name << " is wishing that he will no more very soon, cz " << why << endl;
    }

    void will_destroy_myself()
    {
        cout << name << " will destroy himself, cz " << why << endl;
    }
};

class Destroy : public person
{
public:
    Destroy(string n, string w) : person(n, w)
    {
        name = n;
        why = w;
    }
};

int main()
{
    Destroy destroyObj("Rameem", "I am looser, and I can't satisfied to my buddies");
    destroyObj.im_looser();
    destroyObj.wishing_of_my_death();
    destroyObj.will_destroy_myself();
}