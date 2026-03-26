#include <iostream>
#include <vector>
using namespace std;

// Function to check if array is sorted and rotated
bool check(vector<int>& nums) {
    int count = 0;
    int n = nums.size();

    for(int i = 0; i < n; i++){
        if(nums[i] > nums[(i + 1) % n]){
            count++;
        }
    }

    return count <= 1;
}

int main() {
    vector<int> nums = {3, 4, 5, 1, 2}; 

    if(check(nums)){
        cout << "Array is sorted and rotated";
    } else {
        cout << "Array is NOT sorted and rotated";
    }

    return 0;
}