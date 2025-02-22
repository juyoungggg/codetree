#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int i = a;
    while (i <= b) {
        cout << i << " ";
        i = (i % 2 == 1 ? i * 2 : i + 3);
    }

    cout << endl;
    
    return 0;
}