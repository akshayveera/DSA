
// queue - FIFO : First In First Out
// first in first out
// queue is just like a queue(line) of cars entering into a tunnel, car which entered first exits first.
// pop() -  here pop removes the first element

#include<iostream>
#include<queue>

using namespace std;

int main()
{

    queue<string> q;

    q.push("Hello");

    cout<<"Size of queue is - "<<q.size()<<endl;
    cout<<"Front element is - "<<q.front()<<endl;
    cout<<endl;
    
    q.push("World");

    cout<<"Size of queue is - "<<q.size()<<endl;
    cout<<"Front element is - "<<q.front()<<endl;
    cout<<endl;

    q.push("do");

    cout<<"Size of queue is - "<<q.size()<<endl;
    cout<<"Front element is - "<<q.front()<<endl;
    cout<<endl;
    
    q.push("coding");

    cout<<"Size of queue is - "<<q.size()<<endl;
    cout<<"Front element is - "<<q.front()<<endl;
    cout<<endl;

    q.pop();
    
    cout<<"Size of queue is - "<<q.size()<<endl;
    cout<<"Front element is - "<<q.front()<<endl;
    cout<<endl;

    q.pop();

    cout<<"Size of queue is - "<<q.size()<<endl;
    cout<<"Front element is - "<<q.front()<<endl;
    cout<<endl;

    q.pop();
    
    cout<<"Size of queue is - "<<q.size()<<endl;
    cout<<"Front element is - "<<q.front()<<endl;
    cout<<endl;
    

}