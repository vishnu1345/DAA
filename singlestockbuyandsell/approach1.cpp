#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = INT_MIN;
        for(int i=0;i<prices.size();i++){
        
            for(int j=i;j<prices.size();j++){
                int diff = prices[j]-prices[i];
                if(diff>max){
                    max = diff;
                }
            }
        }
        return max;
    }
};