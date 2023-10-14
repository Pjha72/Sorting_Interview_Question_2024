// Allow Random Access : Array, vector, Deque
// Not Allow Random Access : List, Set, Map, Multiset, Multimap

#include<bits/stdc++.h>
using namespace std;

// struct point{
//     int x,y;
// }
    
// bool myCmp(point p1, point p2){
//     return (p1.x < p2.x);
// }


int main(){
    // Array
    int arr[] = {10,20,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    // First Method : Increasing Order
    sort(arr, arr+n);

    // Second Method : Decreasing Order
    for(auto x : arr){
        cout<<x<<" ";
    }
    sort(arr, arr+n, greater<int>());
    cout<<endl;
    for(auto x : arr){
        cout<<x<<" ";
    }

    // Vector
    vector<int> v = {10,20,5,7};
    int n = v.size();

    // First Method : Increasing Order
    sort(v.begin(), v.end());

    // Second Method : Decreasing Order
    for(auto x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end(), greater<int>());
    for(auto x : v){
        cout<<x<<" ";
    }


    // point arr[] = {{3,10}, {2,8}, {5,4}};
    // int n = sizeof(arr)/sizeof(arr[0]);

    // First Method : Increasing Order
    // sort(arr, arr+n, myCmp);
    // for(auto i : arr){
    //     cout<<i.x<<" "<<i.y<<endl;
    // }

}

// Worst case and Average case : O(nlogn)
// Uses IntoSort (Hybrid of QuickSort, HeapSort and InsertionSort)
// Stable Sort : Relative Order of Elements with same value is maintained
