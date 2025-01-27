#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:

    int maxcrosssum(vector<int> &prices , int left , int mid , int right){
        int minp = INT_MAX;
        for(int i =left;i<=mid;i++){
            minp = min(minp , prices[i]);
        }

        int maxp = INT_MIN;
        for(int i = mid+1 ; i<=right;i++){
            maxp = max(maxp , prices[i]);
        }

        return maxp-minp;
    }

    int maxp(vector<int> &prices , int left , int right){
        if(left>=right){
            return 0;
        }

        int mid = left +(right-left)/2;
        int leftsum = maxp(prices , left , mid);
        int rightsum = maxp(prices , mid+1 , right);
        int crosssum = maxcrosssum(prices , left , mid , right);

        return max({leftsum , rightsum , crosssum});
    }
    int maxProfit(vector<int>& prices) {
       return maxp(prices , 0 , prices.size()-1);
    }
};