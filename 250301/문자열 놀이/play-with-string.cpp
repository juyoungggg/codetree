#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int q;
    cin >> s >> q;

    int cmd;
    int op1, op2;
    char c1, c2;
    for (int i = 0; i < q; i++) {
        cin >> cmd;
        if (cmd == 1) {
            cin >> op1 >> op2;
            char tmp = s[op1 - 1];
            s[op1 - 1] = s[op2 - 1];
            s[op2 - 1] = tmp;
            cout << s << endl;
        }
        else if (cmd == 2) {
            cin >> c1 >> c2;
            for (int j = 0; j < s.length(); j++)
                if (s[j] == c1)
                    s[j] = c2;
            
            cout << s << endl;
        }
    }

    return 0;
}