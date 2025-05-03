#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0 || i % 10 == 5 || (i % 3 == 0 && i % 9 != 0))
            continue;
        cnt++;
    }
    
    cout << cnt << endl;
    return 0;
}