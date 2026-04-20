
// Leetcode number : 2078. Two Furthest Houses With Different Colors
 // time complexity : O(n^2)
 // space complexity : O(1)

class Solution {
public:
    int maxDistance(vector<int>& colors) {
   /* int maxi=INT_MIN;
    for(int i=0; i<colors.size(); i++){
        for(int j=i+1; j<colors.size(); j++){
            if(colors[i]!=colors[j])
              maxi=max(maxi,j-i);
        }
    }
    return maxi;
    */

    // time complexity : O(n)
    // space complexity : O(1)
    class Solution {
     public:
    int maxi1=INT_MIN;
     int i=0,j=colors.size()-1;
     while(colors[i]==colors[j]){
         j--;
     }
     maxi1=max(maxi1,j-i);
     j=colors.size()-1;
      while(colors[i]==colors[j]){
         i++;
     }
    maxi1=max(maxi1,j-i);
    return maxi1;
    }
};