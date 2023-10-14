#include<bits/stdc++.h>
using namespace std;

int partion(int arr[], int l, int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j=l;j<h-1;j++){
        if(arr[j]<pivot){
            j++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return i+1;
}

/*
    lomuto Partion
    Time Complexity: O(n) Space Complexity: O(1)
*/