#include <iostream>
#include <vector>
using namespace std;

int findLastOccurence(int arr[], int size, int target)
{
    int s = 0;
    int e = size;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s < e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
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
    return ans;
}

int main()
{
    // Lasst occurence
    int arr[] = {1, 2, 3, 3, 3, 3, 5, 6, 8};
    int size = 9;
    int target = 3;

    int ans = findLastOccurence(arr, size, target);
    if (ans == -1)
    {
        cout << "Occurence not found";
    }
    else
    {
        cout << "Last Occurence at index number " << ans;
    }

    return 0;
}