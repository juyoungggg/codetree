#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();
    bool flag = false;

    for (int i = 0; i < len; i++)
        if (str[i] == '0') {
            str[i] = '1';
            flag = true;
            break;
        }

    if (!flag) {
        for (int i = len - 1; i >= 0; i--)
            if (str[i] == '1') {
                str[i] = '0';
                break;
            }
    }
    int arr[len];
    for (int i = 0; i < len; i++)
        arr[i] = (int)(str[i] - '0');

    int ans = 0;
    for (int i = 0; i < len; i++)
        ans = ans * 2 + arr[i];

    cout << ans << endl;
    return 0;
}