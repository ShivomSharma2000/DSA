#include<iostream>
using namespace std;

int main(){
    string name= "laal";
    char ch;
    for(int i=0;i<name.length();i++){
        for(int j=i+1;j<name.length();j++){
            if(name[i]!=name[j]){
                ch=name[i];
                break;
            }   
            
        }
        if(ch>0){
            break;
        }
    }
    cout<<ch;
    return 0;
}