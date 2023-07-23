// Get true or false if given number is prime or not

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cout << "Enter a number" << endl;
//     cin >> a;

//    for (int i = 2; i < a; i++)
//     {
//         if (a % i == 0)
//         {
//             cout << "Given number is not prime number";
//             break;
//         }
//         if (i > a / 2)
//         {
//             cout << "Given number is prime number";
//             break;
//         }
//     }

//     return 0;
// }

// 2. check prime numbers up to N.

#include <iostream>
using namespace std;

bool isPrime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
        else if (i > a / 2)
        {
            return true;
        }
    }
}

int main()
{
    int a;
    cout << "Enter a number" << endl;
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        bool res = isPrime(i);
        if (res)
        {
            cout << i << " ";
        }
    }
    return 0;
}