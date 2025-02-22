#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int i = 3;
    while (i <= n) {
        cout << i << " ";
        i += 3;
    }
    cout << endl;
    
    return 0;
}