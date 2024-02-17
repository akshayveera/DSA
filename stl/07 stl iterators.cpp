
// iterators 
// we can access the elements of arrays and vectors using index, but maps and other few containers dont have index so there we use iterator to access or modify elements

#include<iostream>
#include<vector>

using namespace std;

int main()
{

    vector<int> v = {1,2,3,4,5,6};

    cout<<"Printing vector using index"<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"Printing vector using iterator"<<endl;
    
    // declaration of iterator(syntax) - dataType ::iterator varName;
    vector<int> ::iterator it;

    // initialisation of vector
    it = v.begin();

    
    for(it; it<v.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    // it+1 takes to the next memory location where as it++ takes to the next value of the container
    // hence we can use it++ in maps or sets but we cannot use it+1  because they dont store in contigious location
    // where as it++ and it+1 is same in arrays and vectors as they store in contigious location


    // using iterators for pritning vector of pairs

    vector<pair<int,int>> vPair = {{1,2},{3,4},{5,6}};

    vector<pair<int,int>> ::iterator ite = vPair.begin();

    cout<<"printing vector of pairs using iterator"<<endl;

    for(ite; ite<vPair.end(); ite++)
    {
        cout<<(*ite).first<<" "<<(*ite).second<<endl;
    }

    cout<<"printing vector of pairs using iterator"<<endl;

    // (*ite).first = ite->first  - both are same we can use anyone

    for(ite = vPair.begin(); ite<vPair.end(); ite++)
    {
        cout<<ite->first<<" "<<ite->second<<endl;
    }


    // using for-each loops and auto keyword
    // auto keyword - it identifies the datatype and we dont need to specify the datatype. just use auto
    // when we use auto for iterating we dont need to declare iterator because it identifies the iterator and its datatype

    

    cout<<"using for-each loops and auto keyword"<<endl;

    // lets access the above vector v
    cout<<"printing vector v"<<endl;
    for(auto value : v)            // here value iterates over the vector
    {
        cout<<value<<" ";
    }
    cout<<endl;

    // lets access vector of pairs vPair
    cout<<"printing vector of pairs vPair"<<endl;
    for(auto v_p: vPair)
    {
        cout<<v_p.first<<" "<<v_p.second<<endl;
    }
    cout<<endl;



}