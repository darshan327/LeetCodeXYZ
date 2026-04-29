// Leetcode Number : 1399. Count Largest Group

// time complexity : O(nlogn)
// space complexity : O(nlogn)
 
    class Solution {
public:

       int digit(int n){
          int sum = 0;
        while (n) {
            sum += n % 10;
             n /= 10;
        }
        return sum;
     }
    
    int countLargestGroup(int n) {
         unordered_map<int,int> mp;
         for(int i=1; i<=n; i++){
            int sum = digit(i);
            mp[sum]++;
         }
         int maxi=0;
         for(auto x : mp){
            maxi=max(maxi,x.second);
         }
         int count=0;
         for(auto p : mp){
            if(p.second==maxi){
                count++;
            }
         }
         return count;
    }
};