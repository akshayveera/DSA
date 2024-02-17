

#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> ans;

void recursion(vector<int> &arr, int n, int idx,vector<int> temp)
{
    // base case
    if(idx == n)
    {
        if(temp.size()==0)
        {
            return;
        }
        ans.push_back(temp);
        return;
    }

    // not take
    recursion(arr, n, idx+1, temp);

    // take
    temp.push_back(arr[idx]);
    recursion(arr, n, idx+1, temp);

}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ans.clear();

        int n;
        cin>>n;

        vector<int> arr;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }

        vector<int> temp;

        recursion(arr, n, 0, temp);

        for(auto val: ans)
        {
            for(auto n : val)
            {
                cout<<n<<" ";
            }
            cout<<endl;
        }

    }
}