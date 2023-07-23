// 1. Input array and give the doubles
//  #include<iostream>
//  #include<math.h>
//  using namespace std;

// int main(){
//     int arr[5];

//     for(int i = 0;i < 5;i++){
//       cin>>arr[i];
//     }

//     for(int j = 0;j < 5;j++){
//         cout<< pow(arr[j] , 2) <<" ";
//     }

//     return 0;
// }

// 2. All the values of given array changes into 1.
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {1, 3, 6, 12, 22};
//     for(int i = 0;i < 5;i++){
//         arr[i]=1;
//         cout<< arr[i] <<" ";
//     }
//     return 0;
// }

// 3. Linear search (means find a specific value)
// #include <iostream>
// using namespace std;

// bool find(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)

//         return true;

//     }

//     return false;

// }

// int main()
// {
//     int arr[5] = {3, 1, 5, 8, 4};
//     int size = 5;

//     int key;
//     cout << "Enter a key which one you want to find" << endl;
//     cin >> key;

//     if (find(arr, size, key))
//     {
//         cout << "Found";
//     }
//     else
//     {
//         cout << "Not Found";
//     }
//     return 0;
// }

//------- OR ------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {3, 1, 5, 8, 4};
//     int size = 5;
//     int key;
//     cout << "Enter a key which one you want to find" << endl;
//     cin>>key;

//     int flag = 1;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             flag = 0;
//         }
//     }

//     if(flag){
//         cout<<"Not Found";
//     }
//     else{
//         cout<<"Found";
//     }
//     return 0;
// }

// 4. Count 0's and 1's
// #include <iostream>
// using namespace std;

// void Count(int arr[], int size)
// {
//     int zero_count = 0;
//     int one_count = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zero_count++;
//         }
//     }
//     cout<<"0's : "<<zero_count<<endl;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == 1)
//         {
//             one_count++;
//         }
//     }
//     cout<<"1's : "<<one_count;
// }

// int main()
// {
//     int arr[7] = {0, 0, 1, 1, 0, 1, 1};
//     int size = 7;

//     Count(arr, size);

//     return 0;
// }

// 5. find Maximum number and Minimum number
// #include <iostream>
// using namespace std;

// int max_num(int arr[], int size)
// {
//     int find_max = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i] > find_max){
//             find_max = arr[i];
//         }
//     }
//     return find_max;
// }

// int min_num(int arr[], int size)
// {
//     int find_min = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i] < find_min){
//             find_min = arr[i];
//         }
//     }
//     return find_min;
// }

// int main()
// {
//     int arr[] = {4, 2, 3, 66, 12, 32, 34};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int res_max = max_num(arr, size);
//     int res_min = min_num(arr, size);
//     cout<<"Maximum number in array:"<<res_max<<endl;
//     cout<<"Minimum number in array:"<<res_min<<endl;
//     return 0;
// }

// 6.Extreme print in Array
// #include <iostream>
// using namespace std;

// void extreme_print(int arr[], int size)
// {
//     int start = 0;
//     int end = size - 1;

//     while (start <= end)
//     {
//         if (start == end)
//         {
//             cout << arr[start];
//             break;
//         }

//         cout << arr[start];
//         cout << arr[end];
//         start++;
//         end--;
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int size = 8;

//     extreme_print(arr, size);

//     return 0;
// }

// 7.Reverse an array
// #include<iostream>
// using namespace std;

// void reverse(int arr[], int size){
//    int start = 0;
//    int end = size - 1;

//    while(start <= end)
//    {
//     cout<<arr[end];
//     end--;
//    }
// }

// int main(){
// int arr[] = {2,3,4,5,6,7,8};
// int size = 7;

// reverse(arr, size);
//     return 0;
// }

// ---- OR ----

// #include<iostream>
// using namespace std;

// void reverse(int arr[], int size){
//     int start = 0;
//     int end = size - 1;

//     while(start <= end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// void print_reverse(int arr[],int size){
//     for(int i = 0;i < size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[] = {2,3,4,5,6,7,8};
//     int size = 7;

