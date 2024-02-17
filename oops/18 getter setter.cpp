


#include<bits/stdc++.h>

using namespace std;

class hero
{
    // properties or state or attributes or data members
    int health;
    char level;


    // methods
    public:

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int val)
    {
        health = val;
    }

    void setLevel(char val)
    {
        level = val;
    }

};

int main()
{
    // creation of object or
    // creating an instance of class hero
    hero ram;


    // ram.health = 100;                                  
    // cout<<"Ram's health is "<<ram.health<<endl;

    // the above two statements throws error because
    // as the default acccess modifier is private, we cannot access(get or set) the members of object
    // here we have two ways:
    // one is to change the access modifier in the class to public
    // other way is to use getter and setter methods

    ram.setHealth(100);
    ram.setLevel('A');

    cout<<"Health of Ram is "<<ram.getHealth()<<endl;
    cout<<"Level of Ram is "<<ram.getLevel()<<endl;






}