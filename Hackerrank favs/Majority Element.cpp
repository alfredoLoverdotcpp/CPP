//Takes O(N) time complexity for unordered_map <int, ..>..
//Takes O(N log N) time complexity for map <int, ..>..
//O(N) is the space complexity
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> myMap;
        int n=nums.size();
      
        for(int i=0; i<n; ++i)
        {
            myMap[nums[i]]++;
        }
        n = n/2;
        for(auto num: myMap)
        {
            if(num.second>n){
                return num.first;
            }
        }
        return -1;
    }
};

//O(n log n)
// sort(nums.begin(), nums.end());
//         int n = nums.size();
//         return nums[n/2];
