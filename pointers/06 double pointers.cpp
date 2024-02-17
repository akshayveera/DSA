

// double pointers

#include<bits/stdc++.h>

using namespace std;

int main()
{

    int num = 9;

    int* ptr = &num;    // pointer

    int** dptr = &ptr;   // double pointer

    // to create a pointer to some element just add asterik after datatype and set the name of the variable
    // pointer is created by adding * to the int datatype 
    // in the same way double pointer is created by adding * to (int *) datatype of pointer

    // symbol table
    // num maps with &num
    // ptr maps with &ptr
    // dptr maps with &dpte

    
    // playing with double pointers

    // printing the value stored at num

    cout<<endl<<"printing the value stored at num"<<endl<<endl;

    cout<<"num : "<<num<<endl;
    cout<<"*ptr : "<<*ptr<<endl;
    cout<<"**dptr : "<<**dptr<<endl<<endl;


    // printing the address of num

    cout<<"printing the address of num"<<endl<<endl;

    cout<<"&num : "<<&num<<endl;
    cout<<"ptr : "<<ptr<<endl;
    cout<<"*dptr : "<<*dptr<<endl<<endl;

    // printing the value stored at ptr

    cout<<"printing the value stored at ptr"<<endl<<endl;

    cout<<"ptr : "<<ptr<<endl;
    cout<<"*dptr : "<<*dptr<<endl;
    cout<<"&num : "<<&num<<endl<<endl;

    // printing the address of ptr

    cout<<"printing the address of ptr"<<endl<<endl;

    cout<<"&ptr : "<<&ptr<<endl;
    cout<<"dptr : "<<dptr<<endl<<endl;

    // printing the value storedd at dptr

    cout<<"printing the value stored at dptr"<<endl<<endl;

    cout<<"dptr : "<<dptr<<endl;
    cout<<"&ptr : "<<&ptr<<endl<<endl;

    // printing the address of dptr

    cout<<"printing the address of dptr"<<endl<<endl;

    cout<<"&dptr : "<<&dptr<<endl<<endl;



    


    
}