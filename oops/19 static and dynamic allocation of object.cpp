
#include<bits/stdc++.h>

using namespace std;

class hero
{
    public:
    int health;
};

int main()
{
    // static allocation
    hero a;
    a.health = 100;

    cout<<"health of a is "<<a.health<<endl;

    // dynamic allocation
    hero *b = new hero; 
    
    // method 1
    (*b).health = 90;
    cout<<"health of b is "<<(*b).health<<endl;
    
    // method 2
    b->health = 95;
    cout<<"health of b is "<<b->health<<endl;
}