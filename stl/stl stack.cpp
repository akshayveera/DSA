
// stack -  LIFO : Last In First Out
//first in last out or last in first out
// push(), pop(), top() are three main functions in stack
// push() - push into stack
// pop() - removes the top element
// top() - returns the top element
// empty() - return bool val if its true or false
// size() - returns the no.of elements present in stack

#include<iostream>
#include<stack>

using namespace std;

int main()
{
    
    stack<string> s;

    s.push("Hello");

    cout<<"Size of stack is "<<s.size()<<endl;
    cout<<"Top element is - "<<s.top()<<endl;
    cout<<endl;

    s.push("World");

    cout<<"Size of stack is "<<s.size()<<endl;
    cout<<"Top element is - "<<s.top()<<endl;
    cout<<endl;

    s.push("do");

    cout<<"Size of stack is "<<s.size()<<endl;
    cout<<"Top element is - "<<s.top()<<endl;
    cout<<endl;

    s.push("Coding");

    cout<<"Size of stack is "<<s.size()<<endl;
    cout<<"Top element is - "<<s.top()<<endl;
    cout<<endl;


    s.pop();

    cout<<"Size of stack is "<<s.size()<<endl;
    cout<<"Top element is - "<<s.top()<<endl;
    cout<<endl;

    s.pop();

    cout<<"Size of stack is "<<s.size()<<endl;
    cout<<"Top element is - "<<s.top()<<endl;
    cout<<endl;

    s.pop();

    cout<<"Size of stack is "<<s.size()<<endl;
    cout<<"Top element is - "<<s.top()<<endl;
    cout<<endl;

    s.pop();

    cout<<"Size of stack is "<<s.size()<<endl;
    //cout<<"Top element is - "<<s.top()<<endl;
    cout<<endl;


    cout<<"Is stack empty - "<<s.empty()<<endl;








}