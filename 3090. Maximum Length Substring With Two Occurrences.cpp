class Solution {
public:
    int maximumLengthSubstring(string s) {
        int j=0,i=0,maxi=0;
        unordered_map<char,int> mp;
        while(i<s.size()){
            mp[s[i]]++;
            while(j<s.size() && mp[s[i]]>2){
                maxi=max(maxi,i-j);
                if(s[i]==s[j]){
                    mp[s[j]]--;
                    j++;
                    break;
                }else{
                    mp[s[j]]--;
                     j++;
                }
            }
            i++;
        }
        maxi=max(maxi,i-j);
        return maxi;
    }
};