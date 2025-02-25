#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int arr[b] = {0, };
    while (a > 1) {
        arr[(a % b)]++;
        a /= b;
    }

    int sum = 0;
    for (int i = 0; i < b; i++)
        sum += arr[i] * arr[i];
    
    cout << sum << endl;
    return 0;
}