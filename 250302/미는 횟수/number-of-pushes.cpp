#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = 0; i < a.length(); i++) {
        a = a.substr(a.length() - 1) + a.substr(0, a.length() - 1);
        cnt++;
        if (a == b)
            break;   
    }
    if (cnt == a.length())
        cnt = -1;
        
    cout << cnt << endl;
    return 0;
}