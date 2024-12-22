#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {

  string str = "";
  getline(cin, str);
  
  // initialization
  string str1 = "string1";
  string str2("string2");
  
  // length and size
  cout<<"length of string "<<str.length()<<endl;
  cout<<"length of string "<<str.size()<<endl;
  cout<<"is the string empty "<<str.empty()<<endl;
  
  
  // accessing character
  cout<<"char at index "<<str[2]<<endl;
  cout<<"char at index "<<str.at(2)<<endl;
  
  //concatinations
  cout<<str1 + " extension"<<endl;
  cout<<str1 + " " + str2<<endl;
  str1 += " add this";
  
  // insertion
  cout<<str.insert(0, "str : ")<<endl;
  cout<<str.insert(str.length(), " world")<<endl;
  
  // erase
  cout<<str.erase(0, 6)<<endl;
  str.pop_back();
  cout<<str<<endl;
  
  // replace 
  cout<<str.replace(6,4, "everyone")<<endl;
  
  // substring extraction
  cout<<str.substr(0,5)<<endl;
  
  // finding characters or substrings
  cout<<str.find("everyone")<<endl;  
  cout<<str.find("e")<<endl; // first occurance
  cout<<str.rfind("e")<<endl; // last occurance
  
  // comparision
  cout<< (str1 == str2) <<endl;
  cout<< ("hello" != "hello") <<endl;
  cout<<str1.compare(str2)<<endl; 
  // compares str1 and str2 lexicographically and returns zero if both are equal, returns 1 if str1 > str2 and returns -1 if str2 > str1
  
  // transform to upper or lower case
  transform(str.begin(), str.end(), str.begin(), ::toupper);
  cout<<str<<endl;
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  cout<<str<<endl;
  
  // reverse string
  reverse(str.begin(), str.end());
  cout<<str<<endl;
  reverse(str.begin(), str.end());
  
  // string to numbers and numbers to strings 
  cout<<to_string(234567)<<endl; // used to convert number to string
  cout<<stoi("2345")<<endl; // string to number
  
  // clearing and resizing
  str1.resize(4); // resize the string to n characters
  cout<<str1<<endl;
  str1.clear(); // clears the string (makes empty)
  cout<<str1<<endl;
  
}
