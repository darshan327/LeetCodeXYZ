// Leetcode Number 3591. Check if Any Element Has Prime Frequency


class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int>fre(101,0);
        for(int i=0; i<nums.size(); i++){
            fre[nums[i]]++;
        }
        for(int i=0; i<fre.size(); i++){
            if(fre[i]>1){
                int num=fre[i],flag=0;
                for(int i=2; i<=num/2; i++){
                    if(num%i==0){
                        flag=1;
                        break;
                    }
                }
                if(flag==0) return true;
            }
        }
        return false;
    }
};