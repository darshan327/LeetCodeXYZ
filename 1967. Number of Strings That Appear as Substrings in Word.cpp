// time complexity: O(n*m) 
// space complexity: O(1)

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0 ;
        for(int i=0; i<patterns.size(); i++){
            if(word.find(patterns[i])!=string::npos){
                count++;
            }
        }
    return count;
    }
};

  int main(){
    Solution obj;
    int n;
    cin>>n;
    cin.ignore();
    
    string word;
    getline(cin,word);
    vector<string> res(n);
    for(int i=0; i<n; i++){
        cin>>res[i];
    }
    int ans = obj.numOfStrings(res,word);
    cout<<ans;
    return 0;
  }