#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool flag1 = false, flag2 = false;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s.substr(i, 2) == "ee")
            flag1 = true;
        if (s.substr(i, 2) == "ab")
            flag2 = true;
    }

    cout << (flag1 ? "Yes" : "No") << ' ';
    cout << (flag2 ? "Yes" : "No") << endl;
    return 0;
}