
// pointers in char arrays

#include<bits/stdc++.h>

using namespace std;

int main()
{

    // there is difference between functions of int arrays and char array

    int arrInt[5] = {1,2,3,4,5};
    
    char arrChar[6] = "abcde";
    // we need t0 take n+1 size array in char arrays cuz it includes '\0'(null char) at the end


    // cout function is differently implemented for int array and char array

    cout<<"arrInt : "<<arrInt<<endl;  // this prints the first address of the array

    cout<<"arrChar : "<<arrChar<<endl;  // this prints the elements of the array from first address till null char if found

    cout<<"&arrChar : "<<&arrChar<<endl;  // this prints the first address of the char array

    cout<<"&arrChar[0] : "<<&arrChar[0]<<endl;  // this prints the elements of the array from first address till null char if found

    
    // how to print address of i-th element in char array

    // do type casting using (void*)
    // we type cast the address to void* type because we cannot directly print the address in char arrays

    cout<<"address of 3rd element is : "<<(void*)&arrChar[2]<<endl;
    cout<<"address of 5rd element is : "<<(void*)&arrChar[4]<<endl;

    
    // pointers in chars

    char *ptr = &arrChar[0];
    // ptr points to the char on the address provided 

    cout<<"ptr : "<<ptr<<endl;
    cout<<"*ptr : "<<*ptr<<endl;
    cout<<"&ptr : "<<&ptr<<endl;

    // when there is no null char
    
    char temp = 'a';
    char *pt = &temp;
    
    cout<<"temp : "<<temp<<endl;

    cout<<"pt : "<<pt<<endl;  // this has no null char hencec it prints all the chars till it finds a null char


    // bts of two cases of initialising char array

    // case-1

    char charArray[6] = "abcde";

    // what happens bts is
    // 1) a temporary memory is created for "abcde/0"
    // 2) a variable charArray is created
    // 3) content of temporary memory is copied into variable charArray

    
    // case-2

    char *c = "abcde";

    // what happens bts is
    // 1) a temporary memory is created for "abcde/0"
    // 2) a pointer is created and it is pointed to the first element of temporary memory

    // this is a bad and risky process so dont use it


    



}

