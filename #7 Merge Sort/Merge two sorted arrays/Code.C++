// Merge two sorted arrays
/*
    Input : a[] = {10,15,20}
            b[] = {5, 6, 6, 15}
    Output : 5 6 6 10 15 15 20
*/

#include<bits/stdc++.h>
using namespace std;

// Naive Approach : Time Complexity : O((n+m)log(n+m)) Space Complexity : O(n+m)
void mergeSort(int arr[], int arr1[], int n, int m){
    int c[m+n];
    for(int i=0;i<n;i++){
        c[i] = arr[i];
    }
    for(int i=0;i<m;i++){
        c[m+i] = arr1[i];
    }
    sort(c,c+m+n);
    for(int i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }
}

// Efficient Approach : Time Complexity : O(n+m) Space Complexity : O(1)
void mergeSort(int arr[], int arr1[], int n, int m){
    int i = 0, j=0;
    while(i<n && j<m){
        if(arr[i]<=arr1[j]){
            cout<<arr[i]<<" ";
            i++;
        }
        else{
            cout<<arr1[j]<<" ";
            j++;
        }
    }

    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
    while(j<m){
        cout<<arr1[j]<<" ";
        j++;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    int arr1[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    mergeSort(arr,arr1,n,m);
}