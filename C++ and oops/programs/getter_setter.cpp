#include <iostream>
using namespace std;

class hero
{

    char *name;
    char level;
    int health;

public:

    void setname(char name[]) { this->name = name; }
    void setlevel(char level) { this->level = level; }
    void sethealth(int health) { this->health; }

    char getlevel()
    {
        return level;
    }
    int gethealth()
    {
        return health;
    }
};

int main()
{
    hero h1;
    hero *h2 = new hero;
   h1.setlevel('A');
   h2->setlevel('B');
//    (*h2).setlevel('b');
    cout<<"level is "<<h1.getlevel()<<endl;
    cout<<"level is "<<h2->getlevel()<<endl;
    return 0;
}