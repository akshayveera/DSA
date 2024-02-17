
// given n strings and q queries, in each query you are given a string print thta string
// n <= 10^6 
// |s| < 100
// q <= 10^6

#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{

    unordered_map<string, int> m;

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

    int q;
    cin>>q;

    
    for(int i=0; i<q; i++)
    {
        string s;
        cin>>s;

        cout<<s<<" "<<m[s]<<endl;

    }



    

}