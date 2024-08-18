#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
public:

/* The time complexity of this solution is O(n) because we iterate through the input array of size n once. 
The space complexity is O(1) because we only use a constant amount of extra space regardless of the input size.

Given an integer array nums, find the subarray with the largest sum, and return its sum.
Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

*/

int maxSubarray(vector<int>& nums){
    int sum = 0;
    int maxi = nums[0];
    //Kadane's Algorithm
    for(int i=0; i<nums.size(); i++){
        //step1
        sum = sum + nums[i];
        //step2
        maxi = max(maxi, sum);
        //step3
        if(sum <0){
            sum = 0;
        }
    }
    return maxi;
}
};

int main() {
    
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    Solution sol;
    int result = sol.maxSubarray(nums);
    cout << result << endl;
    return 0;
}
