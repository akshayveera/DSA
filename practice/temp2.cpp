#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> words = {"cd","ac","dc","ca","zz"};

    int count = 0;
    int n = words.size();
    cout<<n<<endl;
        
    for(int i=0; i<n-1; i++)
    {
        if(words[i]=="")
        {
            continue;
        }

        for(int j=i+1; j<n; j++)
        {
            // cout<<words[j]<<endl;
            reverse(words[j].begin(),words[j].end());
            if(words[i]==words[j])
            {
                count++;
                words[i] = "";
                words[j] = "";
            }           

        }
    }
    
    cout<<count;
    
    
}