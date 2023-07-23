// 1.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         sum += i;
//     }
//     cout << sum << endl;
//     return 0;

//     return 0;
// }


// 2.
#include<iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+' :
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '/':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '*':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}
