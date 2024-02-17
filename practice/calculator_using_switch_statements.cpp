

// calculator using switch statement

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;

    int b;
    cout<<"enter the value of b"<<endl;
    cin>>b;

    char operation;
    cout<<"enter the operation yiu want to perform"<<endl;;
    cin>>operation;

    switch(operation)
    {
        case '+':
        cout<<a+b<<endl;;
        break;
        case '-':
        cout<<a-b<<endl;;
        break;
        case '*':
        cout<<a*b<<endl;;
        break;
        case '/':
        cout<<a/b<<endl;;
        break;
        case '%':
        cout<<a%b<<endl;;
        break;
        default:
        cout<<"enter valid operation"<<endl;
    }
} 
