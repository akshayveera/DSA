

// abstraction - implementation hiding

// it means hiding irrelevant data from the user
// it allows to show necessary information and hide the unimportant information

// Data abstraction is one of the most essential and important features of object-oriented programming in C++. Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only necessary information about the outside world's data, hiding the background details orimplementation. Let's understand abstraction with a real-life example.

// Real-life example: When you send an email to someone, you just click send. and you get the success message; what happens when you click send, how data is transmitted over the network to the recipient is hidden from you because it is irrelevant to you).

// Abstraction using Classes:
// We can implement Abstraction in C++ using classes. The class helps us to group data members and member functions using available access specifiers. A Class can decide which data members will be visible to the outside world and which is not.

// Abstraction in Header files :
// One more type of abstraction in C++ can be header files. For example, the pow) method present in the math.h header file. To calculate the power of a number, we can simply call the function pow) present in the math.h header file and pass the numbers as arguments without knowing the underlying algorithm according to which the function is calculating the power of numbers.


// Abstraction using Access specifier :
// Access specifiers are the main pillar of implementing abstraction in C++. We can use access specifiers to enforce restrictions on class members. For example:
// 1) Members declared as public in a class can be accessed from anywhere in the program.
// 2) Members declared as private in a class can be accessed only from within the class. They are not allowed to be accessed from any part of code outside the class.
// 3) Members declared as protected in a class are a special kind of access specifier: it works similarly to private and can access it.

// Advantages Of Abstraction :
// 1) Only you can make changes to your data or function, and no one else can. 
// 2) It makes the application secure by not allowing anyone else to see the background details. 
// 3) Increases the reusability of the code. 
// 4) Avoids duplication of your code.

#include<bits/stdc++.h>

using namespace std;

int main()
{

}