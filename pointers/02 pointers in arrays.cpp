
// pointers in arrays

#include<bits/stdc++.h>

using namespace std;

int main()
{

    int arr[10] = {24, 11, 07, 23, 18};

    // arr - this returns the starting address of the array
    cout<<"arr : "<<arr<<endl;

    // arr[0] - this returns the 1st element or 0th indexed element of arr
    cout<<"arr[0] : "<<arr[0]<<endl;

    // &arr[0] - this returns the address of 1st element
    // arr = &arr[0]
    cout<<"&arr[0] : "<<&arr[0]<<endl;

    // *arr - "arr" is a address and * is dereferencing the element at address arr, hence it return 1st element of arr
    // *arr = arr[0]
    cout<<"*arr : "<<*arr<<endl;

    // *arr+1 - firstly derefernces the element and then 1 is added to that element
    // *arr+1 = arr[0]+1
    cout<<"*arr+1 : "<<*arr+1<<endl;

    // (*arr)+1 - this is same as above case
    cout<<"(*arr)+1 : "<<(*arr)+1<<endl;

    // *(arr+1) - "arr" is address so, arr+1 means it moves to the next address and *(arr+1) this derefernces the next address block of address arr
    // *(arr+1) = arr[1]
    cout<<"*(arr+1) : "<<*(arr+1)<<endl;


    


    // How arr[i] works behind the scenes ?
    // arr[i] = *(arr + i)     it works on this formula

    // ex: let arr = &arr[0] = 100 and datatype is int
    // arr[2] is calculated as follows
    // arr[2] = *(arr + 2)
    //                                 arr + 2 = 100 + 2(sizeof(arr[0])) = 100 + 2*4
    // arr[2] = *(100 + 8)
    // arr[2] = *(108)
    // *(108) derefernces the element at index 2

    cout<<"arr[3] : "<<arr[3]<<endl;
    cout<<"arr[3] : "<<*(arr+3)<<endl;


    // address operator - &
    // in arr[10] :  arr, &arr, &arr[0] all are same

    cout<<"arr : "<<arr<<endl;
    cout<<"&arr : "<<&arr<<endl;
    cout<<"&arr[0] : "<<arr[0]<<endl;


    // important representation

    // arr[4] and 4[arr] both are same because
    // arr[4] = *(arr + 4)
    // 4[arr] = *(4 + arr)

    cout<<"arr[4] : "<<arr[4]<<" and "<<"4[arr] : "<<4[arr]<<" - both are same"<<endl;


    // sizeof()

    char temp[10] = {'a'};
    char *ptr = &temp[0];

    cout<<"sizeof(temp) : "<<sizeof(temp)<<endl;
    cout<<"sizeof(*temp) : "<<sizeof(*temp)<<endl;
    cout<<"sizeof(&temp) : "<<sizeof(&temp)<<endl;

    cout<<"sizeof(ptr) : "<<sizeof(ptr)<<endl;
    cout<<"sizeof(*ptr) : "<<sizeof(*ptr)<<endl;
    cout<<"sizeof(&ptr) : "<<sizeof(&ptr)<<endl;


    // diff b/w arr=arr+1 and ptr=ptr+1

    // arr=arr+1 throughs error because we cant change the address of a variable
    // addresses of variables are noted in symbol table, we cant change the values of symbol table

    // in the case of ptr=ptr+1, the address stored in the ptr points increases to point next adddress

    // arr = arr+1;  ERROR

    int *pt = arr;

    cout<<"pt : "<<pt<<endl;
    pt = pt+1;
    cout<<"pt : "<<pt<<endl;


    

    
    

    

}