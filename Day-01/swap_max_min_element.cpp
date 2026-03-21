// Problem: Swap minimum and maximum element in array
// Approach: Find indices of min and max, then swap
// Time Complexity: O(n)
// Space Complexity: O(1)


#include<iostream>
using namespace std;

void swap_max_min(int arr[], int n){
    int min = 0;
    int max = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<min)
            min = i;
        if(arr[i]>max)
            max = i;
    }
    swap(arr[min],arr[max]);
}

int main(){
    int a[] = {1, 23, 54, 6, 65};
    int n = sizeof(a)/sizeof(a[0]);
    swap_max_min(a, n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}