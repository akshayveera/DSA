
#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int s, int e, int k)
{
    if(s>e)
    {
        return -1;
    }

    int m = s+(e-s)/2;

    if(arr[m]==k)
    {
        return m;
    }
    else if(k<arr[m])
    {
        return binarySearch(arr, s, m-1,k);
    }
    else
    {
        return binarySearch(arr, m+1, e , k);
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;

    cout<<binarySearch(arr, 0, n-1, k);
}