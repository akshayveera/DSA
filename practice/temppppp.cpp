
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5] = {10, 3, 6, 17, 2};

    int n = sizeof(arr)/sizeof(int);    

    // for(int i=0; i<n; i++)
    // {
    //     int temp;
    //     cin>>temp;
    //     arr[i] = temp;
    // }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // int target = 20;

    // bool flag = false;

    // for(int i=0; i<n ; i++)
    // {
    //     if(arr[i] == target)
    //     {
    //         flag = true;
    //     }
    // }

    // flag ? cout<<"found"<<endl : cout<<"not found"<<endl;

    // bubble sort 

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n+1-i; j++)
        {
            if(arr[j-1]>arr[j])
            {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<n ; i++)
    {
        cout<< arr[i] << " ";
    }




}