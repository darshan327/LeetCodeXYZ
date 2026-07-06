#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

       int removeCoveredIntervals(vector<vector<int>>& intervals) {

    // Sort by start ascending.
    // If starts are equal, sort by end descending.
    sort(intervals.begin(), intervals.end(),
         [](vector<int>& a, vector<int>& b) {
             if (a[0] == b[0])
                 return a[1] > b[1];
             return a[0] < b[0];
         });

    int count = 1;
    int maxEnd = intervals[0][1];

    for (int i = 1; i < intervals.size(); i++) {

        if (intervals[i][1] <= maxEnd) {
            // Current interval is covered
            continue;
        }

        // Current interval is not covered
        count++;
        maxEnd = intervals[i][1];
    }

    return count;
}


  int main(){
    int n;
    cout<<"enter the number of intervals: ";
    cin>>n;
    vector<vector<int>> intervals(n,vector<int>(2));
    cout<<"Enter the intervals:";
    for(int i=0; i<n; i++){
        cin>>intervals[i][0]>>intervals[i][1];
    }
    int ans = removeCoveredIntervals(intervals);
    cout<<"Remaining intervals after removing covered intervals: "<<ans<<endl;
    return 0;
  }
  