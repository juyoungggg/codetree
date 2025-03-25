#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--)
        if (str[i] == 0) {
            str[i] = 1;
            break;
        }
    cout << str << endl;

    int ans = 0;
    for (int i = 0; i < str.length(); i++)
        ans = ans * 2 + (int)(str[i]);

    cout << ans << endl;
    return 0;
}