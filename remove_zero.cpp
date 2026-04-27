// Leetcode number : 3726. Remove Zeros in Decimal Representation

  // time complexity : O(logn)
  // space complexity : O(logn)

  class Solution {
public:
    long long removeZeros(long long n) {
        string s = to_string(n);
        long long val=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]-'0'!=0){
                val=val*10+s[i]-'0';
            }
        }
        return val;
    }
};