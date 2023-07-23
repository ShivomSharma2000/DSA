#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{10,20,40,30,35,25};
    int sum=60;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                cout<<"("<<arr[i]<<","<< arr[j]<<")"<<" ";
            }
        }
    }
    return 0;
}