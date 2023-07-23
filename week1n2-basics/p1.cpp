// 1. Solid rectangle

// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=0;i<3;i++)
//     {
//        for(int j=0;j<5;j++)
//        {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// 2. Square pattern
//  #include<iostream>
//  using namespace std;

// int main(){

//     for(int i=0;i<4;i++)
//     {
//        for(int j=0;j<4;j++)
//        {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// 3. Hollow rectangle
// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (i == 1)
//             {
//                 if (j == 0 || j == 4)
//                 {
//                     cout << "* ";
//                 }
//                 else
//                 {
//                     cout << "  ";
//                 }
//             }

//             if (i == 0 || i == 2)
//             {
//                 cout << "* ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// --------OR--------

// #include<iostream>
// using namespace std;

// int main(){
//     int row,column;
//     cin>>row;
//     cin>>column;

//   for(int i=0;i<row;i++){

//     if(i==0 || i==row-1){
//         for(int j=0;j<column;j++){
//              cout<<"* ";
//         }
//     }

//     else{
//         cout<<"* ";
//         for(int k=1;k<column-1;k++){
//             cout<<"  ";
//         }
//         cout<<"* ";
//     }
//     cout<<endl;
//   }
//     return 0;
// }

// 4. Half Pyramid

// #include <iostream>
// using namespace std;

// int main()
// {
//     int row;
//     cin >> row;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 5. Inverted Half Pyramid

// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows;
//     cin >> rows;

//     for (int i = rows; i > 0; i--)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -----OR-----

// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows;
//     cin >> rows;

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < rows - i; j++)
//         {
//              cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 6. Numeric Half Pyramid

// #include<iostream>
// using namespace std;

// int main(){
//     int rows;
//     cin>>rows;
//     cout<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<=i;j++){
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 7. Inverted Numeric Half Pyramid

// #include<iostream>
// using namespace std;

// int main(){
//     int rows;
//     cin>>rows;
//     cout<<endl;

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<rows-i;j++){
//              cout<<j+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 8. Full Pyramid

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 7; j++)
//         {
//             int k = 1;
//             if (j >= 5 - i && j <= 3 + i && k)
//             {
//                 cout << "*";
//                 k = 0;
//             }
//             else
//             {
//                 cout << " ";
//                 k = 1;
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main()
// {
//     int rows;
//     cin>>rows;

//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<rows-i;j++){
//             cout<<" ";
//         }

//         for(int k=0;k<=i;k++){
//             cout<<"* ";
//         }
//          cout<<endl;
//     }
// }

// 8. Inverted Full Pyramid

// #include <iostream>
// using namespace std;

// int main(){
//     int rows;
//     cin>>rows;

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }

//         for(int k=0;k<rows-i;k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//    int rows=5;
//     for(int i=0;i<5;i++){
//         int k=1;
//         for(int j=0;j<9;j++){
//             if(j>rows-i-1 && j<=i+4){
//                 cout<<k;
//                 j<5? k++:k--;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//          cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin>>n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i - 1; j++) {
//          cout<<" ";
//     }
//     for (int j = i; j < i; j++) {
//         cout<<j;
//     }
//     int ele = 2 * (n - i - 1);
//     for (int j = 1; j <= i - 1; j++) {
//         cout<<ele--;
//     }
//      cout<<endl;
//   }
//   return 0;
// }

// Practice: Hollow square pattern:-

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         if (i == 0 || i == n - 1)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << "*";
//             }
//         }

//         else
//         {
//             cout << "*";
//             for (int k = 0; k < n - 2; k++)
//             {
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// ----OR----

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==0 || i==n-1 || j==0 || j==n-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// Hollow Full pyramid:-

// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows;
//     cin >> rows;

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < rows - i; j++)
//         {
//             cout << " ";
//         }

//         for (int k = 0; k <= 2 * i; k++)
//         {
//             if (k == 0 || k == 2 * i || i==rows-1)
//             {
//                 cout << "*";
//             }

//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Q:4:-
// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int a;
//     // cin>>a;
//     if(cin>>a){
//         cout<<"chl pda ye to yr";
//     }

//     return 0;
// }

