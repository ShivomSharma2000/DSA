#include<iostream>
using namespace std;

int findKey(int arr[][3],int key){
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 3;j++){
            if(arr[i][j] == key)
                    return key;
        }
    }
     return 0;
}

int main(){
    int arr[2][3]={{3,6,2},{8,5,9}};
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;

    if(findKey(arr,key)){
        cout<<"Found "<<key;
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}