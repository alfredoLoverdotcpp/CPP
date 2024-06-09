//refer to Ayushi Sharma for logic explanation

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int subarraySumK(vector<int> &nums, int k){
    unordered_map<int, int> myMap;

    int sum =0;
    int ans =0;
    myMap[0] =1;

  for (int i=0; i<nums.size(); i++){
    sum+=nums[i];

    int target = sum - k;

    if (myMap.find(target) != myMap.end()){
      ans += myMap[target];
    }

    myMap[sum]++;
  }
return ans;
  }
};
