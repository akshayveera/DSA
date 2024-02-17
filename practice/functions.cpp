// functions 

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

void isPrime(int n)
{
    int count=0;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is a composite number"<<endl;
            return; 
        }
    }

    cout<<n<<" is a prime number"<<endl;

}

void AP(int num)
{
    cout<<(3*num)+7<<endl;
}

void totalSetBits(int a, int b)
{
    int count=0;

    for(int i=0; i<32; i++)
    {
        if(a&(1<<i))
        {
            count++;
        }

        if(b&(1<<i))
        {
            count++;
        }
    }

    cout<<"Total no.of set bits are "<<count<<endl;
}

void fibonacci(int n)
{
    int a=0;
    int b=1;
    int c;

    for(int i=0; i<n-2; i++)
    {
        c = a+b;
        a = b;
        b = c;
    }

    cout<<c<<endl;
}

int main()
{
    int n;
    cin>>n;

    fibonacci(n);

}



