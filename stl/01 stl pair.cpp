
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




