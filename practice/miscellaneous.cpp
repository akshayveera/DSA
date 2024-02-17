
//miscellaneous

#include<iostream>
using namespace std;

int main()
{

    // for loop

    
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    cout<<endl;

    /*
    // printing the number till n

    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }

    cout<<endl;

    // we can remove initialization, condition and upadation from the parenthesis
    int i=1;                    // initialization is done here
    for(;;)
    {
        if(i<=n)                // condition is specified here
        {
            cout<<i<<endl;     
            i++;                // updation is done here
        }
        else
        {
            break;              // this avoids the loop to be infinite
        }
    }
    // we can run loop in this way also

    cout<<endl;

    // we also use multiple initalizations,conditions and updations in for loop

    for(int i=0,j=1,k=2;i<=1 && j<=2 && k<=3;i++,j++,k++)
    {
        cout<<i<<" "<<j<<" "<<k<<endl;
    }

    cout<<endl;

    // wap to print sum of numbers till n

    int sum=0;
    for(int i=1; i<=n ;i++ )
    {
        sum+=i;
    }

    cout<<sum<<endl;


    cout<<endl;
    
    // wap to print fibonacci series
    int n1=0;
    int n2=1;
    cout<<n1<<endl<<n2<<endl;

    for(int i=1;i<9;i++)
    {
        int n3=n1+n2;
        cout<<n3<<endl;
        n1 = n2;
        n2 = n3;
        
    }
    */

    // wap to print whether a number is prime or composite

    bool prime = 1;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            prime = !prime;
            break;
        }
        
    }

    if(prime == 0)
    {
        cout<<n<<" is composite";
    }
    else
    {
        cout<<n<<" is prime";
    }

   








}