//     reverse(arr, size);
//     print_reverse(arr, size);
//     return 0;
// }

// Initialize a specific value of whole array
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // int arr[10];
//    // memset(arr,0,sizeof(arr));   //for int you can only pass 0 and -1,for char and string you can pass any char or string.

//     char arr[10];
//     memset(arr,'2',sizeof(arr));
//     for(int i =0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// ---------- VECTOR -------------

// 1. Find unique element

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
// int n;
// cout<<"Enter the size of the array:"<<endl;
// cin>>n;

// vector<int> arr(n);
// for(int i = 0; i <  n; i++){
//     cin>>arr[i];
//     }

//     int temp = 0;
//     for(int j = 0;j < n; j++){
//         temp = temp ^ arr[j];
//     }

//     cout<<"Unique element is :"<<temp;
//     return 0;
// }

// ----OR(using function) -----
// #include <iostream>
// #include <vector>
// using namespace std;

// int findUnique(vector<int> arr){
//     int ans = 0;
//     for(int i =0;i < arr.size();i++){
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of the array:" << endl;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     int unique_num = findUnique(arr);
//     cout<<"Unique element is :"<<unique_num;

//         return 0;

// }

// 2.Find Union:
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int arr[] = {1,3,5,6,7};
//     int sizea = 5;
//     int brr[] = {2,6,5};
//     int sizeb = 3;

//     vector<int> ans;

//     // Using below code,pushing all elements on vector ans
//     for(int i = 0;i < sizea;i++){
//         ans.push_back(arr[i]);
//     }

//     for(int j = 0;j < sizeb;j++){
//         ans.push_back(brr[j]);
//     }

//     cout<<"Union elements are: "<<endl;
//     for(int k = 0;k < ans.size();k++){
//         cout<<ans[k]<<" ";
//     }
//     return 0;
// }

// 3.Intersection
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr{2,3,3,4,5,6};
//     vector<int> brr{3,3,2,9};

//     vector<int> ans;

//     for(int i = 0;i < arr.size();i++)
//     {
//         for(int j = 0;j < brr.size();j++)
//         {
//             if(arr[i] == brr[j])
//             {
//                 brr[j] = -1;         //this line including because we don't want to add same elements in ans
//                 ans.push_back(arr[i]);            }
//         }
//     }

//     for(auto value: ans)
//     {
//         cout<<value<<" ";
//     }

//     return 0;
// }

// 4.Find Pair:

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr{1,2,3,4,5,9,7};
//     int pair_be = 9;
//     vector<int> ans;

//     for(int i = 0;i < arr.size();i++){
//         for(int j = i + 1;j < arr.size();j++){
//             if(arr[i] + arr[j] == pair_be){
//                 cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
//             }
//         }
//     }
//     return 0;
// }

// 5.Find Triplet:
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> arr{5, 10, 15, 30, 20, 50, 70};
//     int pair = 90;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             for (int k = j + 1; k < arr.size(); k++)
//             {
//                 if (arr[i] + arr[j] + arr[k] == pair)
//                 {
//                     cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;
//                 }
//             }
//         }
//     }
//     return 0;
// }

// 6.Sort 0's and 1's:
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr{0,1,0,0,0,1,1,0};

//     // vector<int> ans;
//     int s = 0;
//     int end = arr.size();

//     while(s < end){
//         if(arr[s] == 0 && arr[end] ==1){
//             s++;
//             end--;
//         }
//         else if(arr[s] == 1 && arr[end] ==0){
//             swap(arr[s],arr[end]);
//         }
//         else if(arr[s] ==0 && arr[end]==0){
//             s++;
//         }
//         else{
//             end--;
//         }
//     }

//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// -----OR-----

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr{0,1,0,1,0,0,1,1,0,0,0,1,1,0};

//     int s = 0;
//     int e = arr.size() - 1;
//     int i = 0;

//     // while(i <= e){
//     //     if(arr[i] == 0){
//     //         i++;
//     //     }
//     //     else if(arr[i] == 1){
//     //         swap(arr[i],arr[e]);
//     //         e--;
//     //     }
//     // }

