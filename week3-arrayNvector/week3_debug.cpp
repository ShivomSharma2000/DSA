// Q:1
// #include <iostream>
// using namespace std;

// int main() {
//    int arr[5] = {1, 2, 3, 4, 5};
//    for(int i = 0; i < 5; i++) {
//       cout << arr[i] << " ";
//    }  
//    return 0;
// }

// Q:2(not done yet)
// #include <iostream>
// #include <vector>

// using namespace std;

// int majorityElement(vector<int>& nums) {
//     int candidate, count = 0;
//     for (int i = 0; i < nums.size(); i++) {
//         if (count == 0) {
//             candidate = nums[i];
//         }
//         if (nums[i] == candidate) {
//             count++;
//         } else {
//             count--;
//         }
//     }
//     return candidate;
// }

// int main() {
//     vector<int> nums = {1, 2, 3, 2, 2, 4, 2};
//     cout << "The majority element is: " << majorityElement(nums) << endl;
//     return 0;
// }

// Q:3
// #include<iostream>
// using namespace std;
// void moveNegative(int arr[], int n){
//     int i=0, j=n-1;
//     while(i<j){
//         while(arr[i]<0){ // swap when a positive element is encountered
//             i++;
//         }
//         while(arr[j]>0){ // swap when a negative element is encountered
//             j--;
//         }
//         if(i<j){
//         swap(arr[i], arr[j]); 
//         }   // swap the elements
//     }
// }
// int main(){
//     int n = 5;
//     int arr[n] = {2, -3, -1, 5, -4};
//     moveNegative(arr, n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Q:4
// #include<iostream>
// #include<cstring>
// using namespace std;

// void printDuplicates(int arr[], int n){
//     int freq[n+1];
//     memset(freq, 0, sizeof(freq)); // initialize the frequency array to 0
//     bool flag = false; // added a flag to check if there are no duplicate elements
//     for(int i=0;i<=n;i++){
//         freq[arr[i]]++;
//         if(freq[arr[i]] == 2){
//             flag = true;
//             cout<<arr[i]<<" ";
//         }
//     }
//     if(!flag){
//         cout<<"No duplicate elements";
//     }
// }

// int main(){
//     int n = 6;
//     int arr[n] = {3, 2, 1, 2, 2, 3};
//     printDuplicates(arr, n);
//     return 0;
// }

// Q:5(not done yet)

