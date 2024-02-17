

// pointers in functions

// note

// We have 3 methods below
// In main method we created a pointer ptr and passed ptr to other two methods
// When we are updating *ptr(value at which pointer is pointing) it is updated at num but when we update value of ptr it is getting updated in resp. functions not getting updated in main method
// reason is when we pass a ptr to a function, function creates a new pointer and copies the value which we have passed to it
// after the completion of function execution along with the function ptr created in that function also gets cleared

// simply the pointers in all the functions below are different but pointing to the same element

#include<bits/stdc++.h>

using namespace std;

void print(int *ptr)
{
    cout<<"accessing value at which pointer is pointing in print function : "<<*ptr<<endl;
    cout<<"value stored in ptr in print function : "<<ptr<<endl;
    cout<<"address of ptr in print function : "<<&ptr<<endl;
}

void update(int *ptr)
{
    cout<<"accessing value at which pointer is pointing in update function : "<<*ptr<<endl;
    cout<<"value stored in ptr in update function : "<<ptr<<endl;
    cout<<"address of ptr in update function : "<<&ptr<<endl;

    // *ptr = *ptr+1;
    // this updates the value at num to num+1

    cout<<"value of *ptr after updating : "<<*ptr<<endl;

    ptr = ptr+1;
    // this change doesnt update in main method
    // cuz this function creates a new variable ptr which doesnt exist after completion of execution of this function
    
    cout<<"value of ptr after updating : "<<ptr<<endl;



}

int main()
{
    int num = 9;

    int *ptr = &num;

    cout<<"accessing value at which pointer is pointing in main function : "<<*ptr<<endl;
    cout<<"address of pointer in main function : "<<&ptr<<endl;

    cout<<endl;

    cout<<"-------------print function-----------------"<<endl;
    print(ptr);

    cout<<endl;

    cout<<"-------------update function-----------------"<<endl;
    update(ptr);

    cout<<endl;

    cout<<"-------------main function-----------------"<<endl;
    cout<<"accessing value at which pointer is pointing in main function : "<<*ptr<<endl;
    cout<<"address of pointer in main function : "<<&ptr<<endl;




    


}