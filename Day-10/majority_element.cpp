//problem: find majority element that occour more than n/2 times

#include<bits/stdc++.h>
using namespace std;

//brute force
/*int majority_element(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j])
             cnt++;
        }
        if(cnt == n/2){
            return arr[i];
        }
    }
    return -1;
}*/


//better approch using hash map
/*int majority_element(vector<int> &arr){
    int n = arr.size();
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto it: mp){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;

}*/


//Optimal using BOYER MOORE VOTING Algorithm
int majority_element(vector<int> &arr){
    int n = arr.size();
    int cnt = 0;
    int el;
    for(int i=0; i<n; i++){
        if(cnt == 0){
            cnt = 1;
            el = arr[i];
        }else if(arr[i] == el){
            cnt++;
        }else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == el){
            cnt1++;
        }
    }
    if(cnt1 > n/2)
        return el;
    
    return -1;

}

int main(){
    vector<int> v{1,1,2,2,3,2,1,3,2,2,2};
    cout<<majority_element(v);
    return 0;
}