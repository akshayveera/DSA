

#include<iostream>
#include<array>  // to use stl array

using namespace std;

int main()
{
    // we need to include array in the header file to declare/initialize stl array
    array<int, 5> arr = {1,2,3,4,5};

    // size of an array
    int size = arr.size();

    // printing the array
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    // at - return the value at the provided index
    cout<<"Element at index 3 is "<<arr.at(3)<<endl;

    // front - first element of an array
    cout<<"First element of an array is "<<arr.front()<<endl;

    // back - last element of an array
    cout<<"Last element of an array is "<<arr.back()<<endl;

    // empty - checks whether array is empty
    cout<<"Array is empty "<<arr.empty()<<endl;

    // begin - return the starting address of an array
    cout<<"Starting address of an array is "<<int(arr.begin())<<endl;

    // end - returns the ending address of an array
    cout<<"Ending address of an array is "<<int(arr.end())<<endl;

    















    

    
}