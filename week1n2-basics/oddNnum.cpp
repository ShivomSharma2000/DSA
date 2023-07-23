#include<iostream>
using namespace std;

int main(){
    int num,a;
    int sum=0;
    cout<<"Enter a number"<<endl;
    cin>>num;

    for(int i=1;i<=num;i++){
        cout<<"Enter "<<i<<" number"<<endl;
         cin>>a;
         cout<<" ";
         sum=sum+a;
    }
    cout<<"Total sum of given numbers is:"<<sum;
    return 0;
}