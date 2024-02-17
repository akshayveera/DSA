
// incomplete, didnot understood, refer lec 42 : love babbar

#include<bits/stdc++.h>
using namespace std;

class hero
{
    public:
    int health;
    char level;
    char *name;

    hero()
    {
        name = new char[100];        
    }

    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    void setHealth(int health)
    {
        this->health = health;
    }

    void setLevel(char level)
    {
        this->level = level;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }




    void print()
    {
        cout<<"[ "<<"name : "<<this->name<<", ";
        cout<<"health : "<<this->health<<", ";
        cout<<"level : "<<this->level<<" ]"<<endl;
    }

};

int main()
{
    hero h1;

    h1.setHealth(70);
    h1.setLevel('B');    
    char name[7] = "Babbar";
    h1.setName(name);

    h1.print();

    hero h2 = h1;
    h2.print();

    // in the below statements we have only changed h1.name but h2.name aslo got changed

    h1.name[0] = 'G';
    h1.print();

    h2.print();


    cout<<"--------------------------------------------------------------"<<endl;
    
    // assignment operator " = "
    // this is used to copy all the properties of one element to other element

    hero hero1(90,'A');
    hero hero2(70,'C');

    cout<<"before copy"<<endl;
    cout<<"[ health : "<<hero1.health<<", level : "<<hero1.level<<" ]"<<endl;
    cout<<"[ health : "<<hero2.health<<", level : "<<hero2.level<<" ]"<<endl;

    hero1 = hero2;
    cout<<"after copy"<<endl;
    cout<<"[ health : "<<hero1.health<<", level : "<<hero1.level<<" ]"<<endl;
    cout<<"[ health : "<<hero2.health<<", level : "<<hero2.level<<" ]"<<endl;








    






}