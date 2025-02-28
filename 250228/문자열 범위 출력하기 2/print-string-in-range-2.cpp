#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int n;
    cin >> n;

    for (int i = str.length() - 1; i > str.length() - 1 - n; i--)
        cout << str[i];

    cout << endl;
    return 0;
}