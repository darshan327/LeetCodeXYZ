#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int captureForts(vector<int>& forts) {
        int ans = 0;
        for(int i=0,j=0; i<forts.size(); i++) {
            if(forts[i]) {
                if(forts[j] == -forts[i]) {
                    ans = max(ans, i-j-1);
                }
                j = i;
            }
        }

        return ans;
    }
};

  int main(){
    Solution obj;
    int n;
    cin>>n;
    vector<int>res(n);
    for(int i=0; i<n; i++){
        cin>>res[i];
    }
    int ans=obj.captureForts(res);
    cout<<ans;
    return 0;
  }