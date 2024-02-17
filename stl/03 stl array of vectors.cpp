
// array of vectors
// its like two dimensional array of static rows(length of array) but dynamic columns in each row(length of vectors)
// every element of the array is a vector

#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> v[],int size)
{
    cout<<"The array of vectors is - "<<endl;

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{

    int n;
    cout<<"Enter the size of array / no.of vectors "<<endl;    
    cin>>n;

    vector<int> v[n];

    for(int i=0; i<n; i++)
    {
        int s;
        cout<<"Enter the size of vector"<<i+1<<endl;
        cin>>s;

        vector<int> temp;
        cout<<"Enter elements"<<endl;

        for(int j=0; j<s; j++)
        {
            int e;
            cin>>e;
            temp.push_back(e);
        }

        v[i] = temp;

    }

    printArray(v,n);



}