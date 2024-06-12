#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
public:

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
