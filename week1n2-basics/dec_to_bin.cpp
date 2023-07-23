// Decimal to binary

#include <iostream>
#include <cmath>

using namespace std;

// int decConvert(int dec)
// {
    // (i) Through modulus operator:-
    //     int i=0;
    //     int convert_dec=0;
    //     while(dec>0){
    //         int bin=dec % 2;
    //         convert_dec= bin * pow(10,i++) + convert_dec;
    //         dec=dec/2;
    //     }
    //     return convert_dec;
    // }

    // (ii) Through bitwise operator:-
    //    int i=0;
    //     int convert_dec=0;
    //     while(dec>0){
    //         int bin=dec & 1;
    //         convert_dec= bin * pow(10,i++) + convert_dec;
    //         dec=dec>>1;
    //     }
    //     return convert_dec;
    // }

    // (iii) Binary to decimal:-
    int bin_to_dec(int bin)
    {
        int store = 0;
        int i = 0;
        while (bin > 0)
        {
            int bit = bin % 10;
            store = store + bit * pow(2, i++);
            bin = bin / 10;
        }
        return store;
    }

int main()
{

    // (i) for decimal to binary:-
    // int dec;
    // cin>>dec;

    // int binary=decConvert(dec);
    // cout<<binary<<"";

    // (ii) for binary to decimal:-
    int binary;
    cin >> binary;

    cout << bin_to_dec(binary) << "";

    return 0;
}