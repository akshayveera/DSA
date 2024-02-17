

// vector of vectors
// we store vectors in vector so it becomes dynamic in both rows and columns

#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<vector<int>> v)
{
    cout<<"The vector of vectors is - "<<endl;

    for(int i=0; i<v.size(); i++)
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
    cout<<"Enter the size of vector / no.of vectors "<<endl;    
    cin>>n;

    vector<vector<int>> v;

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

        v.push_back(temp);


    }

    printArray(v);



}