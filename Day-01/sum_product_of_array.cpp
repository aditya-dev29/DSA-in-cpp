//Problem: Calculate sum and product of an array
//Approch: Traverse the array and update sum and product simultaneously
//Time complexity = O(n)
//Space complexity = O(1)

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum=0;
    int mul=1;
    for(int i=0; i<n; i++){
        sum += arr[i];
        mul *= arr[i];
    }
    cout<<"Sum = "<<sum<<endl;
    cout<<"Product = "<<mul<<endl;
    return 0;
}