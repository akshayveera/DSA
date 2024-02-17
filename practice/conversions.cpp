
// decimal to binary conversion

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0;
    int i=0;
    while(n!=0)
    {
        int bit = n&1;
        sum = bit*pow(10,i) + sum;

        n = n>>1;
        i++;
    }

    cout<<sum<<endl;

}
