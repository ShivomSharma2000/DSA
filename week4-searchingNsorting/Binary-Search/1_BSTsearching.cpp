#include<iostream>
using namespace std;

int findNumber(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }

        else if(target<arr[mid]){
            e=mid-1;
        }

        else{
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    // Searching using Binary search(it is always sorted)-

    int arr[]={1,3,4,5,6,7,8,12};
    int size=8;
    int target=4;
    int ans=findNumber(arr,size,target);
    if(ans==-1){
        cout<<"Selected element isn't here!";
    }
    else{
        cout<<"Selected element is exist on index number "<<ans;
    }

    return 0;
}
