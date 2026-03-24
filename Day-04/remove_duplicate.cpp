//remove duplicate element


#include<iostream>
#include<vector>
using namespace std;

int remove_duplicate(vector<int>& vec){
    int i = 0;
    for(int j=1; j<vec.size(); j++){
        if(vec[i] != vec[j]){
            i++;
            vec[i] = vec[j];
        }
    }
    return i+1;
}

int main(){
    vector<int>vec = {1,1,1,2,2,3,3,4};
    int n = remove_duplicate(vec);
    for(int i=0; i<n; i++){
        cout<<vec[i]<<" ";
    }

}