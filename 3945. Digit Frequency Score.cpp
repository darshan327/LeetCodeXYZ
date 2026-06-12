// time complexity: O(log n) 
// space complexity: O(1)



#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> res(10,0);
        while(n>0){
            int r = n%10;
            res[r]++;
            n/=10;
        }
        int sum=0;
        for(int i=1; i<10; i++){
            sum+=res[i]*i;
        }
        return sum;
    }
};

  int main(){
    Solution obj;
    int n;
    cin>>n;
    int ans = obj.digitFrequencyScore(n);
    cout<<ans;
    return 0;
  }