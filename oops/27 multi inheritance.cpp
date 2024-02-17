

// multiple inheritance

#include<bits/stdc++.h>

using namespace std;

// parent 
class Animal
{
    public:
    void eat()
    {
        cout<<"eating"<<endl;
    }
};

// parent
class Dog
{
    public:
    void bark()
    {
        cout<<"barking"<<endl;
    }

};

// child of both animal and dog 
class Bulldog : public Animal, public Dog
{
    public:
    void dance()
    {
        cout<<"dacning"<<endl;
    }
};

int main()
{
    Bulldog b1;

    b1.eat();
    b1.bark();
    b1.dance();
}