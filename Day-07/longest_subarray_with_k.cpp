#include<bits/stdc++.h>
using namespace std;


//brute force
/*int longestSubarray(vector<int>& arr, int k){
    int maxlen =0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum+=arr[j];
            if(sum == k){
                maxlen = max(maxlen, j-i+1);
            }
        }
    }
    return maxlen;
}
*/


//better (optimal for -ve containing array)
/*int longestSubarray(vector<int>& arr, int k){
    unordered_map<long long, int>preSum;
    int n = arr.size();
    long long sum = 0;
    int maxlen = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];

        if(sum == k){                                 
            maxlen = i+1;
        }
        
        if(preSum.find(sum-k) != preSum.end()){                   
            int len = i - preSum[sum-k];
            maxlen = max(maxlen, len);
        }

        if(preSum.find(sum) == preSum.end()){
            preSum[sum] = i;
        }
    }
    return maxlen;
}
*/

// optimal solution (for +ve and 0 containg array)
int longestSubarray(vector<int>& arr, int k){
    int n = arr.size();
    int left = 0, right = 0;
    long long sum = arr[0];  
    int maxlen = 0;
    while(right < n){
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxlen = max(maxlen, right - left +1);
        }
        right++;
        if(right < n) sum += arr[right];
    }
    return maxlen;
}

int main(){
    vector<int>a{1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    cout<<longestSubarray(a, 3);
    return 0;
}