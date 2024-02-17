
// pointers functions arrays

// when we pass arr to function, it passes pointer of first element of array to function
// ie, int printSum(int arr[], int size) and int printSum(int *arr, int size) both are same

#include<bits/stdc++.h>

using namespace std;


int printSum(int arr[], int size)
{

    cout<<"size of array : "<<sizeof(arr)<<endl;
    // here it prints the size of pointer named arr

    int sum = 0;

    for(int i=0; i<size; i++)
    {
        sum += arr[i];
    }

    return sum;
}


int print_sum(int *arr, int size)
{

    cout<<"size of array : "<<sizeof(arr)<<endl;
    // here it prints the size of pointer named arr

    int sum = 0;

    for(int i=0; i<size; i++)
    {
        sum += arr[i];
    }

    return sum;
}



int main()
{
    int arr[6] = {1,2,3,4,5,6};

    cout<<"size of array : "<<sizeof(arr)<<endl;

    cout<<printSum(arr, 6)<<endl;
    cout<<print_sum(arr, 6)<<endl;

}