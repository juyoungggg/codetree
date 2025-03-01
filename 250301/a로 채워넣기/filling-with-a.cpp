#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int slen = s.length();
    s[1] = 'a';
    s[slen - 2] = 'a';

    cout << s << endl;
    return 0;
}