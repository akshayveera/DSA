
// Next Greater Element - 1

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};


    int n2 = nums2.size();
    unordered_map<int,int> mp;

    stack<int> st;

    for (int i = 0; i < n2; i++)
    {
        while (!st.empty() && nums2[i] > nums2[st.top()])
        {
            mp[nums2[st.top()]] = i;
            st.pop();
        }

        st.push(i);
    }

    while(!st.empty())
    {
        mp[nums2[st.top()]] = -1;
        st.pop();
    }

    
    int n1 = nums1.size();

    for(int i=0; i<n1; i++)
    {
        nums1[i] = mp[nums1[i]] == -1 ? -1 : nums2[mp[nums1[i]]];
    }

    for(auto val : nums1)
    {
        cout<<val<<" ";
    }
    cout<<endl;



    return 0;
}