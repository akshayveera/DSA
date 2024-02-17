

// algorithms in stl


#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{

    vector<int> v = {65,91,24,15,81,61,65};

    for(auto ele: v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    // upper_bound , lower_bound
    // to use these both functions the input data should be sorted 
    // they return iterator in terms of stl containers or pointers in case of array
    // upper_bound returns the address of next element to it even if the element is present
    // lower_bound returns the element if it is present else returns the next element's address

    sort(v.begin(),v.end());

    cout<<"after sorting"<<endl;

    for(auto ele: v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;



    cout<<"upper bound of 25"<<endl;

    auto it = upper_bound(v.begin(), v.end(), 25);

    if(it != v.end())
    {
        cout<<(*it)<<endl;
    }
    else
    {
        cout<<"no matches"<<endl;
    }

    cout<<"lower bound of 25"<<endl;

    auto itr = lower_bound(v.begin(), v.end(), 25);

    if(itr != v.end())
    {
        cout<<(*itr)<<endl;
    }
    else
    {
        cout<<"no matches"<<endl;
    }


    // other algorithms

    int min = *min_element(v.begin(),v.end());
    cout<<"min element is - "<<min<<endl;

    int max = *max_element(v.begin(),v.end());
    cout<<"max element is - "<<max<<endl;

    int sum = accumulate(v.begin(),v.end(),0);  // third argument 0 is the initial sum
    cout<<"sum of elements is - "<<sum<<endl;

    int frequency = count(v.begin(),v.end(),65);
    cout<<"frequency of 65 is - "<<frequency<<endl;

    auto iter = find(v.begin(),v.end(), 24);   // this returns the iterartor
    if(iter != v.end())
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"absent"<<endl;
    }

    // reverse(start_address, end_address) this returns the  reversed array/vector/string

    reverse(v.begin(),v.end());

    cout<<"reversed vector"<<endl;

    for(auto ele: v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    string s = "coding in cpp";

    reverse(s.begin(),s.end());

    for(auto str: s)
    {
        cout<<str;
    }
    cout<<endl;


    // how to find the index of an element

    // firstly find the iterator of the element
    auto iterat = find(v.begin(),v.end(),15);

    // then find how far is it from v.begin() using distance() function
    int index = distance(v.begin(), iterat); 
    // distance takes iterator as an input and returns index of the iterator

    cout<<"index of 15 - "<<index<<endl;
    

}