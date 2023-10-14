#include<bits/stdc++.h>
using namespace std;

// Naive Approach : Extra Space
void SelectionSort(int arr[], int n){
    int temp[n];
    for(int i=0;i<n;i++){
        int min_index = 0;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        temp[i] = arr[min_index];
        arr[min_index] = INT_MAX;
    }
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
}

// Naive Approach : No Extra Space
void SelectionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    SelectionSort(arr,n);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Does less Memory writes compared to Quick Sort, Merge Sort, Insertion Sort, etc. But Cycle Sort is Optimal in terms of Memory writes.
// Basic Idea of Heap Sort is Selection Sort.
// Not Stable Sort.
// In-Place Sort.
// Company Tags: Amazon, Flipkart, Microsoft, OYO Rooms, Paytm, Samsung, Snapdeal, Visa, Walmart

// Note: Selection Sort is not a Stable Sort.