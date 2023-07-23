#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{2,1,2,2,0,1,1,0,0,0,2,1};
    int s=0;
    int e=arr.size()-1;

    while(s<=e){
        if(arr[s]>arr[e]){
            swap(arr[s],arr[e]);
            
        }
    }
    return 0;
}