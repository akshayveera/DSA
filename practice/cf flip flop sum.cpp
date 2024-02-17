

#include<bits/stdc++.h>

using namespace std;



int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;

        vector<int> v;

        for(int i=0; i<n; i++)
        {
            int e;
            cin>>e;

            v.push_back(e);
        }

        int sum = accumulate(v.begin(),v.end(),0);
        
        bool t = true;

        if(t)
        {
            for(int i=0; i<n-1; i++)
            {
                if(v[i]==-1 && v[i+1]==-1)
                {
                    cout<<sum+4<<endl;
                    t = false;
                    break;
                }
            }            

        }
        
        if(t)
        {
            for(int i=0; i<n-1; i++)
            {
                if((v[i]==1 && v[i+1]==-1) || (v[i]==-1 && v[i+1]==1))
                {
                    cout<<sum<<endl;
                    t = false;
                    break;
                }
            
            }           

        }
        
        if(t)
        {
            for(int i=0; i<n-1; i++)
            {
                if(v[i]==1 && v[i+1]==1)
                {
                    cout<<sum-4<<endl;
                    t = false;
                    break;
                }
            }          
        }


    }




    return 0;




}