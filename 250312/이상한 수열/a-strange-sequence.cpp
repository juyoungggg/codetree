#include <iostream>
using namespace std;

int Sequence(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    
    return (n / 3) + Sequence(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << Sequence(n) << endl;
    return 0;
}