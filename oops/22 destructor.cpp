
// destructor
// destructor is a special member function of a class that is automatically called when an object of that class goes out of scope or is explicitly destroyed. It is used to clean up resources or perform any necessary finalization tasks before the object is destroyed
// The destructor is identified by the class name preceded by a tilde (~) symbol. It has no return type and does not take any parameters. The destructor is called implicitly by the compiler when the object is destroyed, and you cannot call it explicitly like a regular member function.

#include<bits/stdc++.h>

using namespace std;

class hero
{
    public:

    hero()
    {
        cout<<"constructor is called"<<endl;
    }

    // no parameters can be passes into destructor
    // destructor cannot be called explicitly
    ~hero()
    {
        cout<<"destructor is called"<<endl;
    }
};

int main()
{
    // static 
    hero h1;

    // dynamic 
    hero *h2 = new hero();
    
    // if we execute the code till here, what we can see in the output is, constructor is called two times(for static and for dynamic) but destructor is called only once(for static) and for dynamic allocation the destructor is not called.
    // that means, for static allocation destructor is called automatically but for dynamic allocation it doesn't call automatically
    // hence, we cannot call a destructor directly, so we need to delete the dynamic allocation so that destructor is called

    delete h2;
    // now we can see in the output is that, destructor is also called twice(for static and dynamic)    

}