    
   // time complexity: O(N∗log(max(Nums)))
   // space complexity: O(n)


    class Solution {
    public:
    vector<int> separateDigits(vector<int>& nums) {
        string res1="";
        for(int i=0; i<nums.size(); i++){
            res1+=to_string(nums[i]);
        }
        vector<int> res2;
        for(int i=0; i<res1.size(); i++){
            res2.push_back(res1[i]-'0');
        }
        return res2;
    }
};