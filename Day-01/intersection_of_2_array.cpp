// Problem: Find intersection of two arrays
// Approach: Compare each element of first array with second array (Brute Force)
// Time Complexity: O(n*m)
// Space Complexity: O(1)


#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 7};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j] = -1;
            }
        }
    }
    return 0;
}