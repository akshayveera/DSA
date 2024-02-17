

// double pointers in functions

#include<bits/stdc++.h>

using namespace std;

void update(int **dptr)
{
    // from below three cases use only any one case simultaneously cuz we are dealing with addresses nad pointers

    // dptr = dptr + 1;
    // does any thing change after this in main function after executing this statement ?
    // NO - nothing changes cuz new double pointer is created by update function and updation is done in that
    
    // *dptr = *dptr + 1;
    // does any thing change after this in main function after executing this statement ?
    // YES - the address stored in ptr updates to next address(or simple the value of ptr updates)

    **dptr = **dptr + 1;
    // does any thing change after this in main function after executing this statement ?
    // YES - the value of num increases by 1



}

int main()
{

    int num = 9;

    int* ptr = &num;

    int** dptr = &ptr;


    // before passing

    cout<<"num1 : "<<num<<endl;
    cout<<"ptr : "<<ptr<<endl;
    cout<<"dptr : "<<dptr<<endl;

    update(dptr);
    cout<<endl;

    // after passing
    cout<<"num2 : "<<num<<endl;
    cout<<"ptr : "<<ptr<<endl;
    cout<<"dptr : "<<dptr<<endl;
}