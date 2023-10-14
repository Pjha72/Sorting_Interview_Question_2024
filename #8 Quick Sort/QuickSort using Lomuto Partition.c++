#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h){
    int pivot = arr[h];
    int i=l-1;
    for(int j=l;j<h-1;j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
void QuickSort(int arr[], int l, int h){
    if(l < h){
        int  p = partition(arr,l,h);
        QuickSort(arr, l, p-1);
        QuickSort(arr, p+1, h);
    }
}