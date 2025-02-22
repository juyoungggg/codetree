#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 1 && num % 3 == 0)
            sum += num;
    }
    cout << sum << endl;
    
    return 0;
}