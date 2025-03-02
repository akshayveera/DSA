#include <bits/stdc++.h>
using namespace std;

void subSets(vector<int> &v, vector<int> part, int idx, int sum, int reqSum) {
  
  if(sum == reqSum) {
    for(auto i : part) {
      cout<<i<<" ";
    }
    cout<<endl;
    return;
  }
    
  if(idx == v.size()) {
    return;
  }
  
  // not take
  subSets(v, part, idx+1, sum, reqSum);
  
  // take
  part.push_back(v[idx]);
  sum += v[idx];
  subSets(v, part, idx+1, sum, reqSum);
}

int main() 
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    
    for(int i=0; i<n; i++) {
      cin>>v[i];
    }
    
    
    subSets(v, {}, 0, 0, 5);
}
