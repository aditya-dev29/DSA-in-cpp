

#include<iostream>
#include<vector>
using namespace std;

void left_rotation_once(vector<int>& vec){
    int temp = vec[0];
    for(int i=1; i<vec.size(); i++){
        vec[i-1] = vec[i];
    }
    vec[vec.size() - 1] = temp;
}

int main(){
    vector<int>vec = {1,2,3,4,5};
    left_rotation_once(vec);
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}