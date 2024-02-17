
// constructor 
// constructor is a special member function of a class that is used to initialize the objects of that class. 
// we cannot call it, it is called itself automatically when an object of the class is created
// The constructor has the same name as the class and does not have a return type, not even void. It may have parameters, allowing you to initialize the object with specific values.
// constructor should be declared public


#include<bits/stdc++.h>

using namespace std;

// class
class hero
{
    public:
    
    // properties
    int health;
    char level;



    // methods


    //default constructor is present inbuilt

    // pre-defined constructor
    // hero()
    // {
    //     // this is the default contructor
    // }

    // user-defined constructors
    // when we define a constructor the predefined constructor gets cancelled and this is executed

    // there are three types of constructors
    // 1) simple or default constructor
    // 2) parameterised constructor
    // 3) copy constructor

    // ---------------simple or default constructor----------------
    hero()
    {
        cout<<"constructor is called"<<endl;
    }


    // ----------------parameterised constructor-----------------

    // hero(int val)
    // {
    //     health = val;
    // }

    // if the declaration of constructor is in the above format, it is good
    // but if it is in the below format, it is tricky

    // hero(int health)
    // {
    //     health = health;
    // }

    // in this case, health refers to health(in function) and not the health(in class which is a property)
    // if we print this garbage value is printed for health
    // so, there is keyword "this" is used to update the health(in calss which is a property)
    hero(int health)
    {
        // (*this).health = health;  // this can also be used
        this->health = health;
    }


    hero(int health, char level)
    {
        cout<<"the value stored in \"this\" : "<<this<<endl;
        this->health = health;
        this->level = level;
    }


    // ------------------------------copy constructor-------------------------

    // when you copied an element into other element automatically copy constructor is invoked there is no need of writing code for copy constructor, but just for better understanding here we write code for copy constructor 

    




    

};



int main()
{
    cout<<"creating an object"<<endl;

    // creating object statically
    hero h1;
    cout<<"h1 health : "<<h1.health<<endl;
    cout<<"h1 level : "<<h1.level<<endl;

    // creating an object dynamically
    hero *h2 = new hero;

    // constructor is called whether we created an object statically or dynamically

    cout<<"created an object"<<endl;

    cout<<"------------------------------------------------------"<<endl;

    // this calls parameterised constructor with one parameter
    hero h3(90);
    cout<<"h3 health : "<<h3.health<<endl;

    // this calls parameterised constructor with one parameter
    hero h4(100, 'A');
    cout<<"address of h4 : "<<&h4<<endl;
    cout<<"h4 health : "<<h4.health<<endl;
    cout<<"h4 level : "<<h4.level<<endl;

    cout<<"------------------------------------------------------"<<endl;

    // copying an object into other object

    // method 1
    hero h5 = h4;
    cout<<"h5 health : "<<h5.health<<endl;
    cout<<"h5 level : "<<h5.level<<endl;

    // method 2
    hero h6(h4);
    cout<<"h6 health : "<<h6.health<<endl;
    cout<<"h6 level : "<<h6.level<<endl;


    













    


}

