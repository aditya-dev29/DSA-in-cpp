



#include<iostream>
using namespace std;

void reverse_array(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

int main(){
    int arr[6] = {1, 2, 4, 5, 8, 6};
    reverse_array(arr, 6);

    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}