#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string a;
    cin >> n >> a;

    string s;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == a)
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}