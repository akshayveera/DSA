

// runtime polymorphism

// It is useful in overriding a method of inherited class or derived class

// Runtime polymorphism is also known as dynamic polymorphism. Method overriding is a way to implement runtime polymorphism.

// Method overriding:
// Method overriding is a feature that allows you to redefine the parent class method in the child class based on its requirement. In other words, whatever methods the parent class has by default are available in the child class. But, sometimes, a child class may not be satisfied with parent class method implementation. The child is class is allowed to redefine that method based on its requirement. This process is called method overriding.

// Rules for method overriding:
// 1) The method of the parent class and the method of the child class must have the same name.
// 2) The method of the parent class and the method of the child class must have the same parameters.
// 3) It is possible through inheritance only.


#include<bits/stdc++.h>

using namespace std;

class Animal
{
    public:
    void speak()
    {
        cout<<"speaking"<<endl;
    }
};

class Dog : public Animal
{
    public:
    // here overriding is occuring
    void speak()
    {
        cout<<"barking"<<endl;
    }

};

int main()
{
    Animal obj1;
    Dog obj2;

    obj1.speak();     // output : speaking
    obj2.speak();     // output : barking

}