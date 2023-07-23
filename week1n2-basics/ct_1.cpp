#include <iostream>
using namespace std;

void reverse(string name)
{
    int length = name.length() - 1;
    int i = 0, j = length;
    while (i < j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
    cout << name;
}

int main()
{
    string name;
    cin >> name;

    reverse(name);
    return 0;
}