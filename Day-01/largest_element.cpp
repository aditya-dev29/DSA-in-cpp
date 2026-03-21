// Problem: Find smallest element in array
//Time complexity = O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;
int main(){
    int arr[] = {12, 32, 33, 55, 87, 345};
    int max = arr[0];
    for(int i=0; i<6; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
}