

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

//brute force
/*
void left_rotate_array(vector<int>& arr, int k){
    vector<int>temp;
    int n = arr.size();
    for(int i=0; i<k; i++){
        temp.push_back(arr[i]);
    }

    for(int i=k; i<n; i++){
        arr[i-k] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i-n-k] = temp[i];
    }
}

void right_rotate_array(vector<int>& arr, int k){
    vector<int>temp;
    int n = arr.size();
    k=k%n;
    for(int i=n-k; i<n; i++){
        temp.push_back(arr[i]);
    }

    for(int i=n-k-1; i>=0; i--){
        arr[i+k] = arr[i];
    }

    for(int i=0; i<k; i++){
        arr[i] = temp[i];
    }
}

*/


//OPTIMAL

void left_rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        reverse(nums.begin(), nums.begin()+k);   //for 1st k element reverse
        reverse(nums.begin()+k, nums.end());     //reverse from Kth element to last
        reverse(nums.begin(), nums.end());       // reverse whole array
}

void right_rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        reverse(nums.begin(), nums.end());       // reverse whole array
        reverse(nums.begin(), nums.begin()+k);   //for 1st k element reverse
        reverse(nums.begin()+k, nums.end());     //reverse from Kth element to last OR rest element
        
}

int main(){
    vector<int>vec ={1,2,3,4,5,6,7};
    right_rotate(vec, 3);
    for(int i:vec){
        cout<<i<<" ";
    }
}