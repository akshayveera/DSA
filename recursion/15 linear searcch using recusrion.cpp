
#include<bits/stdc++.h>

using namespace std;

int linSearch(int arr[], int n, int key)
{
    if(n==0)
    {
        return -1;
    }

    if(n==1)
    {
        if(arr[0]==key)
        {
            return 0;
        }
        else
        {
            return -1;
        }

    }

    if(arr[n-1]==key)
    {
        return n-1;
    }
    else
    {
        int ans = linSearch(arr, n-1, key);
        return ans;
    }

    return -1;


}

//babbar method
// this is just to return whether element is present or absent, not index
bool linearSearch(int arr[], int n, int key)
{
    if(n==0)
    {
        return 0;
    }

    if(arr[0]==key)
    {
        return 1;
    }
    else
    {
        // remaining part
        
        bool ans = linearSearch(arr+1, n-1, key) ;
        return ans;
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

    int key;
    cin>>key;

    cout<<linearSearch(arr, n, key)<<endl;
    cout<<"key is at index : "<<linSearch(arr, n, key);
}

