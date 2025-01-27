// O(n*logn)

#include<iostream>
#include <vector>
using namespace std;

int crosssum(vector<int> arr , int l  , int h , int m){
    int sum =0;
    int lsum = INT_MIN;
    for(int i=m;i>=l;i--){
        sum = sum + arr[i];

        if(sum>lsum){
            lsum = sum;
        }
    }

    int rsum = INT_MIN;
    sum = 0;
    for(int i=m+1;i<=h;i++){
        sum = sum + arr[i];

        if(sum>rsum){
            rsum = sum;
        }
    }

    return rsum+lsum;
}

int maxsum(vector<int> &arr , int l , int h){
    if(l>h){
        return INT_MIN;
    }

    if(l==h){
        return arr[l];
    }

    int mid = (l+h)/2;

    int leftsum = maxsum(arr , l , mid);
    int rightsum = maxsum(arr , mid+1 , h);
    int crossum = crosssum(arr , l , h , mid);

    return max(leftsum , max(rightsum , crossum));
}

int main(){
     vector<int> arr = {-6,-2,8,3,4,-2};

    int n = arr.size();

    cout<<maxsum(arr , 0 , n-1);
}