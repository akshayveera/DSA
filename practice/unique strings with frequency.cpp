
// given n strings, print unique strings in lexiographical order with frequency 
// n <= 10^5 
// |s| < 100

#include<iostream>
#include<map>

using namespace std;

int main()
{

    map<string, int> m;

    cout<<"Enter input"<<endl;

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        
        if(m.find(s) == m.end())
        {
            m.insert({s,1});
        }
        else
        {
            m[s]++;
        }

    }

    cout<<"req output is "<<endl;
    for(auto &m1 : m)
    {
        cout<<m1.first<<" "<<m1.second<<endl;
    }
}