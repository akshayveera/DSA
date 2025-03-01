#include<bits/stdc++.h>
using namespace std;

bool checkIfPalindrome(string s, int l, int r) {
  if(l >= r) return true;
  
  if(s[l] != s[r]) return false;
  
  return checkIfPalindrome(s, l+1, r-1);
}


int main() {
  
  // check if a string is palindrome using recursion
  string s;
  getline(cin, s);
  
  cout<<checkIfPalindrome(s, 0, s.length()-1);
  
}
