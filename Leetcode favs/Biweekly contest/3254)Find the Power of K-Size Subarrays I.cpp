/*
Power (Maximum element) in a k sized subarray
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

Brute force approach
TC: O(n×k), n is the length of the input array nums and k is the size of the subarrays being checked. 
This is because each subarray of size k requires a linear scan to check consecutiveness, and there are approximately n - k + 1 such subarrays.
The space complexity of this solution is O(n), where n is the number of elements in the input array nums. 
This is because we use a vector to store the results for each window of size k.

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


// A better approach, optimal
//TC- O(N), SC- O(N)

class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
       int n = nums.size();
       vector<int> store;
       if(k==1) return nums;
        vector<int> arr(n,0);
        for(int i=1; i<n; ++i){
            //Not equal to previous element plus one, checking consecutiveness and flagging elements as 1 if condition is not satisifed
            if(nums[i] != nums[i-1]+1) { arr[i]=1; }
        }
        int cnt=0;
        //checking the counts for k-sized subarrays, count increases for the number of 1s
        for(int i=0; i<k; ++i){
            if(arr[i]==1) cnt++;
        }
        if(cnt==0){
            store.push_back(nums[k-1]);
        }
        else{
            store.push_back(-1);
        }

        for(int i=k; i<n; ++i){
            if(arr[i]==1) cnt++;
            if(arr[i-k+1]==1)cnt--;
            if(cnt==0){
                store.push_back(nums[i]);
            }
            else{
                store.push_back(-1);
            }
        }
        return store;
    }
};
