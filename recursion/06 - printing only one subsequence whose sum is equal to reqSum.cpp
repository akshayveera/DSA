#include <bits/stdc++.h>
using namespace std;

bool subSets(vector<int> &v, vector<int> part, int idx, int sum, int reqSum) {
  
  if(idx == v.size()) {
    
    if(sum == reqSum) {
      for(auto i : part) {
        cout<<i<<" ";
      }
      cout<<endl;
      return true;
    }
    
    return false;
  }
  
  // not take
  if(subSets(v, part, idx+1, sum, reqSum) == true) {
    return true;
  }
  
  // take
  part.push_back(v[idx]);
  sum += v[idx];
  if(subSets(v, part, idx+1, sum, reqSum) == true) {
    return true;
  }
  
  return false;
}

int main() 
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    
    for(int i=0; i<n; i++) {
      cin>>v[i];
    }
    
    
    subSets(v, {}, 0, 0, 10);
}
