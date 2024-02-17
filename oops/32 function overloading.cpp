
// function overloading
// simply function overloading is creating mutiple functions with same name
// When there are multiple functions in a class with the same name but different parameters, these functions are overloaded. The main advantage of function overloading is it increases the readability of the program. Functions can be overloaded by using different numbers of arguments and by using different types of arguments.

// 1) Function overloading with different numbers of arguments:
// In this example, we have created two functions, the first add performs the addition of the two numbers, and the second add performs the addition of the three numbers.

// 2) Function overloading with different types of arguments:
// In this example, we have created two add functions with different data types. The first add takes two integer arguments and the second add takes two double arguments.

// 3) Default Arguments: 
// A default argument is a value provided in a function declaration automatically assigned by the compiler if the function's caller doesn't provide a value for the argument with a default value. However, if arguments are passed while calling the function, the default arguments are ignored.

#include<bits/stdc++.h>

using namespace std;

class A
{
    public:

    int add(int a, int b)
    {
        return a+b;
    }

    // this function overloading is not possible because of exact duplication 
    // int add(int a, int b)
    // {
    //     return a+b;
    // }

    // this is also not possible
    // void add(int a, int b)
    // {
    //     cout<<a+b<<endl;
    // }


    // 1) Function overloading with different numbers of arguments:

    // this function overloading is possible as the no.of parameters are changed
    int add(int a, int b, int c)
    {
        return a+b+c;
    }


    // 2) Function overloading with different types of arguments:
    double add(double a, double b)
    {
        return a+b;
    }


    // 3) Default Arguments: 
    // Example: A function with default arguments can be called with 2 or 3 or 4 arguments.

    int addition(int a, int b, int c = 0, int d = 0)
    {
        return a+b+c+d;
    }
    

};

int main()
{
    A a1;

    cout<<a1.addition(10,20)<<endl;
    cout<<a1.addition(10,20,30)<<endl;
    cout<<a1.addition(10,20,30,40)<<endl;
}