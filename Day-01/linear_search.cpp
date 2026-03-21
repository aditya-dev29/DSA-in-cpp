// Problem: Find the element in an array
// Approach: Linear search (traverse the array and compare elements)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 23, 4, 65, 78};
    int target = 4;
    for(int i=0; i<5; i++){
        if(arr[i] == target){
            cout<<"Found at "<<i+1<<endl;
            return 0;
        }
    }
    cout<<"Data not found"<<endl;
    return 0;
}