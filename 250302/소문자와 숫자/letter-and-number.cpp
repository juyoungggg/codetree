#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i]))
            cout << (char)tolower(s[i]);
        else if (isdigit(s[i]))
            cout << s[i];
    }
    
    cout << endl;
    return 0;
}