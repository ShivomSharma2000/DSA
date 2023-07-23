#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    // Using STL ,function name is lower_bound();

    vector<int> arr{1, 2, 3, 3, 3, 3, 5, 6, 8};
    int target=3;
    
    auto ans1= lower_bound(arr.begin(),arr.end(),target); //for first occurence
    auto ans2= upper_bound(arr.begin(),arr.end(),target); //for last occurence

    cout<<"First occurence of given target is "<<ans1-arr.begin()<<endl;
    cout<<"Last occurence of given target is "<<ans2-arr.begin()-1;  //tried so much,if we are write -1,then they give us to correct answer.
    return 0;
}