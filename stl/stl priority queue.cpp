

// priority queue - this has two types max heap and min heap
// max heap - ignoring the order of push/in, max element is poped 
// min heap - ignoring the order of push/in, min element is poped 

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(25);
    maxi.push(40);
    maxi.push(12);
    maxi.push(30);

    int n = maxi.size();

    for(int i=0; i<n; i++)
    {
        cout<<"Top element is - "<<maxi.top()<<endl;
        maxi.pop();
    }
    
    cout<<endl;
    cout<<endl;

    mini.push(25);
    mini.push(40);
    mini.push(12);
    mini.push(30);

    int m = mini.size();

    for(int i=0; i<m; i++)
    {
        cout<<"Top element is - "<<mini.top()<<endl;
        mini.pop();
    }

}

