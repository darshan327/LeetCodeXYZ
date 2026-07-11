#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    int minimumDeletions(string s) {
        stack<char>st;
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(!st.empty() && st.top()=='b' && s[i]=='a'){
               st.pop();
               count++;
            }else{
                st.push(s[i]);
            }
        }
        return count;
    }
};

  int main(){
    Solution obj;
    string res;
getline(cin,res);
  int ans = obj.minimumDeletions(res);
  cout<<ans;
    return 0;
  }