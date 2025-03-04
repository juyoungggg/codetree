#include <iostream>
using namespace std;

void Printline(int n) {
    for (int i = 0; i < n; i++) 
        cout << "12345^&*()_" << endl;
}

int main() {
    int n;
    cin >> n;

    Printline(n);
    return 0;
}