#include<iostream>
using namespace std;

class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans=n,prod;
        while(1){
             prod=1;
           while(n>0){
             prod*=n%10;
             n/=10;
           }
           if(prod%t==0){
            break;
           }
             ans++;
             n=ans;
        }
        return ans;
    }
};

   int main(){
    Solution obj;
    int n,t;
    cin>>n>>t;
    int ans = obj.smallestNumber(n,t);
    cout<<ans;
    return 0;
   }