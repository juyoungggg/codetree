#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int slen = s.length();
    s.erase(1, 1);
    s.erase(s.length() - 2, 1);

    cout << s << endl;
    return 0;
}