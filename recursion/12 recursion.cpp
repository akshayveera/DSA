
//  recursion
#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    // base case
    if(n==0)
    {
        return 1;
    }
    else
    {
        // recurive relation
        // int smallProb = factorial(n-1);
        // int bigProb = n * smallProb;
        // return bigProb;
        return n*factorial(n-1);
    }
}

int power(int n)
{
    // base case
    if(n==0)
    {
        return 1;
    }
    // recursive relation
    else
    {
        // int smallProb = power(n-1);
        // int bigProb = 2*smallProb;
        // return bigProb;
        return 2*power(n-1);
    }
}

// this is an example of tail recursion
void printDescending(int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        cout<<n<<endl;
        printDescending(n-1);
    }
}

// this is an example if non-tail recursion
void printAscending(int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        printAscending(n-1);
        cout<<n<<endl;
    }
}

int fibonacci(int n)
{
    // base case
    if(n==0)
    return 0;
    if(n==1)
    return 1;

    // recurence case
    int c = fibonacci(n-1) + fibonacci(n-2);
    return c;

}

void sayDigit(int n, string arr[])
{
    // base case
    if(n==0)
    {
        return;
    }

    // processing 
    int digit = n%10;

    // recursive call
    sayDigit(n/10, arr);

    // processing
    cout<<arr[digit]<<" ";

}



int main()
{
    // recursion - a function calling itself directly or indirectly is known as recusrion

    // 4 types of recursion
    // indirect recursion - function solve() calls other function calculate() and this calculate() function again calls solve() function this type is indirect
    // directly recursion - function solve() calls itself direclty
    // tail recursion - recursive relation is at the end of the fn
    // non-tail recursion - recursive relation is not at end ie, some processing is performed after recursive relation 

    // when to use?
    // When we need to solve complex or bigger problem which is dependent on smaller problem, we use recursion

    // In recursion two things are mandatory
    // 1) base-case : is the condition on case where the recusrion stops
    // if we donot mention base-case, segematation fault occurs due to stack overflow (recursion goes to infinte function calls until stack memory fills and stack overflow occur )
    // 2) recurive relation : based on which recusrion is performed

    // ex: finding 2^n
    //      2^n = 2 * 2^(n-1)
    //      f(n) = 2 * f(n-1)  --> this is recursive relation
    // here 2^n is bigger problem which is dependent on smaller problem 2^(n-1)
    /// here base case is 2^0
    

    // ex : finding n!
    //     n! = n(n-1)(n-2)...1
    //     n! = n*(n-1)!
    //     f(n) = n*f(n-1)     --> this is recursive relation
    // here n! is bigger problem which is dependent on smaller problem (n-1)!
    // here base case is 0!

    int n;
    cin>>n;

    // finding factorial of n
    int ans = factorial(n);
    cout<<"factorial - "<<ans<<endl;

    // finding 2^n 
    int res = power(n);
    cout<<"power - "<<res<<endl;

    // print the numbers from n to 1;
    cout<<"\ntail recursion\n";
    printDescending(n);

    // print numbers from 1 to n;
    cout<<"\nnon-tail recursion\n";
    printAscending(n);

    // fibonacci series (1,1,2,3,5,8,...)
    // finding nth element of fibonacci series
    int fib = fibonacci(n);
    cout<<"\nnth term in fibonacci series is "<<fib<<endl;

    // sayDigit - example : input is 432 then output is four three two
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<endl;
    sayDigit(n,arr);





}