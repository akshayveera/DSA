

// string - it is one dimentional array of characters
// while taking input or printing output if it see a null character('\0') it stops execution(taking input or printing output)
// while taking input if if the string is completed or if it come across space or tab or enter it adds null char at its end to identify the end
// here null char acts as terminator


#include<bits/stdc++.h>

using namespace std;

int strLength(char name[])
{
    int count=0;

    for(int i=0; name[i]!='\0'; i++)
    {
        count++;
    }

    return count;
}

void revStr(char name[], int n)
{
    int s=0, e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}

int main()
{
    char name[20];

    cout<<"Enter your name"<<endl;
    cin>>name;

    int n = strLength(name);

    revStr(name,n);

    cout<<"Your name is : "<<name<<endl;
    cout<<"Your string length is : "<<n<<endl;
    cout<<"Reverse string is : "<<name<<endl;
}