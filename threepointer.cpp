//3740 Minimum Distance Between Three Equal Elements I
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        vector<int> fre(101,0);
        for(int i=0; i<nums.size(); i++){
            fre[nums[i]]++;
        }
        int mini=INT_MAX,j,k;
        for(int i=0; i<nums.size(); i++){
            if(fre[nums[i]]>=3){
                 j=i+1;
                while(j<nums.size()){
                    if(nums[i]==nums[j]){
                        break;
                    }
                    j++;
                }
                 k=j+1;
                while(k<nums.size()){
                    if(nums[i]==nums[k]){
                        break;
                    }
                    k++;
                }
                fre[nums[i]]--;
                  mini=min(mini,abs(i-j)+abs(j-k)+abs(i-k));
            }
        
        }
        return mini==INT_MAX?-1:mini;
    }
};