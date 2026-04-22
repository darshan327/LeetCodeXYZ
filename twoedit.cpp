// Leetcode number : 2452. Words Within Two Edits of Dictionary

 // time complexity : O(n^3)
 // space complexity : O(n)  

  class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
          vector<string> res;
         for(string i : queries){
            for(string j : dictionary){
                int count=0;
                for(int k=0; k<i.size(); k++){
                    if(i[k]!=j[k]){
                        count++;
                    }
                    if(count>2){
                        break;
                    }
                }
                if(count<=2){
                    res.push_back(i);
                    break;
                }
            }
         }
         return res;
    }
};
