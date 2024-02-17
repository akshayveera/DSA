
// wap to calculate no.of notes 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a value"<<endl;
    cin>>n;

    int hundreds=0, fifties=0, twenties=0, ones=0;

    switch(100)
    {
        case 100:
        if(n>=100)
        {
            hundreds = n/100;
            n = n%100;
        }
        

        case 50:
        if(n>=50)
        {
            fifties = n/50;
            n = n%50;
        }
        

        case 20:
        if(n>20)
        {
            twenties = n/20;
            n = n%20;
        }
        

        case 1:
        ones = n;
    }

    cout<<"no.of hundreds = "<<hundreds<<endl;
    cout<<"no.of fifties = "<<fifties<<endl;
    cout<<"no.of twenties = "<<twenties<<endl;
    cout<<"no.of ones = "<<ones<<endl;

    

}

