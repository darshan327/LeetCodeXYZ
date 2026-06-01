// time complexity: O(nlogn) + O(n) = O(nlogn)
// space complexity: O(1)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int sum=0;
        for(int i=cost.size()-1; i>=0; i--){
             sum+=cost[i];
             i--;
             if(i>=0)
             sum+=cost[i];
              i--;
        }
        return sum;
    }
};


    int main(){
        Solution obj;
        int n;
        cin>>n;
        vector<int> res(n);
        for(int i=0; i<n; i++){
            cin>>res[i];
        }
        int ans = obj.minimumCost(res);
        cout<<ans;
        return 0;
    }