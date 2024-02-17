

#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    cout<<"no.of test cases :"<<t<<endl;

    while(t--)
    {

        vector<int> v;

        int n;
        cin>>n;
        

        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        } 

        int req;

        bool flag = false;


        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                req = __gcd(v[i],v[j]);

                if(req<=2)
                {
                    flag = true;
                    i = n;
                    j = n;
                }

            }
        }

        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        

        
    }
}

