#include <bits/stdc++.h>
using namespace std;

int sortPivot(vector<int> &nums, int l, int h){
  
  // select pivot
  int pivot = nums[l];
  
  // initalize iterators
  int i=l, j=h;
  
  // move smaller elements to left and larger to right
  while(i < j) {
    
    while(nums[i] <= pivot && i<h) {
      i++;
    }
    
    while(nums[j] > pivot && j>l) {
      j--;
    }
    
    if(i < j) swap(nums[i], nums[j]);
  }
  
  // position the pivot element at correct Index
  swap(nums[l], nums[j]);
  
  return j;
  
}

void quickSort(vector<int> &nums, int l, int h) {
  
  // base case
  if(l>=h) return;
  
  // place the pivot in sorted position and return partition Index
  int partitionIndex = sortPivot(nums, l, h);
  
  // sort left part using recusrion
  quickSort(nums, l, partitionIndex - 1);
  
  // sort right part using recusrion
  quickSort(nums, partitionIndex + 1, h);
  
}

int main() 
{
  int n;
  cin>>n;
  
  vector<int> nums(n);
  
  for(int i=0; i<n; i++) {
    cin>>nums[i];
  }
  
  for(int i=0; i<n; i++) {
    cout<<nums[i]<<" ";
  }
  cout<<endl;
  
  quickSort(nums, 0, n-1);
  
  for(int i=0; i<n; i++) {
    cout<<nums[i]<<" ";
  }
  
  
  
}
