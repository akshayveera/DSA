
// min max of an array

#include <iostream>
#include<climits>

using namespace std;

// own method

void ownMethod(int arr[], int size)
{

    
    for(int i=0; i<size-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp = arr[i+1];
            
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }

    int max = arr[size-1];

    for(int i=0; i<size-1; i++)
    {
        if(arr[i]<arr[i+1])
        {
            int temp = arr[i+1];
            
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
    
    
    int min = arr[size-1];
    
    cout<<"max : "<<max<<endl;
    cout<<"min : "<<min<<endl;
    cout<<endl;
    
}

// Babbar's method

int maxArr(int arr[], int size)
{
    int maxi = INT_MIN;

    for(int i=0; i<size; i++)
    {
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }

        /*
        above if block can be replaced with below code

        maxi = max(arr[i], maxi);

        */
        
    }

    return maxi;
}

int minArr(int arr[], int size)
{
    int mini =  INT_MAX;

    for(int i=0; i<size; i++)
    {
        if(arr[i]<mini)
        {
            mini = arr[i];
        }

        /*
        above if block can be replaced with below code

        mini = min(arr[i], mini);

        */
        
    }

    return mini;

}



int main()
{
    
    
    int size;
    cin>>size;
    
    int array[100];
    
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    
    // own method for finding max min of an array
    
    ownMethod(array,size);

    // Babbar's method

    cout<<"max : "<<maxArr(array,size)<<endl;
    cout<<"min : "<<minArr(array,size)<<endl;


    return 0;
}