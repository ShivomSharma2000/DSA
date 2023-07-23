#include<iostream>
using namespace std;

int main(){
    int arr [3][3]={{9,2,3},
                    {6,8,4},
                    {10,4,2}};

    for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
         }
         cout<<endl;
    }
    return 0;
}