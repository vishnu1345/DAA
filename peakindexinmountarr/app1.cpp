// O(n)
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxi = INT_MIN;
        int ans = -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxi){
                ans = i;
                maxi = arr[i];
            }
        }
        return ans;
    }
};