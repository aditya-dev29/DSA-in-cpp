// Problem: Find smallest element in array
//Time complexity = O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;
int main(){
    int arr[] = {12, 3, 21, 6, -4, -12};
    int min = arr[0]; 
    for(int i = 0; i<6; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<min<<endl;
}