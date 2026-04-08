    // two sum
     #include <vector>
    #include <unordered_map>
      using namespace std;
    class Solution {
     public:
        vector<int> twoSum(vector<int>& nums, int target) {
        int count;
         unordered_map<int,int>fre;
        
         for(int i=0; i<nums.size(); i++){
            count=target-nums[i];
            if(fre.find(count)!=fre.end()){
                return {fre[count],i};
            }
            fre[nums[i]]=i;
         }
         return {};
    }
     };

 
 