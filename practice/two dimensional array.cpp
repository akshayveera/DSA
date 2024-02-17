

#include<bits/stdc++.h>

using namespace std;

int main()
{
    // 1 2 3 4 5 6 7 8 9 10 11 12
    // create 2D aray

    // declaration and initialisation all to zero;
    int arr[3][4] = {0};

    // other ways of initialisation
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,1,2,3};
    //int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,1,2,3}};


    // row wise input
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>arr[i][j];
        }
    }

/*
    // column wise input
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[j][i];
        }
    } */

    // output of array
    cout<<"The 2D array is : "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // linear search
    bool flag = false;
    int k =9;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(arr[i][j] == k)
            {
                flag = true;
                break;
            }
        }
    }

    cout<<"K is present in array : "<<flag<<endl;;


    // row-wise sum
    int sum=0;
    int larSum=0;
    int row=0;

    
    for(int i=0; i<3; i++)
    {
        sum = 0;
        for(int j=0; j<4; j++)
        {
            sum += arr[i][j];
        }
        cout<<"sum of row "<<i+1<<" is : "<<sum<<endl;
        if(sum>larSum) 
        {
            larSum=sum;
            row = i+1;
        }
        
    }

    cout<<"Largest row sum is row-"<<row<<endl;


    // column-wise sum
    int col=0;
    larSum = 0;

    for(int i=0; i<4; i++)
    {
        sum = 0;
        for(int j=0; j<3; j++)
        {
            sum += arr[j][i];
        }
        cout<<"sum of column "<<i+1<<" is : "<<sum<<endl;
        if(sum>larSum) 
        {
            larSum=sum;
            col = i+1;
        }
    }

    cout<<"Largest col sum is col-"<<col<<endl;

    


}