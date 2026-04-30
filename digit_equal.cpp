// LeetCode Number : 3461. Check If Digits Are Equal in String After Operations I

// time complexity: O(n)
// space complexity: O(n)

   class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()>2){
            string res="";
            for(int i=0; i<s.size()-1; i++){
                res+=(s[i]-'0'+s[i+1]-'0')%10;
            }
            s=res;
        }
        return s[0]==s[1];
    }
};