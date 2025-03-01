#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int q;
    cin >> s >> q;

    int cmd;
    for (int i = 0; i < q; i++) {
        cin >> cmd;
        if (cmd == 1) 
            s = s.substr(1) + s.substr(0, 1);
        else if (cmd == 2)
            s = s.substr(s.length() - 1) + s.substr(0, s.length() - 1);
        else if (cmd == 3)
            reverse(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}