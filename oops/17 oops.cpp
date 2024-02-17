

#include<bits/stdc++.h>

// we can also write class in different file and that can be included in this file
// #include"file_name.extension"
// #include"class.cpp"

using namespace std;

class hero
{
    // properties or state or attributes or data members
    int health;
    char level;


    // methods

};

int main()
{
    // creation of object or
    // creating an instance of class hero
    hero ram;

    // when there is only int health in class, size of object is 4
    // Similarly, When we include char in class, size should be 4, but its returning 8
    cout<<sizeof(ram)<<endl;



}