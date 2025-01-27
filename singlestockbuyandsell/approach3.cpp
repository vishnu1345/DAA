#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int res = 0;
        for(int i=1;i<prices.size();i++){
        
            minprice = min(minprice , prices[i]);

           res = max(res , prices[i]-minprice);
        }
        return res;
    }
};