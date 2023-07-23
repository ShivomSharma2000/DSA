#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // We will again searching with the help of STL,in it,we have a pre-defined function.
    vector<int> arr{1,2,3,4,5,6,7,8};

    if(binary_search(arr.begin(),arr.end(),10)){
            cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}