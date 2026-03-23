
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
// Brute force
// Approch: sort the array then take last element as largest and traverse (from last) and compare 
//Time comlexity: nlogn + O(n)

int main(){
    vector<int> v = {5, 2, 8, 1, 3};
    int n = v.size();
    sort(v.begin(), v.end());            
    int largest = v[n-1];     
    int second;
    for(int i=n-2; i>=0; i--){
        if(largest != v[i]){
            second = v[i];
            break;
        }
    }
    
    cout<<"second largest "<<second<<endl;
    return 0;
}
*/



/*
//Better Approch
//Time comlexity: O(2n)
int main(){
    int arr[] = {1,2,2,1,56,3,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    int second = -1;

    for(int i=0; i<n; i++){
        if(arr[i] != largest && arr[i] > second){
            second = arr[i];
        }
    }
    cout<<second<<endl;
}
*/


//optimal approch

int second_lagest(int arr[], int n){
    int largest = arr[0];
    int slargest = -1;
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] != largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int second_smallest(int arr[], int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=0; i<n; i++){
        if(smallest > arr[i]){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < ssmallest ){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
int main(){
    int arr []= {1,2,32,12,34,31,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<second_lagest(arr, n)<<endl;
    cout<<second_smallest(arr, n)<<endl;
    return 0;
}
