#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    
    int alen = a.length();
    int blen = b.length();

    int cnt = 0;
    for (int i = 0; i < alen - blen + 1; i++) {
        if (a.substr(i, blen) == b)
            cnt++;
    }
    
    cout << cnt << endl;
    return 0;
}