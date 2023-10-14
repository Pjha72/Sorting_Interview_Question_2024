// Merge function of Merge sort
#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n) Space Complexity : O(n)
void mergeSortFunction(int arr[], int low, int mid, int high){
    int n = mid-low+1, m = high-mid;
    int left[n], right[m];
    for(int i=0;i<n;i++){
        left[i] = arr[low+i];
    }
    for(int i=0;i<m;i++){
        right[i] = arr[mid+i+1];
    }

    // Merge function code
    int i=0, j=0, k=low;
    while(i<n && j<m){
        if(left[i]<=right[j]){
            arr[k++] = left[i];
            i++;
        }
        else{
            arr[k++] = right[j++];
        }
    }

    while(i<n){
        arr[k++] = left[i++];
    }

    while(j<m){
        arr[k++] = right[j++];
    }
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int low=0, high=size-1, mid=(low+high)/2;
    
    mergeSortFunction(arr,low,mid,high);
}