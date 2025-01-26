// O(n^2)

#include<iostream>
using namespace std;

int main(){
     int arr[] = {2, 3, -8, 7, -1, 2, 3};

    int n = sizeof(arr)/sizeof(arr[0]);

    int max = INT_MIN;

    for(int i=0;i<n;i++){
        int sum = 0;

        for(int j = i;j<n;j++){
            sum = sum + arr[j];

            if(sum>max){
                max = sum;
            }
        }
    }

    cout<<max<<endl;
}