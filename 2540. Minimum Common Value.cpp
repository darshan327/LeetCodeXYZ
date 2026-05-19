// time complexity: O(n1 + n2)
// space complexity: O(1)


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {

            if (nums1[i] == nums2[j]) {
                return nums1[i];
            }
            else if (nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return -1;
    }
};

int main() {

    Solution obj;

    int n1, n2;

    cin >> n1 >> n2;

    vector<int> nums1(n1);
    vector<int> nums2(n2);

    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    int val = obj.getCommon(nums1, nums2);

    cout << val << " ";

    return 0;
}