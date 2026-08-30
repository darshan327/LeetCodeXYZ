class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        
        int val1=0,val2=0,n=nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]==mini || nums[i]==maxi){
                val1++;
                break;
            }else{
                val1++;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i]==mini || nums[i]==maxi){
                val2++;
                break;
            }else{
                val2++;
            }
        }
       
        int c1=0,c2=0,f1=0,f2=0;
        for(int i=0; i<n; i++){
            if(nums[i]==mini || nums[i]==maxi){
              c1++;
              f1++;
            }else{
                c1++;
            }
            if(f1==2){
                break;
            }
        }
        for(int i=0; i<n; i++){
             if(nums[n-i-1]==mini || nums[n-i-1]==maxi){
                c2++;
                f2++;
             }else{
                c2++;
             }
             if(f2==2){
                break;
             }
        }
         int v1=min(c1,c2);
         return min(v1,val1+val2);
    }
};