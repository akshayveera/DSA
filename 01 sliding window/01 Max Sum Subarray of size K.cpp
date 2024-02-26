
// Max Sum Subarray of size K - GFG

#include<bits/stdc++.h>

using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr , int N){        
    
    long sum = 0;
    long mx = LONG_MIN;
    
    for(int i=0; i<N; i++)
    {
        sum += Arr[i];
        
        if(i == K-1)
        {
            mx = sum;
        }
        else if(i > K-1)
        {
            sum -= Arr[i-K];
            
            mx = max(sum, mx);
        }
    }
    
    return mx;   
    
}

int main(){

    vector<int> Arr = {100, 200, 300, 400};

    long ans = maximumSumSubarray(2, Arr, 4);

    cout<<ans<<endl;
}