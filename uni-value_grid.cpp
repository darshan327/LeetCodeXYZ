// Leetcode Number : 2033. Minimum Operations to Make a Uni-Value Grid

  // time complexity : O(nlogn)
  // space complexity : O(n)

     class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> res;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                res.push_back(grid[i][j]);
            }
        }
        sort(res.begin(),res.end());
         int mid=res[res.size()/2];
         int count=0,flag=0;
         for(int i=0; i<res.size(); i++){
             if(abs(mid-res[i])%x!=0){
                 flag=1;
                 break;
             }
             count+=abs(mid-res[i])/x;
         }
         if(flag==1){
            return -1;
         }
         return count;
    }
};