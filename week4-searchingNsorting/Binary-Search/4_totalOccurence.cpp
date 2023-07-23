#include<iostream>
#include<algorithm>
using namespace std;


int findLastOccurence(int arr[], int size, int target)
{
    int s = 0;
    int e = size;
    int mid = s + (e - s) / 2;
    int ans2 = -1;

    while (s < e)
    {
        if (arr[mid] == target)
        {
            ans2 = mid;
            s = mid + 1;
        }

        else if (target < arr[mid])
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans2;
}


int findFirstOccurence(int arr[], int size, int target)
{
    int s = 0;
    int e = size;
    int mid = s + (e - s) / 2;
    int ans1 = -1;

    while (s < e)
    {
        if (arr[mid] == target)
        {
            ans1 = mid;
            e = mid - 1;
        }

        else if (target < arr[mid])
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans1;
}

int main()
{
    // Total occurence
    int arr[] = {1, 2, 3, 3, 3, 3, 5, 6, 8};
    int size = 9;
    int target = 3;

    int ans2 = findLastOccurence(arr, size, target);
    int ans1 = findFirstOccurence(arr, size, target);
    
    int total_occurence= (ans2 - ans1) +1;
    cout<<"Total Occurence of given target is "<<total_occurence;

    return 0;
}