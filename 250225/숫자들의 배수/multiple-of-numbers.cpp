#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    int arr[100 + 1];
    for (int i = 1; i <= 100; i++) {
        cout << n * i << ' ';
        if ((n * i) % 5 == 0)
            cnt++;
        if (cnt == 2)
            break;
    }
    cout << endl;
    
    return 0;
}