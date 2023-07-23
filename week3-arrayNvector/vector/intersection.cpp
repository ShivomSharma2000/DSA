#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 3, 4, 6, 8};
    int sizea = 6;
    int brr[] = {3, 4, 9, 10};
    int sizeb = 4;

    vector<int> ans;

    for (int i = 0; i < sizea; i++)
    {
        for (int j = 0; j < sizeb; j++)
        {
            if (arr[i] == brr[j])
            {
                brr[j] = -1;
                ans.push_back(arr[i]);
                break;
            }
        }
    }

    for(int i = 0;i < ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}