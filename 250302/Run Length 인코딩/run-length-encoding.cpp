#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s, ans;
    cin >> s;
    
    int i = 0, cnt = 0;

    char c = s[0];
    while (s[i] != '\0') {
        if (c == s[cnt])
            cnt++;
        else {
            ans += c;
            ans += to_string(cnt - i);
            i += (cnt - i);
            c = s[i];
        }
    }
    cout << ans.length() << endl;
    cout << ans << endl;

    return 0;
}