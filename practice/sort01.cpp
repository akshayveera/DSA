

#include<iostream>
using namespace std;

void sortArr(int arr[], int size)
{
    int i=0,j=size-1;

    while(i<j)
    {
        while(arr[i]==0)
        {
            i++;
        }

        while(arr[j]==1)
        {
            j--;
        }

        while(arr[i]==1 && arr[j]==0 && i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

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
    int arr[8] = {1,1,0,0,0,0,1,0};

    sortArr(arr,8);

    printArr(arr,8);

}