// O(n^3)

#include<iostream>
using namespace std;

int main(){
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};

    int n = sizeof(arr)/sizeof(arr[0]);

    int max = INT_MIN;
    for(int i=1;i<n;i++){
        for(int j = 0;j<=n;j++){
            if(i+j>n){
                break;
            }
            int sum = 0;
            for(int k = j;k<i+j;k++){
                sum = sum + arr[k];
            }
            if(sum>=max){
                max = sum;
            }
        }
    }

    cout<<max<<endl;

}