class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<pair<int,int>> p;
        for(int i=0; i<nums.size(); i++){
            p.push_back({nums[i],i});
        }
      sort(p.begin(),p.end());
         vector<int> ans=nums;
         int i=0;
         while(i<nums.size()){
            int j=i;
            while(j+1<nums.size() && (p[j+1].first-p[j].first)<=limit){
                j++;
            }
            vector<int> values;
            vector<int> indices;
            for(int k=i; k<=j; k++){
                values.push_back(p[k].first);
                indices.push_back(p[k].second);
            }
            sort(indices.begin(),indices.end());
            for(int k=0; k<values.size(); k++){
                ans[indices[k]]=values[k];
            }
            i=j+1;
         }
         return ans;
    }
};