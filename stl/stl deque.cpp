
// deque - double ended queue
// In deque we can push or pop elements at ending as well as at beginning also

#include<iostream>
#include<deque>

using namespace std;

int main()
{

    deque<int> d;

    d.push_back(30);  // adds element at back
    d.push_front(20); // adds element at front
    d.push_front(10);

    cout<<"front element - "<<d.front()<<endl;    
    cout<<"back element - "<<d.back()<<endl;;    


    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back(); // removes element at back

    cout<<"after pop_back() "<<endl;

    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_front(); // removes element at front

    cout<<"after pop_front() "<<endl;

    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // erase - we can erase a single element or range of elements

    d = {1,2,3,4};

    // provide single address if single element should be removed else provide a range
    //d.erase(d.begin()); 
    d.erase(d.begin(),d.begin()+2); 
    cout<<"after erasing "<<endl;

    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    


}