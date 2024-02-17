
// multi-level inheritance

#include<bits/stdc++.h>

using namespace std;

class Animal
{
    public:
    void eat()
    {
        cout<<"eating"<<endl;
    }
};

class Dog : public Animal
{
    public:
    void bark()
    {
        cout<<"barking"<<endl;
    }

};

class Bulldog : public Dog
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