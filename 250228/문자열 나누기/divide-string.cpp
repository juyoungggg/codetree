#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.get();

    string str;
    getline(cin, str);

    int cnt = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            cout << str[i];
            cnt++;
        }
        if (cnt == 5) {
            cout << endl;
            cnt = 0;
        }
    }

    return 0;
}