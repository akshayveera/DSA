
// static - keyword
// the static keyword has different meanings depending on its context. Here are the two main uses of the static keyword in C++

// Static variables: 
// When static is used with a variable inside a function or a block, it creates a static variable. A static variable retains its value across multiple function calls and is initialized only once, during the first call to the function. Subsequent calls to the function use the existing value of the static variable. Static variables have a lifetime that spans the entire program execution.

// Static class members: 
// When static is used with a class member (variable or function), it makes the member independent of any particular object of the class. Static class members are associated with the class itself rather than with any specific object of the class. They are shared by all instances of the class.

// In a class, to access static data member or static method, there is no need of creating an object, we can directly access it without creating an object also

#include<bits/stdc++.h>

using namespace std;

class hero
{
    public:
    int health;
    int level;

    // static data member

    // in a game, timeToComplete will be same for every object like hero or vilan or any other object, ie, timeToComplete is independent of all the objects, so we decalred timeToComplete as static
    static int timeToComplete;

    // static function

    // object creation is not needed to call this function
    // this keyword doesn't work(throws error) in static function because "this is pointer of current object" and it is not related to object, it is related to class
    // only static data-members can be accessed in static function
    
    static void random()
    {
        // cout<<health<<endl;
        // cout<<level<<endl; 
        // we cannot use non-static data members in static function, it throws error

        cout<<timeToComplete<<endl;
        
    }

    


};


//   :: - this operator is called as scope resolution operator

int hero::timeToComplete = 100;
// you cannot directly initialize a static data member of a class inside the main function. The initialization of a static data member must be done outside the class definition, typically in a source file.
// the initialization of static data members outside the class definition is a requirement imposed by the language syntax and design
// one reason for this intialisation is to ensure that its scope and lifetime should extend through out program's execution; 


void increment()
{
    // this static initisation occurs only one time in first function call
    static int num1 = 0;

    // this normal initisation occurs as many times as the function is called
    int num2 = 0;

    num1++;
    num2++;
    cout<<"[ num1 : "<<num1<<", num2 : "<<num2<<" ]"<<endl;

}

int main()
{

    // static variable in function
    // we can see in the ouput is that, num1 is initialised only once and the value is retained over all function calls, where as in case of num2, it is not retained in all function calls, every time we call the function it is declared and initialised
    increment();
    increment();
    increment();

    cout<<"-------------------------------------------------------------"<<endl;

    // static data member in class 

    cout<<"timeToComplete : "<<hero::timeToComplete<<endl;
    // to access this static data member there is no need of creating an object

    hero h1;
    cout<<"h1: timeToComplete : "<<h1.timeToComplete<<endl;

    hero h2;
    cout<<"h2: timeToComplete : "<<h2.timeToComplete<<endl;

    cout<<endl;

    // we can change static data member wrt to class or wrt to any object
    // as it is same for all it is updated in the class and all the objects refer to that updated value
    hero::timeToComplete = 50;
    cout<<"timeToComplete : "<<hero::timeToComplete<<endl;
    cout<<"h1: timeToComplete : "<<h1.timeToComplete<<endl;
    cout<<"h2: timeToComplete : "<<h2.timeToComplete<<endl;

    cout<<endl;

    h2.timeToComplete = 80;
    cout<<"timeToComplete : "<<hero::timeToComplete<<endl;
    cout<<"h1: timeToComplete : "<<h1.timeToComplete<<endl;
    cout<<"h2: timeToComplete : "<<h2.timeToComplete<<endl;

    cout<<"-----------------------------------------------------------------------------"<<endl;

    // static function

    hero::random();





}