#include<iostream>
using namespace std;

class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0,x=0;
        while(n>0){
            int r=n%10;
            if(r!=0){
                sum+=r;
                x=x*10+r;
            }
            n/=10;
        }
        long long val=0;
        while(x>0){
            val=val*10+x%10;
            x/=10;
        }
        return val*sum;
    }
};

int main(){
    Solution obj;
    int n;
    cin>>n;
    long long ans = obj.sumAndMultiply(n);
    cout<<ans;
    return 0;
}