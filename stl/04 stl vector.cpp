

#include<iostream>
#include<vector>  // to use stl vector

// tc of pushback() - O(1)
// tc of size() - O(1)

using namespace std;

int main()
{

    vector<int> arr;

    // size is the no.of elements present in the array
    // capacity is the no.of elements for whom space is assigned/reserved 

    cout<<"size - "<<arr.size()<<endl;
    cout<<"capacity - "<<arr.capacity()<<endl;

    // we can add the elements using push_back() function
    arr.push_back(10);
    cout<<"pushed 10 into vector"<<endl;
    cout<<"size - "<<arr.size()<<endl;
    cout<<"capacity - "<<arr.capacity()<<endl;

    arr.push_back(20);
    cout<<"pushed 20 into vector"<<endl;
    cout<<"size - "<<arr.size()<<endl;
    cout<<"capacity - "<<arr.capacity()<<endl;
    
    arr.push_back(30);
    cout<<"pushed 30 into vector"<<endl;
    cout<<"size - "<<arr.size()<<endl;
    cout<<"capacity - "<<arr.capacity()<<endl;

    arr.push_back(40);
    cout<<"pushed 40 into vector"<<endl;
    cout<<"size - "<<arr.size()<<endl;
    cout<<"capacity - "<<arr.capacity()<<endl;

    arr.push_back(50);
    cout<<"pushed 50 into vector"<<endl;
    cout<<"size - "<<arr.size()<<endl;
    cout<<"capacity - "<<arr.capacity()<<endl;

    for(int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    // at, front, back can be used in same manner
    cout<<"element at index 2 is "<<arr.at(2)<<endl;
    cout<<"front of the vector is "<<arr.front()<<endl;
    cout<<"back of the vector is "<<arr.back()<<endl;

    
    // clear - used to erase all the elements
    // it reduces size to zero but doesnt alter capacity
    arr.clear();
    cout<<"cleared the vector "<<endl;
    cout<<"size - "<<arr.size()<<endl;
    cout<<"capacity - "<<arr.capacity()<<endl;

    // different initialization of  vector
    // vector_name(size, element); every index of an element is assigned with 1 (default value is zero)

    // vector<int> arr1(5);  this creates a vector of size 5 and initialize every element with zero - 0 0 0 0 0 

    vector<int> arr1(5,1);
    cout<<"vector intialized all of its index with 1"<<endl;

    for(int i=0; i<arr1.size(); i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    // copying a vector into other vector
    // vactor_name(vector_name that you want to copy)
    vector<int> arr1_copy(arr1);
    cout<<"copied the above vector"<<endl;

    for(int i=0; i<arr1_copy.size(); i++)
    {
        cout<<arr1_copy.at(i)<<" ";
    }
    cout<<endl;

    // pop_back() removes the back element of the vector

    arr1_copy.pop_back();
    cout<<"pop_back() is done on arr_copy"<<endl;
    for(int i=0; i<arr1_copy.size(); i++)
    {
        cout<<arr1_copy.at(i)<<" ";
    }
    cout<<endl;

    

    
    





}