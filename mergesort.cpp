#include<iostream>
using namespace std;


void merge(int arr[] , int left , int right , int mid){
    int n1 = mid - left +1 ;
    int n2 = right - mid;

    int L[n1] , R[n2];

    for(int i=0;i<n1;i++){
        L[i] = arr[left+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = arr[mid+1+i];
    }

    int i =0;
    int j = 0;
    int k = left;

    while(i<n1 && j<n1){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int l , int h , int arr[]){
   if(l>=h){
    return ;
   }

   int mid = (l+h)/2;

   mergesort(l , mid , arr);
   mergesort(mid+1 , h , arr);

   merge(arr , l , h , mid);
}