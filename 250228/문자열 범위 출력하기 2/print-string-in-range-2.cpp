#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int n;
    cin >> n;

    if (n > str.length())
        for (int i = str.length() - 1; i >= 0; i--)
            cout << str[i];
    else
        for (int i = str.length() - 1; i > str.length() - 1 - n; i--)
            cout << str[i];

    cout << endl;
    return 0;
}