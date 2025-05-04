#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int n, m;
    cin >> n >> m;

    swap(n, m);
    cout << n << ' ' << m << endl;
    return 0;
}