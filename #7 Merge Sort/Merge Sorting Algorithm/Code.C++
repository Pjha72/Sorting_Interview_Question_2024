#include<bits/stdc++.h>
using namespace std;


void merge(int arr[], int l ,int m, int h){
    int n = m-l+1, m = h-m;
    int L[n],r[m];
    for(int i=0;i<n;i++){
        L[i] = arr[l+i];
    }
    for(int i=0;i<m;i++){
        r[i] = arr[m+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n && j<m){
        if(L[i]<=r[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = r[j];
            j++;
        }
        k++;
    }
    while(i<n){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<m){
        arr[k] = r[j];
        j++;
        k++;
    }
}

// Time Complexity: O(nlogn) Space Complexity: O(n)
void mergeSort(int arr[], int l, int r){
    if(r>l){
        int m = l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l = 0, r = n-1;
    mergeSort(arr, l, r);
}