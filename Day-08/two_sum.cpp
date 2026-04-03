#include<bits/stdc++.h>
using namespace std;


//brute force
/*vector<int> twoSum(vector<int>& nums, int target){
    int n = nums.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(nums[i] + nums[j] == target){
                //cout<<"Found";
                return {i, j};
            }
        }
    }
    return {-1, -1};
}*/

//better approch (optimal for non sorted array)
vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int>mp;
    int n = nums.size();
    for(int i=0; i<n; i++){
        int compliment = target - nums[i];
        if(mp.find(compliment) != mp.end()){
            return {mp[compliment], i};
        }
        mp[nums[i]] = i;
    }
    return {-1, -1};
}



int main(){
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> res = twoSum(arr, 8);
    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;
}