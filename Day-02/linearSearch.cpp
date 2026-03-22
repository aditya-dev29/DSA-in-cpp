// Problem: Perform linear search in a vector
// Approach: Traverse the vector and compare each element with target.
// Time Complexity: O(n)
// Space Complexity: O(1)


#include<iostream>
#include<vector>
using namespace std;

int linear_Search(vector<int> &v , int se){
    int n = v.size();
    for(int i=0; i<n; i++){
        if(se == v[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int>v={1,2,3,4,5,6};
    int target = 4;
    cout<<linear_Search(v, target)<<endl;
}