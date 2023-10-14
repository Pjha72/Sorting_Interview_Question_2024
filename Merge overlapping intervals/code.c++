#include<bits/stdc++.h>
using namespace std;

// How to check if two invertals overlap?
// Naive solution : O(n^3)
// start = min(i1.start, i2.start)
// end = max(i1.end, i2.end)

// Efficent Solution
/*
 Sort by start time in increasing order
      OR
 Sort by end time in decreasing order
*/

struct Interval{
    int s,e;
};

bool myCmp(Interval a, Interval b){
    return a.s < b.s;
}

void mergerInterval(Interval arr[], int n){
    sort(arr,arr+n, myCmp);
    int res = 0;
    for(int i=1;i<n;i++){
        if(arr[res].e >= arr[i].s){
            arr[res].e = max(arr[res].e, arr[i].e);
            arr[res].s = min(arr[res].s, arr[i].s);
        }
        else{
            res++;
            arr[res] = arr[i];
        }
    }

    for(int i=0;i<=res;i++){
        cout<<"["<<arr[i].s<<", "<<arr[i].e<<"]";
    }
}