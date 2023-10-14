#include<bits/stdc++.h>
using namespace std;

/*
 1. O(n^2) Worst Case
 2. In-Place and stable
 3. Used in practice for small arrays (TimSort and IntraSort)
 4. O(n) in Best Case
*/

// Naive Approach
void InsertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    InsertionSort(arr,n);
}