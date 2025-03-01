#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& v, int l, int r) {
  
  if(l >= r) return;
  
  v[l] = v[l]^v[r];
  v[r] = v[l]^v[r];
  v[l] = v[l]^v[r];
  
  reverse(v, l+1, r-1);
}

int main() {
  
  // reverse an array using recursion
  int n;
  cin>>n;
  
  vector<int> v;
  
  while(n--) {
    int temp;
    cin>>temp;
    
    v.push_back(temp);
  }
  
  cout<<"Original array"<<endl;
  for(auto i : v) {
    cout<<i<<" ";
  }
  cout<<endl;
  
  reverse(v, 0, v.size()-1);
  
  cout<<"Reversed array"<<endl;
  for(auto i : v) {
    cout<<i<<" ";
  }
  cout<<endl;
  
}
