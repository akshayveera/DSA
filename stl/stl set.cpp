
// set - data is sorted, no duplicates are added
// it is similar to the map whose values are removed from key value pairs
// the tc of insertion, find(), erase() etc is O(logn)


// unodered_set - it is same as set but but there is no order or sorting here
// three differences from set are inbuilt implementation, time complexity, valid key datatype
// tc of insertion and accessing is O(1)
// declaaration - unordered_set<datatype> var_name;

// when there is no requirement of order, unordered sets are better to use because of its lesser tc

#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;


int main()
{

    //unordered_set<string> s;
    set<string> s;

    
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
    auto it = s.find("abc");
    cout<<*it<<endl;

    //  erase() can take both kinds of arguments one is iterator or the data itself
    if(it != s.end())  // this line to escape when it = s.end() 
        s.erase(it);  // used iterator as argument, here it refers to "abc"

    s.erase("fbfn"); // used string as argument

    cout<<"printing set after erasing elements"<<endl;


    for(auto n: s)
    {
        cout<<n<<endl;
    }




    
}