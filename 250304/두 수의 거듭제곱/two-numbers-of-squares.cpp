#include <iostream>
using namespace std;

int pow(int a, int b) {
    int tmp = 1;
    for (int i = 0; i < b; i++)
        tmp *= a;
    return tmp;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << pow(a, b) << endl;
    return 0;
}