// Solid diamond

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<i+1;k++){
//             if(k==0 || k==i){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<n-i;k++){
//             if(k==0 || k==n-i-1){
//             cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// Flipped solid diamond

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << "*";
//         }
//         for (int k = 0; k < 2 * i + 1;k++){
//                 cout<<" ";
//         }
//         for(int l=0;l<n-i;l++){
//                     cout<<"*";
//                 }

//         cout<<endl;
//     }

//      for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//         {
//             cout << "*";
//         }
//         for (int k = 0; k < (2*n) - (2*i+1);k++){
//                 cout<<" ";
//         }
//         for(int l=0;l<i+1;l++){
//                     cout<<"*";
//                 }

//         cout<<endl;
//     }
//     return 0;
// }

// Fancy pattern

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<i+1;
//             if(j!=i){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }

//     for(int k=0;k<n;k++){
//         for(int l=0;l<n-k;l++){
//             cout<<n-k;
//             if(l<n-k-1){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Alphabet palindrome pyramid
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){

//             // To print alphabetically order,you will do like  =>
//             // step1-> what do you want to print ,e.g: int variable1 = j+1;
//             // step2-> char variable2 = variable1 + 'A' -1;

//         int var =  j+1;
//         char ch = var + 'A' - 1;
//         cout<< ch;
//             // cout<<j+1;
//         }

//         for(int k=i;k>0;k--){
//             int var1 = k;
//             char ch = var1 + 'A' - 1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// Hollow inverted half pyrramid

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//        for(int j=0;j<n-i;j++){
//         if(j==0 || j == n-i-1 || i==0){
//             cout<<"*";
//         }

//         else{
//             cout<<" ";
//         }
//        }
//        cout<<endl;
//     }

//     return 0;
// }

// Hollow inverted full pyrramid

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }

//         for (int k = 0; k < 2 * i + 1; k++)
//         {
//             if (i == n - 1 || k == 0 || k == 2 * i + 1 - 1)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Numeric hollow half pyramid

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             if (i == n - 1 || j == 0 || j == i + 1 - 1)
//             {
//                 cout << j + 1;
//             }

//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Numeric hollow Inverted half pyramid
//  #include<iostream>
//  using namespace std;

//  int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
//     for(int i=0;i<n;i++){

//         for(int j=0;j<n-i;j++){
//             if(j==0 || j==n-i-1 || i==0){
//             cout<<j+i+1;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
//  }

// Numeric Palindrome Equilateral Pyramid
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){

//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }

//         for(int k=0;k<i+1;k++){
//             cout<<k+1;
//         }

//         for(int l=i;l>0;l--){
//             cout<<l;
//         }

//         cout<<endl;
//     }
//     return 0;
// }

// Fancy Pattern #1
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n + 3 - i; j++)
//         {
//             cout << "*";
//         }

//         for (int k = 0; k < i + 1; k++)
//         {
//             cout << i + 1;
//             if (k != i)
//             {
//                 cout << "*";
//             }
//         }

//             for (int l = 0; l < n + 3 - i; l++)
//             {
//                 cout << "*";
//             }

//         cout << endl;
//     }
//     return 0;
// }

// Solid Half Diamond
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n-i-1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Fancy Pattern #3

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "*";
//         for (int j = 0; j < i; j++)
//         {
//             cout << j + 1;
//         }

//         for (int k = i; k > 0; k--)
//         {

//             if (k == 1)
//             {
//                 cout << "*";
//             }

//             else
//             {
//                 cout << k - 1;
//             }
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         cout << "*";
//         for (int j = 0; j < n - i - 2; j++)
//         {
//             cout << j + 1;
//         }

//         for (int k = n - i - 1; k > 1; k--)
//         {

//             if (k == 2)
//             {
//                 cout << "*";
//             }

//             else
//             {
//                 cout << k - 2;
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Fancy Pattern #2 (No solved till)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     cout<<endl;

//     int count = 1;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << count;
//             count++;

//             if(j!=i){
//                 cout<<"*";
//             }
//         }
//         cout << endl;
//     }

//     int count = 1;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n-i; j++)
//         {
//             cout << count;
//             count++;

//             if(j!=i){
//                 cout<<"*";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Numeric full pyramid

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){

//       for(int j=0;j<n-i;j++){
//         cout<<" ";
//       }

//       for(int k=0;k<i+1;k++){
//         cout<<k+i+1;
//       }

//       for(int l=2*i;l>i;l--){
//         cout<<l;
//       }
//       cout<<endl;
//     }

//     return 0;
// }

// Numeric Hollow pyramid

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     cout << endl;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n - i; j++)
//         {
//             cout << " ";
//         }

//         int p=1;
//         for (int k = 0; k < (2 * i) + 1; k++)
//         {
//             if(k==0 && i!=n-1){
//                 cout<<p;
//             }

//             else if (k == 2 * i)
//             {
//                 cout << i + 1;
//             }

//             else if (i == n - 1)
//             {
//                 if(k<i)
//                     cout <<k + 1<<" ";
//             }

//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// ----- OR ----- (simple approach as compare to previous )

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        int start = 1;
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (i == 0 || i == n - 1)
            {
                if (k % 2 == 0)
                {
                    cout << start;
                    start++;
                }
                else
                {
                    cout << " ";
                }
            }

            else
            {
                if (k == 0)
                {
                    cout << "1";
                }

                else if (k == 2 * i)
                {
                    cout << i + 1;
                }

                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}