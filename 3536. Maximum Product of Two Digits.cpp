class Solution {
public:
    int maxProduct(int n) {
        int max1=n%10,max2=0;
          n=n/10;
        while(n>0){
         int r=n%10;
          if(r>max1){
            max2=max1;
            max1=r;
          }else if(max2<=max1 && max2<r){
            max2=r;
          }
          n/=10;   
        }
        return max1*max2;
    }
};