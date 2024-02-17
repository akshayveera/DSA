
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

// child of animal
class Dog : public Animal
{
    public:
    void bark()
    {
        cout<<"barking"<<endl;
    }

};

// child of animal
class Bulldog : public Animal
{
    public:
    void dance()
    {
        cout<<"dancing"<<endl;
    }
};

int main()
{
    // first child Dog

    Dog d1;

    d1.eat();
    d1.bark();
    // d1.dance();   // this will throw error because only animal members are inherited

    // second child Bulldog

    Bulldog b1;

    b1.eat();
    // b1.bark();   // this will throw error because only animal members are inherited
    b1.dance();
}

