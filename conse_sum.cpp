
// LeetCode number : 2177. Find Three Consecutive Integers That Sum to a Given Number

/* just we sholud to find pattern in that like see natural number 1 2 3 4 5 6 7 8 9 10 ,
  Three consecutive sum like : 6 9 12 15 18 like that All divisible by 3. */
 
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
       if(num%3==0){
           return {(num/3)-1,(num/3),(num/3)+1};
       }
       return {};
    }
};