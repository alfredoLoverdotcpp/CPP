/*O(m+n) 
The time complexity of this solution is O(m + n), where m is the length of nums1 and n is the length of nums2. 
This is because we iterate through both arrays simultaneously and the number of iterations is determined by the sum of the lengths of the two arrays.

The space complexity of this solution is O(1) because we are modifying the input array nums1 in place 
without using any additional space that scales with the input size.
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
    }
};
