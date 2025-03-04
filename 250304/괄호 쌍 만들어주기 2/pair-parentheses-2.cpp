#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.length() - 1; i++) { 
        for (int j = i + 2; j < s.length() - 1; j++)
            if (s[i] == '(' && s[i + 1] == '(' && s[j] == ')' && s[j + 1] == ')')
                cnt++;
    }

    cout << cnt << endl;
    return 0;
}