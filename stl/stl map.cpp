
// map - it store key value pairs in sorted way
// insertion and accessing takes tc of O(logn)

// unodered_map - it is same as map but but there is no order or sorting here
// three differences from map are inbuilt implementation, time complexity, valid key datatype
// tc of insertion and accessing is O(1)
// declaaration - unordered_map<datatype, datatype> var_name;

// when there is no requirement of order unordered maps are better to use because of its lesser tc

#include<iostream>
#include<map>


using namespace std;

int main()
{

    map<int, string> m;   // declaration
    // unordered_map<int, string> m;   declaration of unordered map

    m[1] = "abc";         // initialisation
    m[5] = "fsra";        // tc : O(log(n))
    m[8] = "skln";

    m.insert({6,"jhhb"});   // other type of initialisation

    // map<int, string> ::iterator it;
    // for(it = m.begin(); it != m.end(); it++)
    // {
    //     cout<<(*it).first<<" "<<it->second<<endl;
    // }

    // you can also perform above code this way

    for(auto m1 : m)
    {
        cout<<m1.first<<" "<<m1.second<<endl;
    }

    cout<<"printing the key value pair with key 1"<<endl;
    auto it = m.find(1);  // m.find() returns the iterator of 3 and returns m.end() if no match found
    cout<<it->first<<" "<<it->second<<endl;

    m.erase(it);
    cout<<"erased the key value pair with key 1"<<endl;

    for(auto m1 : m)
    {
        cout<<m1.first<<" "<<m1.second<<endl;
    }



}