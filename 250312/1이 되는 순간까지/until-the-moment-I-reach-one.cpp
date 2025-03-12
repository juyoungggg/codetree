#include <iostream>
using namespace std;

void f(int n, int &cnt) {
    if (n == 1)
        return;
    
    if (n % 2 == 0) {
        cnt++;
        f(n / 2, cnt);
    }
    else if (n % 2 == 1) {
        cnt++;
        f(n / 3, cnt);
    }
}

int main() {
    int n, cnt = 0;
    cin >> n;
    f(n, cnt);

    cout << cnt << endl;
    return 0;
}