// time complexity: O(n)
// space complexity: O(1)

  class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1, l = 0;

        // Skip trailing spaces
        while(i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count characters of last word
        while(i >= 0 && s[i] != ' ') {
            l++;
            i--;
        }

        return l;
    }
};

int main() {
    Solution obj;

    string s;
    getline(cin, s);

    int length = obj.lengthOfLastWord(s);

    cout << length << " ";

    return 0;
}