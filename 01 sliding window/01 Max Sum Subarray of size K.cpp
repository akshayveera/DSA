
// Max Sum Subarray of size K - GFG

#include<bits/stdc++.h>

using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr , int N){        
    
    
    long mx = LONG_MIN;

    // // using brute force

    // int i=0;

    // while(i<N-K+1)
    // {
    //     long sum = 0;
    //     int j = i;

    //     while(j<i+K)
    //     {
    //         sum += Arr[j];
    //         j++;
    //     }

    //     mx = max(mx, sum);
    //     i++;
    // }


    // using for loop
    // for(int i=0; i<N; i++)
    // {
    //     sum += Arr[i];
        
    //     if(i == K-1)
    //     {
    //         mx = sum;
    //     }
    //     else if(i > K-1)
    //     {
    //         sum -= Arr[i-K];
            
    //         mx = max(sum, mx);
    //     }
    // }


    // using while loop - two pointer approach
    long sum = 0;

    int i=0, j=0;

    while(j<N)
    {
        sum += Arr[j];

        if(j-i+1 < K)
        {            
            j++;
        }
        else if(j-i+1 == K){
            mx = max(mx, sum);
            sum -= Arr[i];
            i++;
            j++;
        }
    }
    
    return mx;   
    
}

int main(){

    vector<int> Arr = {100, 200, 300, 400};

    long ans = maximumSumSubarray(2, Arr, 4);

    cout<<ans<<endl;
}