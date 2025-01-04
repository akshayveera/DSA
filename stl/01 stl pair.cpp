
// pairs

#include<iostream>

using namespace std;

int main()
{

    pair<int,string> p;   // pair declaration pair<type,type> variable_name;

    p = {4, "abcd"};  // pair initialisation

    cout<<p.first<<"  "<<p.second<<endl;

    p = make_pair(5,"abcde");  // pair initialisation

    cout<<p.first<<"  "<<p.second<<endl;

    // other way of initialisation
    p.first = 6;
    p.second = "abcdef"; 

    cout<<"pair p - "<<p.first<<"  "<<p.second<<endl;


    // copying a pair

    cout<<"copying a pair"<<endl;
    pair<int,string> pCopy = p;  // or we can also use pCopy(p) to copy p into pCopy
    pCopy.first = 9;

    
    cout<<"pair pCopy - "<<pCopy.first<<"  "<<pCopy.second<<endl;
    cout<<"pair p - "<<p.first<<"  "<<p.second<<endl;

    cout<<"Address of p - "<<&p.first<<" and "<<&p.second<<endl;
    cout<<"Address of pCopy - "<<&pCopy.first<<" and "<<&pCopy.second<<endl;


    // pointing a new variable to same pair

    /*
    * &var_name - this syntax is used in different cases like 
    *
    * 1) for fetching the memory address - cout<<&var_name<<endl;  this return the address of the variable
    * 2) for storing the memory address in a pointer - int *ptr = &var_name
    * 3) passing the arguments of function by reference rather than by value - int add(int &a, int &b){ retrun a+b} - in this case rather than creating a copy of arguments it creates the reference to that value that is passed
    * 4) creating a new variable and pointing it to existing variable rather than creating a copy of existing variable, similar to above case 3. - int &var_name = old_var
    *  
    * In the case of 3 and 4, creating a reference or pointing to value means that the new variable is pointed to same existing variable, that means old-varible and new-variable are pointed to same memory location/address unlike normal initalization in which each variable has its own memory location.
    */


    cout<<"pointing a new variable to same pair"<<endl;
    pair<int,string> &pCopy1 = p;
    pCopy1.first = 9;
    cout<<"pair pCopy1 - "<<pCopy1.first<<"  "<<pCopy1.second<<endl;
    cout<<"pair p - "<<p.first<<"  "<<p.second<<endl;

    cout<<"Address of p - "<<&p.first<<" and "<<&p.second<<endl;
    cout<<"Address of pCopy1 - "<<&pCopy1.first<<" and "<<&pCopy1.second<<endl;

    // array of pairs

    cout<<"array of pairs"<<endl;

    pair<int,int> p1 = {1,6};
    pair<int,int> p2 = {2,5};
    pair<int,int> p3 = {3,4};

    pair<int,int> arr[3];

    arr[0] = p1;
    arr[1] = p2;
    arr[2] = p3;

    for(int i=0; i<3; i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }

    // swapping pair1 and pair3

    cout<<"swapping p1 nad p3"<<endl;

    swap(arr[0],arr[2]);

    for(int i=0; i<3; i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }


    // taking an input pair

    pair<int,string> pInput;

    cout<<"Enter p first"<<endl;
    cin>>p.first;
    cout<<"Enter p scecond"<<endl;
    cin>>p.second;

    cout<<"pInput - "<<p.first<<" "<<p.second<<endl;



}




