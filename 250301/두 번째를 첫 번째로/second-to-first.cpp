#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    char c1 = s[0], c2 = s[1];
    for (int i = 0; i < s.length(); i++)
        if (s[i] == c2)
            s[i] = c1;
    
    cout << s << endl;

    return 0;
}