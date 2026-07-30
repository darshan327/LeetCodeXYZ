#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;
        for(int i=0; i<word.size(); i++){
            ans+=(i/8)+1;
        }
        return ans;
    }
};

int main(){
    Solution obj;
    string res;
    getline(cin,res);
    int ans = obj.minimumPushes(res);
    cout<<ans;
   return 0;
}