// // ----or----

//     while(s < e){
//         if(arr[i] == 0){
//             swap(arr[s],arr[i]);
//             s++;
//             i++;
//         }
//         else if(arr[i] == 1){
//             swap(arr[i],arr[e]);
//             e--;
//         }
//     }

//     for(auto value:arr){
//         cout<<value<<" ";
//     }

//     return 0;
// }

// -------Revise Vector-------

// 1.Unique elements
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr{1,3,1,5,5,3,7};

//     int ans = 0;
//     for(int i = 0;i < arr.size();i++){
//         ans = ans ^ arr[i];
//     }
//     cout<<ans;

//     return 0;
// }
// ----or----

// #include <iostream>
// #include <vector>
// using namespace std;

// int find_unique(vector<int> arr)
// {
//     int ans = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

// int main()
// {
//     cout << "Enter the number of elements in array:" << endl;
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for(int i = 0;i < arr.size();i++){
//         cin>>arr[i];
//     }

//     int res = find_unique(arr);
//     cout<<"Unique element is: "<<res;

//     return 0;
// }

// 2. Union of two arrays
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> arr{1, 2, 4, 5};
//     vector<int> brr{3, 7, 3, 8, 4};

//     vector<int> ans;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         ans.push_back(arr[i]);
//     }
//     for (int j = 0; j < brr.size(); j++)
//     {
//         ans.push_back(brr[j]);
//     }

//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = i + 1; j < ans.size(); j++)
//         {
//             if (ans[i] == ans[j])
//             {
//                 continue;
//             }
//             else
//             {
//                 cout << ans[i] << " ";
//                 break;
//             }
//         }
//     }
//         return 0;
// }

// 3. Intersection of two arrays
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> arr{1, 2, 3, 7, 4};
//     vector<int> brr{6, 3, 7, 2};

//     vector<int> ans;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < brr.size(); j++)
//         {
//             if (arr[i] == brr[j])
//             {
//                 ans.push_back(arr[i]);
//                 break;
//             }
//         }
//     }

//    for(auto value: ans){
//     cout<<value<<" ";
//    }
//     return 0;
// }

// 4. Pair sum
// #include<iostream>
// #include<vector>
// using namespace std;

// void pair_num(vector<int> arr, int sum){

//     for(int i = 0;i < arr.size();i++){
//         for(int j = i + 1;j < arr.size();j++){
//             if(arr[i] + arr[j] == sum){
//                 cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
//             }
//         }
//     }
// }

// int main(){
//     cout<<"Enter the elements form array: "<<endl;
//     int n;
//     cin>>n;

//     vector<int> arr(n);
//     for(int i = 0;i < arr.size();i++){
//         cin>>arr[i];
//     }

//     int sum = 90;   //pair should be 90(given number)

//     pair_num(arr, sum);
//     return 0;
// }

// 5. Triplet sum
// #include <iostream>
// #include <vector>
// using namespace std;

// void triplet_num(vector<int> arr, int sum)
// {

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             for (int k = j + 1; k < arr.size(); k++)
//             {
//                 if (arr[i] + arr[j] + arr[k] == sum)
//                 {
//                     cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;
//                 }
//             }
//         }
//     }
// }

// int main()
// {
//     cout << "Enter the elements form array: " << endl;
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cin >> arr[i];
//     }

//     int sum = 90; // pair should be 90(given number)

//     triplet_num(arr, sum);
//     return 0;
// }

// 6.Sort 0's and 1's
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> arr{0, 1, 0, 0, 1, 1,1,1,0,0,1,1,1,0,0};

//     int start = 0;
//     int end = arr.size() - 1;

//     while (start < end)
//     {
//         if (arr[start] == 0)
//         {
//             start++;
//         }
//         else if (arr[start] == 1)
//         {
//             swap(arr[start], arr[end]);
//             end--;
//         }
//     }

//     for (auto value : arr)
//     {
//         cout << value << " ";
//     }

//     return 0;
// }

// 7. Left rotate an array by 1 element
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr{1,2,3,4,5};
//     int final_point = 0;
//     int end = arr.size() - 1;

//     while(final_point != end)
//     {
//         swap(arr[final_point],arr[final_point + 1]);
//         final_point++;
//     }

//     for(auto value: arr){
//         cout<<value<<" ";
//     }

//     return 0;
// }

// --------------- 2D-Array----------------

// 1. Print 2d array as rows and column wise
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[3][3] = {
//                      {1, 2, 3},
//                      {4, 5, 6},
//                      {7, 8, 9}
//                     };

//     //printing row wise:
//     for(int i = 0;i < 3;i++){
//         for(int j = 0;j < 3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     // printing column wise:
//       for(int i = 0;i < 3;i++){
//         for(int j = 0;j < 3;j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 2. Taking input for 2d array
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[4][4];

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

// cout<<"Printing row wise: "<<endl;
//  for(int i = 0;i < 4;i++){
//     for(int j = 0;j < 4;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

//     cout<<"Printing column wise: "<<endl;
//      for(int i = 0;i < 4;i++){
//         for(int j = 0;j < 4;j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 3. Print row-sum ?
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[4][5] = {{4, 2, 7, 4, 1},
//                      {8, 5, 2, 7, 0},
//                      {1, 4, 2, 8, 3},
//                      {4, 6, 2, 8, 5}};

// int sum = 0;
// for(int i = 0;i < 4;i++){
//     for(int j = 0;j < 5;j++){
//         sum = sum + arr[i][j];
//     }
//     cout<<"Row "<<i<<" :"<<sum<<endl;
//     sum = 0;
// }
//     return 0;
// }

// ----or----
// #include <iostream>
// using namespace std;

// bool find_key(int arr[][5], int rows, int cols, int key)
// {

//     cout << endl;
//     for (int i = 0; i < 4; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 5; j++)
//         {
//             if (arr[i][j] == key)
//                 return true;
//         }
//     }
//     return false;
// }

// void printRow_sum(int arr[][5], int rows, int cols)
// { // when we are passing 2-d array,always 2nd [] or so on
//   // should be filled with some number expect one [] can be empty

//     for (int i = 0; i < 4; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 5; j++)
//         {
//             sum = sum + arr[i][j];
//         }
//         cout << "Row " << i << " :" << sum << endl;
//     }
// }

// void printCols_sum(int arr[][5], int rows, int cols)
// {

//     cout << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 4; j++)
//         {
//             sum = sum + arr[j][i];
//         }
//         cout << "Column " << i << " :" << sum << endl;
//     }
// }

// int main()
// {
//     int arr[4][5] = {{4, 2, 7, 4, 1},
//                      {8, 5, 2, 7, 0},
//                      {1, 4, 2, 8, 3},
//                      {4, 6, 2, 8, 5}};

//     int rows = 4;
//     int cols = 5;

//     int key;
//     cout << "Enter key: " << endl;
//     cin >> key;

//     printRow_sum(arr, rows, cols);
//     printCols_sum(arr, rows, cols);
//     if (find_key(arr, rows, cols, key))
//     {
//         cout << "key is found";
//     }
//     else
//     {
//         cout << "Key not found";
//     };
// }

// 4. Find maximum and minimum in 2d array
#include <iostream>
using namespace std;

int find_max(int arr[][5], int rows, int cols)
{
    int max = INT_MIN;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int find_min(int arr[][5], int rows, int cols)
{
    int min = INT_MAX;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main()
{
    int arr[4][5] = {{4, 2, 7, 4, 1},
                     {8, 5, 2, 7, -3},
                     {1, 4, 2, 8, 3},
                     {4, 6, 2, 8, 13}};

    int rows = 4;
    int cols = 5;

    int ans1 = find_max(arr, rows, cols);
    cout << "Maximum number of given array is: " << ans1 << endl;

    int ans2 = find_min(arr, rows, cols);
    cout << "Minimum number of given array is: " << ans2 << endl;
    return 0;
}