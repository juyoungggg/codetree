#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i]))
            if (islower(s[i]))
                cout << (char)(s[i] - 'a' + 'A');
            else if (isupper(s[i]))
                cout << s[i];
    }

    cout << endl;
    return 0;
}