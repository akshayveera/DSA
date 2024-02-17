

// Operator Overloading: 
// C++ also provides options to overload operators. For example, we can make the operator ('+') for the string class to concatenate two strings. We know that this is the addition operator whose task is to add two operands. A single operator, '+,' when placed between integer operands, adds them and concatenates them when placed between string operands.

#include<bits/stdc++.h>

using namespace std;

class A
{
    public:

    int n;

    void operator+ (A obj)
    {
        int a = this->n;
        int b = obj.n;

        cout<<a-b<<endl;\

        // if we write only below line, when we perform addition, the below statement is printed
        // cout<<"Hello World"<<endl;
    }

    void operator() ()
    {
        cout<<"I am bracket"<<endl;
    }
};

int main()
{
    A a1, a2;
    a1.n = 10;
    a2.n = 5;

    a1+a2;

    // when we use bracket, "I am bracket" this statement is printed
    a1();
    a2();

    

}