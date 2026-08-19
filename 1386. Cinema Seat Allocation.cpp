class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

    
        unordered_map<int, vector<int>> res;

        for (int i = 0; i < reservedSeats.size(); i++) {
            int row = reservedSeats[i][0];
            int seat = reservedSeats[i][1];

            res[row].push_back(seat);
        }

    
        int count = 2 * (n - res.size());

        for (auto &it : res) {

            int row = it.first;
            vector<int> seats = it.second;

            bool left = true;    
            bool middle = true;  
            bool right = true;   

            for (int seat : seats) {

                if (seat >= 2 && seat <= 5)
                    left = false;

                if (seat >= 4 && seat <= 7)
                    middle = false;

                if (seat >= 6 && seat <= 9)
                    right = false;
            }

            if (left && right) {
                count += 2;
            }
            else if (left || middle || right) {
                count += 1;
            }
        }

        return count;
    }
};