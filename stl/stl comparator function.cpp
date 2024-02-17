

// comparator function

#include<bits/stdc++.h>

using namespace std;

bool cmpInc(int a, int b)
{
    return a<b;
}

bool cmpDec(int a, int b)
{
    return a>b;
}

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first != b.first)
    {
        return a.first > b.first;
    }
    else
    {
        return a.second < b.second;
    }
}


int main()
{
    vector<int> v = {6,3,8,2,9,1,7};

    cout<<"vector before sorting"<<endl;

    for(auto val: v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end(),cmpInc);

    cout<<"vector after sorting increasing order"<<endl;

    for(auto val: v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end(),cmpDec);

    cout<<"vector after sorting decreasing order"<<endl;

    for(auto val: v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    int n;
    cin>>n;

    vector<pair<int,int>> vPair(n);


    for(int i=0; i<n; i++)
    {
        cin>>vPair[i].first>>vPair[i].second;
    }

    sort(vPair.begin(),vPair.end(), cmp);

    cout<<"sorting using comparator function incdec"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<vPair[i].first<<" "<<vPair[i].second<<endl;
    }

    

}
