#include<bits/stdc++.h>
using namespace std;

//brute force
/*void sort_0s_1s_2s(vector<int> &arr){
    int n = arr.size();
    int cnt0=0, cnt2=0, cnt1=0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }
    int idx = 0;
    while(cnt0--) arr[idx++] = 0;
    while(cnt1--) arr[idx++] = 1;
    while(cnt2--) arr[idx++] = 2;
}*/

//better
/*void sort_0s_1s_2s(vector<int> &arr){
    int n = arr.size();
    int cnt0=0, cnt2=0, cnt1=0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }
    for(int i=0; i<cnt0; i++){
        arr[i] = 0;
    }
    for(int i=cnt0; i< cnt0+cnt1; i++){
        arr[i] = 1;
    }
    for(int i=cnt0+cnt1; i<n; i++){
        arr[i] = 2;
    }
}*/

//optimal
void sort_0s_1s_2s(vector<int> &arr){
    int mid=0, high=arr.size()-1, low=0;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    
}

int main(){
    vector<int> arr{0, 0, 1, 0, 1, 2, 2, 1};
    sort_0s_1s_2s(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}