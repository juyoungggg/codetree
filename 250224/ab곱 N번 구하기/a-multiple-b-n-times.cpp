#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a, b;
    int prod;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        prod = 1;
        for (int j = a; j <= b; j++)
            prod *= j;
        cout << prod << endl;
    }
    
    return 0;
}