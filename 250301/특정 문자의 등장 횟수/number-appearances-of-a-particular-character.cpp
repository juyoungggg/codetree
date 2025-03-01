#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s.substr(i, 2) == "ee")
            cnt1++;
        if (s.substr(i, 2) == "eb")
            cnt2++;
    }
    cout << cnt1 << ' ' << cnt2 << endl;
    
    return 0;
}