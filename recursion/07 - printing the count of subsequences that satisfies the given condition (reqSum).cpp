#include <bits/stdc++.h>
using namespace std;

int subSets(vector<int> &v, vector<int> part, int idx, int sum, int reqSum) {
  
  // to skip needless recursions
  if(sum > reqSum) {
    return 0;
  }
  
  // base case
  if(idx == v.size()) {
    
    if(sum == reqSum) {
      return 1;
    }
    
    return 0;
  }
  
  // not take - left branch in recursion tree
  int leftBranch = subSets(v, part, idx+1, sum, reqSum);
  
  // take - right branch in recursion tree
  part.push_back(v[idx]);
  sum += v[idx];
  int rightBranch = subSets(v, part, idx+1, sum, reqSum);
  
  return leftBranch + rightBranch;
}

int main() 
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    
    for(int i=0; i<n; i++) {
      cin>>v[i];
    }
    
    
    cout<<subSets(v, {}, 0, 0, 4)<<endl;
}
