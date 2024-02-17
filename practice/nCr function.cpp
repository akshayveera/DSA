// wap to calculate no.of notes 

#include<iostream>
using namespace std;

/*   method - 1

int nCr(int n,int r)
{
    int num = 1;
    int den = 1;
    int range = n-r;
    
    for(int i=0;i<range;i++)
    {
        num *= n;
        n--;
        den *= i+1;      
    }

    return num/den;
}

*/

// method - 2

int fact(int n)
{
    int ans =1;

    for(int i=1; i<=n; i++)
    {
        ans *= i;
    }

    return ans;
}

int nCr(int n, int r)
{

    int num = fact(n);

    int den = fact(n-r) * fact(r);

    return num/den;
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<nCr(a,b)<<endl;

}



