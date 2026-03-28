#include <iostream>
#include <vector>
using namespace std;


/*

        //using hashing
int missingNumber(vector<int>& nums) {
    int n = nums.size();

    vector<int> hash(n+1 , 0);

    //  mark elements present
    for (int num : nums) {
        hash[num] = 1;
    }

    // find missing number
    for (int i = 0; i <= n; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {3, 0, 1};
    cout << missingNumber(nums);
}

*/


//optimal sol using sum formula
/*
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int actualSum =0;

     //long long expSum = (n *1LL* (n + 1)) / 2;  
    int expSum = n * (n + 1)/2;
    for(int i=0; i<n; i++){
        actualSum+=nums[i];
    }

    return expSum - actualSum;

}
int main() {
    vector<int> nums = {3, 0, 1};
    cout << missingNumber(nums);
}
*/


//using XOR


int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int xor1=0, xor2=0;
    for(int i=1; i<=n; i++)     // they operate the number from 1 to n
        xor1 ^= i;
    
    for(int num: nums){          // they operate xor of given numbers only
        xor2 ^= num;
    }

    return xor1 ^ xor2;
}
int main() {
    vector<int> nums = {3, 0, 1};
    cout << missingNumber(nums);
}