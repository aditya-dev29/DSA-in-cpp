


#include<bits/stdc++.h>
using namespace std;

//brute force (take a temp[] and placed alll non zero numbers and then traverse and again place all temp value in original array and rest will put 0 )
void move_zero(vector<int> &arr){
    vector<int>temp;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }

    for(int i=0; i<temp.size(); i++){
        arr[i] = temp[i];
    }

    for(int i=temp.size()-1; i<arr.size(); i++ ){
        arr[i]=0;
    }
    
}


// optimal
void moveZeroes(vector<int>& nums) {
        int j=-1;
        for(int i=0; i<nums.size(); i++){        //find 1st 0
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
        if(j==-1)return;

        for(int i=j+1; i<nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
}

int main(){

}