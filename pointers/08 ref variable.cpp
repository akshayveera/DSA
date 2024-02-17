
// reference variable - same location(element) but different names

#include<bits/stdc++.h>

using namespace std;

// bad practices

// int* update6(int a)
// {
//     return a;
// }

// int& update5(int a)
// {
//     return a;
// }


int* update4(int* a)
{
    // pointer return type
    return a;
}

int& update3(int& a)
{
    // reference return type
    return a;
}

void update2(int& a)
{
    // pass by reference
    // here the a refernce variable is created ie, the element a in main function and a in update2 function is same
    // both a's are two names of the same location resptive to the function
    a++;
}

void update1(int a)
{
    // pass by value
    // here new local variable in update1 function is created and argument passed is copied to it
    // life span of this a is life span of this function ie, after the completion of this function this a doesnt exit
    // and it is not updated in main funtions a, it is updated in update functions a
    a++;
}

int main()
{

    int a  = 9;

    // // creating a refernce variable
    // int& b = a;

    // cout<<"a : "<<a<<endl;
    // cout<<"b : "<<b<<endl;

    // a++;
    // cout<<"a : "<<a<<endl;
    // cout<<"b : "<<b<<endl;

    // b++;    
    // cout<<"a : "<<a<<endl;
    // cout<<"b : "<<b<<endl;

    // int& c = b;
    // cout<<"a : "<<a<<endl;
    // cout<<"b : "<<b<<endl;
    // cout<<"c : "<<c<<endl;


    cout<<"before update1 : "<<a<<endl;

    // pass by value
    update1(a);

    cout<<"after update1 : "<<a<<endl;
    

    cout<<"------------------------------------------------------------"<<endl;

    cout<<"before update2 : "<<a<<endl;

    //pass by reference
    update2(a);

    cout<<"after update2 : "<<a<<endl;

    cout<<"------------------------------------------------------------"<<endl;

    // reference return type
    update3(a);
    cout<<"a : "<<a<<endl;


    // pointer return type
    update4(&a);
    cout<<"a : "<<a<<endl;

}