#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i]))
            sum += s[i] - '0'; // *
    }

    cout << sum << endl;
    return 0;
}