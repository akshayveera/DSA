
// multiset - it is same as set, but the only difference is duplicate elements are allowed here

#include<iostream>
#include<set>

using namespace std;


int main()
{

    multiset<string> s;

    
    s.insert("abc");
    s.insert("fbfn");
    s.insert("abc");
    s.insert("jbf");
    s.insert("vbfjv");

    for(auto n: s)
    {
        cout<<n<<endl;
    }

    // find() returns the iterator(address) of the element,if the element is absent then it returns s.end()
    cout<<"acessing element using find and iterator"<<endl;
    auto it = s.find("fbfn");     // in mutliset find() returns the first "fbfn" iterator if there are duplicates
    cout<<*it<<endl;

    //  erase() can take both kinds of arguments one is iterator or the data itself
    if(it != s.end())  // this line to escape when it = s.end() 
        s.erase(it);  // used iterator as argument, here it refers to "fbfn"

    s.erase("abc"); // used string as argument

    // if you use iterator in erase it only erases that element 
    // if you use data itself (like "abc" above) it erases all the duplicates also(it removes all "abc"s in above case)



    cout<<"printing set after erasing elements"<<endl;


    for(auto n: s)
    {
        cout<<n<<endl;
    }

}