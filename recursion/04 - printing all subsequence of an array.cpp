#include <bits/stdc++.h>
using namespace std;

void subSets(vector<int> &v, vector<int> part, int idx) {
  
  if(idx == v.size()) {
    for(auto i : part) {
      cout<<i<<" ";
    }
    cout<<endl;
    
    return;
  }
  
  // not take
  subSets(v, part, idx+1);
  
  // take
  part.push_back(v[idx]);
  subSets(v, part, idx+1);
}

int main() 
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    
    for(int i=0; i<n; i++) {
      cin>>v[i];
    }
    
    
    subSets(v, {}, 0);
}
