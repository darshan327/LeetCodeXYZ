class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> res1;
        vector<int> res2;
         res1.push_back(nums[0]);
         res2.push_back(nums[1]);
         int j=0,k=0;
         for(int i=2; i<nums.size(); i++){
            if(res1[j]>res2[k]){
                res1.push_back(nums[i]);
                j++;
            }else{
                res2.push_back(nums[i]);
                k++;
            }
         }
         for(int i=0; i<res2.size(); i++ ){
              res1.push_back(res2[i]);
         }
         return res1;
    }
};