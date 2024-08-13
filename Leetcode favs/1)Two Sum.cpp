class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    //**Brute Force, TC-O(n^2) and SC- O(1)**

//Code:    for(int i=0; i<n; ++i){
    //     for(int j=i+1; j<n; ++j){
    //         int otherNum = target - nums[i];
    //         if(nums[j]==otherNum){
    //             return {i, j};
    //         }
    //     }
    //   }

    //**Better solution, using hashmap**
    //TC - O(N), worst case - O(N^2) || SC - O(N)if using map instead of unordered_map, SC - O(NlogN)

//Code:     
     unordered_map<int, int> myMap;
     for(int i=0; i<n; ++i){
         int complement = target - nums[i];
         if(myMap.find(complement) != myMap.end()){
             return {myMap[complement], i};
         }
         myMap[nums[i]]=i;
     }
    return {};
        
    //If you don't wanna use a map, then go for 2-pointer approach
    //But here you're expected to return indices so, this won't be most optimal solution since it'll be stored as (num, index) - eg:{(2,0), (6,1), (5,2), (8, 3)}, TC will be O(N^2)
    //But if you just wanna return YES or NO, then go for this
    //TC - O(N) + O(NlogN), SC - no extra space is used hence, O(1) but if the interviewer argues that array changes. 
    //If the complexity is considered for changed array then SC will be O(N)
        
    // int left=0, right=n-1;
    // sort(nums.begin(), nums.end())
    // while(left<right){
    //     int sum = nums[left] + nums[right]
    //     if(sum == target){
    //         return "YES";
    //     }
    //     else if(sum<target) left++;
    //     else right--;
    // }
    //   return "NO";
    }
};
