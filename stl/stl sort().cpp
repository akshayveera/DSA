
// stl sort() algorithm
// sort(starting_address, ending_address+1)
// we have to provide the address from where we have to start sorting and next address to the end address
// in this algo, we can also define custom sorting behaviour using comparator functions\
// This sort() algo is known as introsort which uses three sortings algos ie, quick sort, heap sort and insertion sort
// tc : O(nlogn)


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int arr[] = {34,56,23,76,26,16};

    cout<<"Array before sorting"<<endl;

    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    sort(arr+2,arr+6);         // In arrays arrayName returns the address of the first location

    cout<<"Array after sorting from index 2"<<endl;
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    sort(arr,arr+6);

    cout<<"Array after sorting from index 0"<<endl;
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    vector<int> vec = {23,67,34,97,53,23};

    cout<<"Vector before sorting"<<endl;

    for(int i=0; i<6; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    sort(vec.begin()+2,vec.end());         // In vector , vector.begin() provides the starting address of the vector
    cout<<"Vector after sorting from index 2"<<endl;
    for(int i=0; i<6; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    sort(vec.begin(),vec.end());

    cout<<"Vector after sorting from index 0"<<endl;
    for(int i=0; i<6; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    // sort in decresing order

    sort(vec.begin(),vec.end(),greater<int>());

    cout<<"Vector after sorting decresing order"<<endl;
    for(int i=0; i<6; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    // sorting in decreasing order using rbegin(), rend()

    sort(vec.rbegin(),vec.rend());  // rbegin and rend are reverse iterators

    cout<<"Vector after sorting decresing order using reverse iterator"<<endl;
    for(int i=0; i<6; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    






    

    


    
    

    



}