// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> arr{2, 4, -3, 1, -5, 4, -8};

//     int s = 0;
//     int h = arr.size() - 1;

//     while (s <= h)
//     {
//         if (arr[s] < 0)
//         {
//             s++;
//         }
//         else
//         {
//             swap(arr[s], arr[h]);
//             h--;
//         }
//     }

//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<", ";
//     }
//     return 0;
// }

// Missing number find:-
// #include <iostream>
// #include <vector>
// using namespace std;

// void missingNumber(vector<int> &nums)
// {
//     int ans = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int index = abs(nums[i]);

//         if (nums[index - 1] > 0)
//         {
//             nums[index - 1] *= -1;
//         }
//     }
// }

// void printMissingNum(vector<int>& ans){
//     for(int i=0;i<ans.size();i++){
//         if(ans[i]>0){
//         cout<<i+1<<" ";
//         }
//     }
// }
// int main()
// {
//     vector<int> arr{3, 1, 3, 3, 5};
//     missingNumber(arr);
//     printMissingNum(arr);
//     return 0;
// }

// Wave pattern print
#include <iostream>
#include <vector>
using namespace std;

void wavePrint(vector<vector<int>>arr)
{
    int rows = arr.size();
    int columns = arr[0].size();

    for (int i = 0; i < columns; i++)
    {

        //  For printing even columns:-
        if ((i & 1) == 0)
        {
            for (int j = 0; j < rows; j++)
            {
                cout << arr[j][i] << " ";
            }
        }

        else
        {
            for (int k = rows-1; k >=  0; k-- )
            {
                cout << arr[k][i] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>>arr{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    wavePrint(arr);

    return 0;
}