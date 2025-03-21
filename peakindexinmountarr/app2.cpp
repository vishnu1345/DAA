// T.C. O(logn)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 1;
        int r = arr.size()-2;

        while(l<r){
            int mid = l+(r-l)/2;
            if(arr[mid]>arr[mid+1]){
                r = mid;
            }
            else l = mid+1;
        }
        return l;
    }
};