
// binary search algorithm
#include<iostream>

using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid=0;

    while(start<=end)
    {

        mid=(start + end)/2;
        
        if(arr[mid] == key)
        {
            return mid;

        }
        else if(key>arr[mid])
        {            
            start = mid+1;
            
        }
        else
        {
            end = mid-1;
            
        }
    }

    return -1;
}

int main()
{

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};


    int evenAns = binarySearch(even, 6, 2);
    int oddAns = binarySearch(odd, 5, 8);
    

    cout<<"key is at index "<<evenAns<<endl;
    cout<<"key is at index "<<oddAns<<endl;
}