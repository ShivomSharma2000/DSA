#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,3,5,2};
    int sizea = 4;
    int brr[] = {7,8,6,9};
    int sizeb = 4;

    vector<int> ans;

    for(int i = 0;i < sizea;i++){
        ans.push_back(arr[i]);
    }
    for(int i = 0;i < sizeb;i++){
        ans.push_back(brr[i]);
    }

    // Printing Union elements
    for(int i = 0;i < ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}