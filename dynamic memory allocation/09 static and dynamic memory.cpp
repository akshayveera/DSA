

// static and dynamic memory

// note
// Compile time is the period when the programming code (such as C#, Java, C, Python) is converted to the machine code (i.e. binary code)
// Runtime, on the other hand, refers to the period during which a program is running or executing on a computer


#include<bits/stdc++.h>

using namespace std;

int main()
{

    // why taking variabe length arrays is a bad practice ?

    // when a program is executing it has two types of memory 
    // - static memory : stack memory
    // - dynamic memory : heap memory

    // stack memory is small memory where as heap memory is large memory

    // when we declare a varible length array, size is known at run-time not compile-time, this is bad practice cuz when the size given at run-time is larger than stack size it results in failure.


    // Hence, can't we take a variable length array?

    // we can use variable length array, but the array should be created in heap memory



    // first lets know how to use heap memory

    // creating a variable in heap memory 
    // this is also known as dynamic memory allocation

    // new - keyword is used to create an element (used to allocate memory)

    new int; // this return the address of heap memory
    // naming is not allowed in heap, hence we create pointer to access

    int *ptr  = new int;
    *ptr = 9;
    // int is created in heap 
    // ptr is created in stack and it is pointed to the int in heap
    // total memory burnt is
    // - 8/4 bytes for pointers in stack
    // - 4 bytes for int in heap 
    // total - stack + heap = 12    

    // delete - keyword is used to delete an allocation of memory(used to delocate memory)

    // here we use delete also because unlike the case of static memory when the block of code(function/loops) complete its execution the stack memory is cleared or released automatically but in case of dynamic memory the memory is not released automatically we should dynamically release the allocation of memory in heap

    cout<<"*ptr : "<<*ptr<<endl;

    delete ptr;

    cout<<"*ptr : "<<*ptr<<endl;

    // create an array in heap

    int n;
    cin>>n;

    int* arr = new int[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    delete []arr;

    cout<<endl<<arr[1]<<endl;



    // diff b/w static and dynmaic memory

    // static                                 dynamic
    
    // stack                                  heap
    // delloccate automatically               delloccate manually
    // size - only in stackd                  size - pointer(stack) + elements(heap)



    // case-1

    // while(true)
    // {
    //     int i = 9;
    // }

    // in this case for every iteration i is created and value 9 is assigned and at the end(when "}" is encountered) i is released/cleared


    // case-2

    // while(true)
    // {
    //    int* ptr = new int;    
    // }

    // in this case,in stacak pointer is created and released in every iteration but in heap the memory is not dellocated automatically, hence the memory in heap is going on increaing for infinite iterations, thus the memory gets full and program can be crashed
    




}














