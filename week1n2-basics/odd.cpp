#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;

    for(int i=1;i<=num;i++){
        if(i%2==1){
            cout<<i<<" ";
        }
    }
    return 0;
}