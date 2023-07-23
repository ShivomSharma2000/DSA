#include<iostream>
using namespace std;

int main(){
    int a=1;
    for(int i=5;i>0;i--){
        a=a*i;
    }
    cout<<"factorial is:"<<a;
    return 0;
}