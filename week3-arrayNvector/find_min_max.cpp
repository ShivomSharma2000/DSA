#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={{3,5,1},{9,6,8},{1,5,2}};
    // find maximum number of given 2D-Array
    int max=INT_MIN;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         if(max<arr[i][j]){
            max=arr[i][j];
         }
        }
    }
    cout<<"Maximum number is:"<<max<<endl;

    // find minimum number of given 2D-Array
    int min=INT_MAX;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         if(min>arr[i][j]){
            min=arr[i][j];
         }
        }
    }
    cout<<"Minimum number is:"<<min;
    return 0;
}