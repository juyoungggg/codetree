#include <iostream>
#include <string>
using namespace std;

int main() {
    string s[200 + 1];
    int cnt = 0;

    while (1) {
        cin >> s[++cnt];
        if (s[cnt] == "0") {
            cnt--;
            break;
        }
    }

    cout << cnt << endl;
    for (int i = 1; i <= cnt; i += 2)
        cout << s[i] << endl;
    return 0;
}