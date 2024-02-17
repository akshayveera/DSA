
#include<bits/stdc++.h>

using namespace std;

bool isSorted(int arr[],int n, int idx)
{
    if(idx==n-1)
    {
        return true;
    }
    
    if(arr[idx]<=arr[idx+1])
    {
        return isSorted(arr, 6, idx+1);
    }
    else
    {
        return false;
    }
}

//babbar method

bool isitSorted(int arr[], int size)
{
    if(size==0 || size==1)
    {
        return true;
    }

    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        bool ans = isitSorted(arr+1, size-1);
        return ans;
    }
}

int main()
{
    int arr[6] = {2,4,6,9,11,13};

    cout<<isSorted(arr, 6, 0)<<endl;

    cout<<isitSorted(arr, 6)<<endl;
}
