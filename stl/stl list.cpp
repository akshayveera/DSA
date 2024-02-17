
// list is similar to doubly-linkedlist
// we cannot access element directly through index like arr[] or at()

#include<iostream>
#include<list>

using namespace std;

int main()
{
    
    list<int> l;

    // list<int> n(5,100);  can be initialised like this also

    l.push_back(10);
    l.push_front(30);
    l.push_front(40);

    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    
    l.erase(l.begin());

    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;


}