#include<iostream>
using namespace std;

int main(){
    int arr [3][4]={{9,2,3,1},{6,8,4,2},{10,4,2,7}};
    for(int i=0;i<3;i++){
         for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
         }
         cout<<endl;
    }
    return 0;
}