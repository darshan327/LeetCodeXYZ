//time complexity: O(n)
//space complexity: O(1)

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> res1(26,0);
        vector<int> res2(26,0);
        for(int x : word){
            if(islower(x)){
                res1[x-'a']++;
            }else{
                res2[x-'A']++;
            }
        }
        int count = 0;
        for(int i=0; i<26; i++){
            if(res1[i]>0 && res2[i]>0){
                count++;
            }
        }
        return count;
    }
};

     int main(){
        Solution obj;
        string s;
        getline(cin,s);
        int val = obj.numberOfSpecialChars(s);
        cout<< val;
        return 0;
     }