

// refer lec.no 29 of babbar's DSA playlist

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int rows, cols;
    // cin>>rows>>cols;

    // // creating 2D array dynamically

    // int** arr = new int*[rows];

    // for(int i=0; i<rows; i++)
    // {
    //     arr[i] = new int[cols];
    // }

    // // taking input

    // for(int i=0; i<rows; i++)
    // {
    //     for(int j=0; j<cols; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }

    // // printing output

    // for(int i=0; i<rows; i++)
    // {
    //     for(int j=0; j<cols; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // // after using array we have to release the allocation cuz it dynamic memory

    // // clearing memory

    // for(int i=0; i<rows; i++)
    // {
    //     delete []arr[i];
    // }

    // delete []arr;


    // creation of jagged array
    // jagged array - irregular array
    // jagged arrays are the arrays which have different number of columns in each row
    // ex: 
    // 0 1 2
    // 6 4 3 2
    // 8 9
    // 7 2 3 1 5
    // 9

    int rows; 
    cin>>rows;

    int* arrOfCols = new int[rows];
    // to store no.of colums in each row

    // taking cols of each row
    for(int i=0; i<rows; i++)
    {
        cin>>arrOfCols[i];
    }    

    // creating 2D array

    int** arr = new int*[rows];

    for(int i=0; i<rows; i++)
    {
        arr[i] = new int[arrOfCols[i]];
    }
    

    // taking input

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<arrOfCols[i]; j++)
        {
            cin>>arr[i][j];
        }
    }

    // printing jagged array

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<arrOfCols[i]; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    
}