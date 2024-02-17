
#include<bits/stdc++.h>

using namespace std;


// babbar method
int getSum(int arr[], int size)
{
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }

    int remainingPart = getSum(arr+1, size-1);
    int sm = arr[0] + remainingPart;
    return sm;


}

// my method
int sumOfArray(int arr[], int n)
{

    if(n==0)
    {
        return 0;
    }

    if(n==1)
    {
        return arr[0];
    }

    arr[n-2] += arr[n-1];
    sumOfArray(arr, n-1);
}


int main()
{
    int n;
    cin>>n;

    int arr[100];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<getSum(arr,n)<<endl;

    cout<<sumOfArray(arr, n)<<endl;
}