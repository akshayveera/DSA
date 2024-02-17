
// inheritance ambiguity

#include<bits/stdc++.h>

using namespace std;

// parent of C
class A
{
    public:
    void fun()
    {
        cout<<"this is A"<<endl;
    }
};

// parent of C
class B
{
    public:
    void fun()
    {
        cout<<"this is B"<<endl;
    }
};

// child of A and B
class C : public A, public B
{

};

int main()
{

    // C is child class of both classes A and C
    // So, C now has both functions that are, fun() from class A and fun() from class B
    // Now, when we created an object of class C and call the fun() then there is an ambiguity of which fun() should be called
    // the ambiguity is either we have to call fun() from class A or fun() from class B
    // this ambiguity is known as inheritance ambiguity

    C obj1;

    // obj1.fun();      // this falls under ambiguity

    // to overcome this ambiguity we use " scope resolution operator  -  ::  "

    obj1.A::fun();
    obj1.B::fun();

}