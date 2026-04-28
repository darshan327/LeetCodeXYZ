// Leetcode Number : 3750. Minimum Number of Flips to Reverse Binary String

// time complexity : O(logn)
// space complexity : O(logn)

class Solution {
public:
    int minimumFlips(int n) {
        int val = 0;
        int temp = n;

        while (temp > 0) {
            int lastBit = temp & 1;  

            val = val << 1;           
            val = val | lastBit;    

            temp = temp >> 1;      
        }

        int count = 0;
        temp = n;

      
        while (temp > 0 || val > 0) {
            int bit1 = temp & 1;     
            int bit2 = val & 1;      

            if (bit1 != bit2) {
                count++;
            }

            temp = temp >> 1;
            val = val >> 1;
        }

        return count;
    }
};