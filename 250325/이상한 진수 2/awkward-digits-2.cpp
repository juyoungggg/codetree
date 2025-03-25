#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();

    for (int i = 0; i < len; i++)
        if (str[i] == '0') {
            str[i] = '1';
            break;
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