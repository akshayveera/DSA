
// vector of pairs
// here you can store any number of pair in a vector
// access each pair with index of vector
// you can push_back or pop_back pairs 

#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<pair<int,int>> &v)
{
    cout<<"The vector of pairs is - "<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main()
{

    int n;
    cout<<"Enter the size of vector / no.of pairs "<<endl;    
    cin>>n;

    vector<pair<int,int>> vPair;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter the pair"<<i+1<<endl;
        
        pair<int,int> temp;
        cin>>temp.first;
        cin>>temp.second;

        vPair.push_back(temp);
    }

    printVector(vPair);

    // other way of initlialisation
    vector<pair<int, int>> v = {{1,2},{2,3},{3,4}};

    cout<<"------------------------------------------------"<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

}