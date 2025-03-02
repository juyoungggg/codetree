#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, cmd;
    cin >> a >> cmd;

    for (int i = 0; i < cmd.length(); i++) {
        if (cmd[i] == 'L')
            a = a.substr(1) + a.substr(0, 1);

        else if (cmd[i] == 'R')
            a = a.substr(a.length() - 1) + a.substr(0, a.length() - 1);
        
    }
    
    cout << a << endl;
    return 0;
}