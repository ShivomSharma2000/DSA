#include<iostream>
using namespace std;

// int main(){
// 	int i=0;
// 	i=i+1;
// 	cout<<i;
// 	/*print i \*/
//     i=i+1;
// 	cout<<++i;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
// 	short i=2300, j=4322;
// 	cout<<"i+j="<<(i+j);
//     return 0;
// }


// int main() {
// 	float l, b;
// 	int P = 2*(l+b);
// 	cout<<"Perimeter="<< P;
// }



// int main() {
// 		int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++j) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// int main(){
// 	int n;
// 	cin >> n;
// 	bool isPrime = true;
//   for(int i=2;i<n;i++){
//       if(n%i == 0){
//           isPrime = false; 
//           break;
//       }
//   }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;	
// 	}
//   return 0;
// }


// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=j+1;j<=n;j++){
//             if(j==i+1 || j == n - i - 1 || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// ans-> but not know about this

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=i+1;j<=n;j++){
//             if(j==i+1 || j == n || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }




// #include<iostream>

// int main() {
//   int n;
//   std::cin>>n;
//   for (int i = 1; i <= n; i++) {

//     for (int j = 1; j <= n - i; j++) {
//       printf("  ");
//     }

//     for (int j = i; j <= (2 * i) - 1 ; j++) {
//       printf("%d ", j);
//     }

//     int ele = 2 * (i -1);
//     for (int j = i; j < (2*i) - 1; j++) {
//       printf("%d ", ele--);
//     }

//     printf("\n");
//   }
//   return 0;
// }


// Print Hollow full pyramid(copied)

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; ++i)
//     {
//         int k = 0;

//         for (int j = 0; j < n * 2 - 1; ++j)
//         {
//             if (j < n - i - 1)
//             {
//                 cout << " ";
//             }

//             else if (k < 2 * i + 1)
//             {
//                 if (k == 0 || k == 2 * i || i == n - 1)
//                 {
//                     cout << "*";
//                 }
//                 else
//                 {
//                     cout << " ";
//                 }
//                 k++;
//             }


//             else
//             {
//                 cout << " ";
//             }

//         }
//         cout << endl;
//     }
// }