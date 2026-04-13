// LeetCode number: 1848. Minimum Distance to the Target Element.
// first we should to find target index and minimize the abs(i-start).
// time complexity : O(n)
// space complexity : O(1)

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int mini=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                mini=min(mini,abs(i-start));
            }
        }
        return mini;
    }
};

   