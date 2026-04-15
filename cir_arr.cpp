// LeetCode Number : 2515. Shortest Distance to Target String in a Circular Array.
 // short cut
  class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size(),ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(words[i]==target){
                int dif=abs(i-startIndex);
                ans=min(ans,min(dif,n-dif));
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};

  // direct method

  class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        if(words[startIndex] == target) return 0;
        int idx1 = -1, idx2 = -1;
        int count1 = 1, count2 = 1;

          int n = words.size();

     
        int i = (startIndex + 1) % n;
        while(i != startIndex){
            if(words[i] == target){
                idx1 = count1;
                break;
            }
            i = (i + 1) % n;
            count1++;
        }

        int j = (startIndex - 1 + n) % n;
        while(j != startIndex){
            if(words[j] == target){
                idx2 = count2;
                break;
            }
            j = (j - 1 + n) % n;
            count2++;
        }

        if(idx1 == -1 && idx2 == -1) return -1;
        if(idx1 == -1) return idx2;
        if(idx2 == -1) return idx1;

        return min(idx1, idx2);
    }
};