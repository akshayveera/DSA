#include <bits/stdc++.h>
using namespace std;

void mergeTwoSortedArrays(vector<int>& nums, int l, int m, int r) {
    
    int i = l;
    int j = m+1;
    vector<int> sorted;
    while(i <= m && j <= r) {
        if(nums[i] <= nums[j]) {
            sorted.push_back(nums[i]);
            i++;
        } else {
            sorted.push_back(nums[j]);
            j++;
        }
    }

    while(i <= m) {
        sorted.push_back(nums[i++]);
    }

    while(j <= r) {
        sorted.push_back(nums[j++]);
    }
    
    for(int x=0; x<sorted.size(); x++) {
        nums[l+x] = sorted[x];
    }
}

void mergeSort(vector<int>& nums, int l, int r) {

    if(l >= r) {
        return;
    }

    // calc mid
    int m = l + ((r - l) / 2);

    // sort left
    mergeSort(nums, l, m);

    // sort right
    mergeSort(nums, m+1, r);

    // merge both
    mergeTwoSortedArrays(nums, l, m, r); 
    
    
}


int main() 
{  
  vector<int> nums = {3, 6, 2, 53, 13, 78};
  
  for(auto i : nums) {
    cout<<i<<" ";
  }
  cout<<endl;
  
  mergeSort(nums, 0, nums.size()-1);
  
  for(auto i : nums) {
    cout<<i<<" ";
  }
  cout<<endl;
}
