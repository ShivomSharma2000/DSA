// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
    
//     for(int i = 0;i < arr.size();i++){
//       cin>>arr[i];  
//     }

//     int temp = 0; 
//     for(int i = 0;i < arr.size(); i++){
//      temp = temp ^ arr[i];
//     }
//     cout<<"Unique element of given vector is: "<<temp;

//     return 0;
// }


// Find union(with duplicates)
#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> arr{1,2,4,6,8,10};
  vector<int> brr{3,4,5,6};
  vector<int> ans;

  for(int i = 0;i<arr.size();i++){
    ans.push_back(arr[i]);
    for(int j=0;j<brr.size();j++){
      // ans.push_back(brr[j]);
      if(arr[i]==brr[j]){
        arr[i]=-1;
       ans.push_back(brr[j]);
      }
    }
  }

  for(int i = 0;i < ans.size();i++){
    cout<<ans[i]<<" ";
  }
  return 0;
}