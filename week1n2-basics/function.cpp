// Sum of numbers up to N.

// #include<iostream>
// using namespace std;

// int sum(int num){
//   int s=0;
//   for(int i=1;i<=num;i++){
//   s=s+i;
// }
// return s;
// }

// int main(){
//     int N;
//     cin>>N;

//     int result=sum(N);
//     cout<<"Sum is: "<<result<<endl;
//     return 0;
// }

// Sum of Even numbers up to N.

// #include <iostream>
// using namespace std;

// int sum(int num)
// {
//     int s = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         if (i % 2 == 0)
//         {
//             s = s + i;
//         }
//     }
//     return s;
// }

// int main()
// {
//     int N;
//     cin >> N;

//     int result = sum(N);
//     cout << "Sum of Even numbers is: " << result << endl;
//     return 0;
// }

// Write a function to display area of circle
// #include<iostream>
// using namespace std;

// float Area(int r){
//     float pi=3.27;
//     float result= pi*r*r;
//     return result;
// }

// int main(){
//     int r;
//     cout<<"Enter a radius of a circle"<<endl;
//     cin>>r;

//     float area=Area(r);
//     cout<<"Area of circle is "<<area<<endl;
//     return 0;
// }

// Find factorial of a number
// #include<iostream>
// using namespace std;

// int fac(int n){
//     int p=1;
//     for(int i=1;i<=n;i++){
//         p=p*i;
//     }
//     return p;
// }

// int main(){
//     int num;
//     cin>>num;

//     int res=fac(num);
//     cout<<res;
//     return 0;
// }

// Check number prime or not
// #include<iostream>
// using namespace std;

// void prime(int get){
//     for(int i=2;i<=get/2;i++){
//         if(get%i==0){
//             cout<<"Not prime";
//             break;
//         }
//         else{
//             cout<<"prime";
//             break;
//         }
//     }
// }

// int main(){
//     int num;
//     cin>>num;

//     prime(num);
//     return 0;
// }

// Print all prime number from 1 to N
// #include <iostream>
// using namespace std;

// void prime(int get)
// {
//     for (int i = 1; i <= get; i++)
//     {

//       if(i%2==0){

//       }
//     }
// }

// int main()
// {
//     int num;
//     cin >> num;

//     prime(num);
//     return 0;
// }

// Reverse an integer
// #include <iostream>
// using namespace std;

// int reverseNum(int n)
// {

//     int store = 0;
//     while (n != 0)
//     {
//         int d = n % 10;
//         store = d + store * 10;
//         n = n / 10;
//     }
//     return store;
// }

// int main()
// {
//     int num;
//     cin >> num;

//     int res = reverseNum(num);
//     cout << res;
//     return 0;
// }

// Set ith bit
// #include<iostream>
// using namespace std;

// int setBit(int num){
//       cin
// }

// int main(){
//     int num;
//     cin>>num;

//     int res=setBit(num);
//     cout<<res;
//     return 0;
// }

// Convert celcius to fahreheit
// #include<iostream>
// using namespace std;

// float celToFahr(float c){
//     float F = (c*9/5)+32;

//     return F;
// }

// int main(){
//     int celcius;
//     cin>>celcius;

//     float fahrenheit = celToFahr(celcius);
//     cout<<fahrenheit;
//     return 0;
// }

// Print digits of a number
// #include <iostream>
// #include<math.h>
// using namespace std;


// Print reverse numbers:-
// void digit(int num)
// {

//     int d, add = 0;
//     while (num != 0)
//     {
//         d = num % 10;
//         cout<<d<<" ";
//         add = d + add * 10;
//         num = num / 10;
//     }
//     cout<<endl;
// }

// Print straight forward digits through array:
// #include<iostream>
// using namespace std;

// int main(){
    
//     int arr[4] = {2,4,2,8};
    
//     int add= 0;

//     for(int i=0;i<4;i++){
//         add = add * 10 + arr[i];  
//     }
//     cout<<add;

//     return 0;
// }


// Find set bits
// #include<iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cin>>n;

// int add= 0;
//     while(n!=0){
//          if(n & 1){
//               add++;
//               n=n>>1;
//          }
//          else{
//               n=n>>1;
//          }

//     }
//     cout<<add;

//     return 0;
// }


// Convert kilometers into miles
// #include<iostream>
// using namespace std;

// int main(){
     
//      float km;
//      cin>>km;

//      float km_to_Mile = 1/1.609;

//      float result = km * km_to_Mile;
//      cout<<result<<" miles";

//      return 0;
// }

#include<iostream>
using namespace std;

int main(){
     char ch = 126;
     cout<< ch;
     return 0;
}