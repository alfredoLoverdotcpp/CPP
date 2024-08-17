/* a contiguous subarray whose length is equal to k, that has the maximum average value and return this value.  
  Example 1:

Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
Example 2:

Input: nums = [5], k = 1
Output: 5.00000 

Time Complexity: O(N) The time complexity of this solution is O(n), where n is the number of elements in the input vector nums. 
This is because we iterate through the input vector once to calculate the initial sum of the first window, 
and then iterate through the remaining elements to calculate the sum of each subsequent window.

The space complexity is O(1) because we are using a constant amount of extra space, regardless of the size of the input vector nums. 
*/


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += nums[i];
        }
        double maxSum = sum; //storing the sum of first window 

        if(k<n){
            for (int i=0, j=k; j<n; i++, j++){
                sum = sum-nums[i]+nums[j];
                maxSum = max(sum, maxSum); //comparing the stored sum and newly calculated next window sum
            }
        }
        return (double) maxSum/k;
    }
};


/*
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum =0;
        for(int i=0; i<k; ++i){
            sum+=nums[i];
        }
            int maxSum = sum;

            int startIndex = 0;
            int endIndex = k;

            while(endIndex<n){
                sum -= nums[startIndex]; //Removing the prev element
                startIndex++;

                sum+=nums[endIndex]; //Including the next element
                endIndex++;

                maxSum = max(maxSum, sum);
            }
            return (double) maxSum/k;
    }
};
*/
