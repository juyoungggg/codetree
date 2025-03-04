#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
        for (int j = i + 1; j < s.length(); j++)
            for (int k = j + 1; k < s.length(); k++)
                if (s[i] == 'C' && s[j] == 'O' && s[k] == 'W')
                    cnt++;

    cout << cnt << endl;
    return 0;
}