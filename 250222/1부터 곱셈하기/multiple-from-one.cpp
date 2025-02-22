#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int prod = 1, i;
    for (i = 1; i <= 10; i++) {
        prod *= i;
        if (prod >= n)
            break;
    }
    cout << i << endl;
    
    return 0;
}