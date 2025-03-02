#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int sum = stoi(a + b) + stoi(b + a);
    cout << sum << endl;
    return 0;
}