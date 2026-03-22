// Problem: Find the unique element in an array
// Approach: Use XOR operation. Same elements cancel out (a ^ a = 0),
// and 0 ^ unique = unique, so the remaining value is the answer.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,1,2,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = 0;
    for(int i=0; i<n; i++){
        ans ^= arr[i]; 
    }
    cout<<ans<<endl;
}