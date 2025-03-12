#include <iostream>
using namespace std;

void Print1(int n) {
    if (n == 0)
        return;
    
    Print1(n - 1);
    cout << n << ' ';
}

void Print2(int n) {
    if (n == 0)
        return;
    
    cout << n << ' ';    
    Print2(n - 1);
}

int main() {
    int n;
    cin >> n;

    Print1(n);
    cout << endl;
    Print2(n);

    return 0;
}