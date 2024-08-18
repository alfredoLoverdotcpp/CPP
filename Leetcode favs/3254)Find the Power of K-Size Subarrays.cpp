/*
Example 1:

Input: nums = [1,2,3,4,3,2,5], k = 3

Output: [3,4,-1,-1,-1]

Explanation:

There are 5 subarrays of nums of size 3:

[1, 2, 3] with the maximum element 3.
[2, 3, 4] with the maximum element 4.
[3, 4, 3] whose elements are not consecutive.
[4, 3, 2] whose elements are not sorted.
[3, 2, 5] whose elements are not consecutive.

  */

class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
       vector<int> store;

        for(int i=0; i<=n-k; ++i){
            bool isConsecutive = true;
            int maxElement = nums[i];
            for(int j=i+1; j<i+k; ++j){
                if(nums[j]!=nums[j-1]+1){
                    isConsecutive = false;
                    break;
                }
                maxElement=max(maxElement, nums[j]);
            }
            if(isConsecutive){
                store.push_back(nums[i+k-1]);
            }else{
                store.push_back(-1);
            }
        }
        return store;
    }
};
