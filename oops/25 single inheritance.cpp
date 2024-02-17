
// Inheritance
// inheritance is a mechanism that allows a class to inherit properties and behaviors from another class
// The class from which properties and behaviors are inherited is called the "parent class," "superclass," or "base class." 
// The class that receives the inherited properties and behaviors is called the "child class," "subclass," or "derived class."

// single inheritance

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


int main()
{

    Dog d1;

    d1.eat();
    d1.bark();

}