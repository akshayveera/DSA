
// First negative integer in every window of size k - GFG

#include<bits/stdc++.h>

using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {

    vector<long long> ans;

    for(int i=0; i<N-K+1; i++)
    {
        for(int j=i; j<i+K; j++)
        {
            if(A[j]<0)
            {
                ans.push_back(A[j]);
                break;
            }
            else if(j==i+K-1)
            {
                ans.push_back(0);
            }
        }
    }   

    return ans;             
    
}

int main(){

    long long int arr[5] = {-8, 2, 3, -6, 10};

    vector<long long> ans = printFirstNegativeInteger(arr, 5, 2);

    for(auto val : ans)
    {
        cout<<val<<" ";
    }    

}