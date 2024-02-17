
// next greater element

#include<bits/stdc++.h>

using namespace std;


vector<int> NGE(vector<int> v)
{
    int n = v.size();

    vector<int> ans(n,-1);

    stack<int> st;

    for(int i=0; i<n; i++)
    {
        while(!st.empty() && v[i]>v[st.top()])
        {
            ans[st.top()] = i;
            st.pop();
        }

        st.push(i);
    }

    return ans;
}

int main()
{    

    int n;
    cin>>n;

    vector<int> v(n);    

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    vector<int> nge = NGE(v);

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" "<<(nge[i]==-1 ? -1 : v[nge[i]])<<endl;
    }

}