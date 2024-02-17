
#include<iostream>

using namespace std;


void sortArr1(int arr[], int size)
{
    int zeros=0, ones=0, twos=0;

    for(int i=0; i<size; i++)
    {
        if(arr[i]==0)
        {
            zeros++;
        }
        else if(arr[i]==1)
        {
            ones++;
        }
        else if(arr[i]==2)
        {
            twos++;
        }
    }

    int ans[size];
    int in=0;

    while(zeros)
    {
        ans[in]=0;
        in++;
        zeros--;
    }

    while(ones)
    {
        ans[in]=1;
        in++;
        ones--;
    }

    while(twos)
    {
        ans[in]=2;
        in++;
        twos--;
    }

    for(int i=0; i<size; i++)
    {
        cout<<ans[i]<<" ";
    }

}

void printArr(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}



int main()
{
    int arr[7] = {0,1,2,1,2,1,2};

    sortArr1(arr,7);
    



}