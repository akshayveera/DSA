

// pillars of oops

// encapsulation
// is a mechanism that binds together the data and functions that manipulate the data, encapsulating them into a single unit called an object. 
// In other words, encapsulation combines the state (data) and behavior (methods or functions) of an object into a single entity.

// inheritance
// inheritance is a mechanism that allows a class to inherit properties and behaviors from another class
// The class from which properties and behaviors are inherited is called the "parent class," "superclass," or "base class." 
// The class that receives the inherited properties and behaviors is called the "child class," "subclass," or "derived class."


#include<bits/stdc++.h>

using namespace std;

class human
{
    public:
    int age;

    protected:
    double weight;

    private:
    double height;

    public: 
    void setAge(int age)
    {
        this->age = age;
    }

    void setWeight(double weight)
    {
        this->weight = weight;
    }

    void setHeight(double height)
    {
        this->height = height;
    }

};


// here we inherited the data and functions from parent class human to child class male

class male : public human
{
    public :
    int salary;



    void work()
    {
        cout<<"work is called"<<endl;
    }
};

int main()
{
    male m1;

    m1.setAge(20);
    m1.setWeight(50.00);
    m1.setHeight(5.9);
    m1.salary = 10000;


    cout<<"m1 age : "<<m1.age<<endl;
    // cout<<m1.weight<<endl;            // this doesnt work due to access modifier
    // cout<<m1.height<<endl;            // this doesnt work due to access modifier
    cout<<"m1 salary : "<<m1.salary<<endl;

    
}