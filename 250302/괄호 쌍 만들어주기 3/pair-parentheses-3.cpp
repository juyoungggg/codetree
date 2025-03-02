#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            for (int j = i; j < s.length(); j++)
                if (s[j] == ')') {
                    // cout << i << ' ' << j << endl;
                    cnt++;
                }
        }
    }

    cout << cnt << endl;

    return 0;
}