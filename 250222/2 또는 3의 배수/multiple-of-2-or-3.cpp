#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cout << (i % 2 == 0 || i % 3 == 0 ? 1 : 0) << " ";
    
    cout << endl;
    return 0;
}