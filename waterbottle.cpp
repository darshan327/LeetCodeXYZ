class Solution {
public:
        int solve(int F,int E, int num,int D){
            while(E>=num){
                E=E-num;
                num++;
                F++;
            }
             D+=F;
            if(E+F>=num){
               return  solve(0,E+F,num,D);
            }
            return D;
        }
       
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int E=numBottles,D=numBottles;
        return solve(0,E,numExchange,D);
    }
};