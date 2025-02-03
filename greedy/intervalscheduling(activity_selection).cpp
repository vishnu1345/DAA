#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    bool static comparator(vector<int> &a , vector<int> &b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end() , comparator);

        int starttime = intervals[0][0];
        int finishtime = intervals[0][1];
        int cnt=1;
        for(int i=1;i<intervals.size();i++){
            int x = intervals[i][0];
            int y = intervals[i][1];

            if(x>=finishtime){
                cnt++;
                finishtime = y;
                starttime = x;
            }
        }

        return intervals.size()-cnt;
    }
};