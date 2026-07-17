#include<iostream>
using namespace std;

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int i=n*n;
       int j=n*(n+1);
          while(i>0){
            int r=j%i;
              j=i;
              i=r;
          } 
         return j;
    }
};

int main(){
    Solution obj;
    int q;
    cin>>q;
    int ans = obj.gcdOfOddEvenSums(q);
    cout<<ans;
    return 0;
}