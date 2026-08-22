class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int sum=0;
        int prod=1;
 
          while(n>0){
             int r=n%10;
               sum+=r;
               prod=prod*r;
               n=n/10;
          }
        
        return (temp%(sum+prod)==0);
    }
};