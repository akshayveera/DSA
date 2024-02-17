
//pointers

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num = 5;

    cout<<"num  = "<<num<<endl;
    
    // address of operator - &
    cout<<"address of num - "<<&num<<endl;
    
    // storing address of num in an int named addOfNum
    int addOfNum = int(&num);
    // here when we are converting address to int its no more address, its a value in int
    cout<<"address of num - "<<addOfNum<<endl;

    // though the value of addOfNum stores the address of num it cannot derefence the value of num cuz its an integer
    //cout<<"num = "<<*addOfNum<<endl; - this trows an error cause we cannot derefernce using int, we can do it through a pointer

    // To solve above problem ie, to access value using its address we use pointers
    // you can store address in pointer and later access the element using pointer
    int *pOfNum = &num;
    cout<<"value at pOfNum - "<<pOfNum<<endl;
    cout<<"value at which pOfnum is pointing to (num = ) - "<<*pOfNum<<endl;

    // int *varName = &someVarName 
    // above syntax means that varName is a pointer pointing to an integer and storing the address of someVarName

    // * - dereference operator

    // *p - returns the value at address pointed by p

    // size of pointer is always 8bytes
    // size of pointer is always 8 in 64bit systems because the highest value of address it can store is 8bytes beacause 1byte=8bits and 8*8=64bits
    // What determines the pointer size is for which platform you have built your program. If you build a Win32 program the pointers will be 32 bits. If you build a Win64 program the pointers will be 64 bits.
    // sometimes the size of pointer can be 4 bytes if the pointer is built on 32 bit basis
    // if pointer is built on 32bit basis - size is 4 bytes - simple math 32/8  and 8 is no.of bits in one byte
    // if pointer is built on 64bit basis - size is 8 bytes - simple math 64/8  and 8 is no.of bits in one byte

    cout<<"---------------------------------------------------------"<<endl;


    int a = 10;
    char b = 'a';
    float c = 2.3;
    double d = 45.2323;

    int *ptrA = &a;
    char *ptrB = &b;
    float *ptrC = &c;
    double *ptrD = &d;

    cout<<"size of ptrA - "<<sizeof(ptrA)<<endl;
    cout<<"size of ptrB - "<<sizeof(ptrB)<<endl;
    cout<<"size of ptrC - "<<sizeof(ptrC)<<endl;
    cout<<"size of ptrD - "<<sizeof(ptrD)<<endl;


    // bad practice - declaring a pointer and not initialising it results in pointing to a garbage value which is a bad practice
    // int *ptr;  - bad practice;
    // rather initialise it with 0;
    // int *ptr = 0;
    // in this case if you try to dereference you may get segmentation fault
    // segmentation fault - occurs when a program attempts to access a memory location that it is not allowed to access or access a restricted area of memory

    // initialisation of pointer

    int var = 10;

    // first method
    int *ptr = &var;

    // alternate method
    int *ptrVar = 0;
    ptrVar = &var;   // dont use *ptrVar = &var;

    cout<<"address stored in ptr - "<<ptr<<endl;
    cout<<"value of var - "<<*ptr<<endl;
    cout<<"address stored in ptrVar - "<<ptrVar<<endl;
    cout<<"value of var - "<<*ptrVar<<endl;


    cout<<"---------------------------------------------------------"<<endl;



    // case-1

    int val = 5;
    int val1 = val;
    val1++;

    cout<<"val = "<<val<<endl;

    // case-2

    val = 5;
    int *ptrVal = &val;
    int val2 = *ptr;   // this is same as val2 = val;
    val2++;

    cout<<"val = "<<val<<endl;

    //case-3

    val = 5;
    ptrVal = &val;
    (*ptrVal)++;

    cout<<"val = "<<val<<endl;

    *ptrVal = (*ptrVal)*2;
    cout<<"val = "<<val<<endl;



    cout<<"---------------------------------------------------------"<<endl;


    // copying a pointer

    int *p = &val;

    int *q =  p;  // dont do this int *q = *p

    cout<<"p - "<<p<<"   "<<"q - "<<q<<endl;
    cout<<"*p - "<<*p<<"   "<<"*q - "<<*q<<endl;


    cout<<"---------------------------------------------------------"<<endl;


    // pointer arithmetic - addition


    int newVar = 9;

    int *pt = &newVar;

    // case-1

    cout<<"*pt before - "<<*pt<<endl;
    
    *pt = (*pt) + 1;
        
    cout<<"*pt after - "<<*pt<<endl;

    //case-2

    cout<<"pt before - "<<pt<<endl;

    pt = pt+1;

    cout<<"pt after - "<<pt<<endl;


    // in case1 we increased the value which pt is pointing to
    // in case2 we increased the address stored in pt, here the updated value depends on the size of the datatype, ie, as we increased the address it moves to the next address, ie if the datatype is int(4bytes) the address increased by 4
    
    
    

}