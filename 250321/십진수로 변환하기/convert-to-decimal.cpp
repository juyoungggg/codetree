#include <iostream>
using namespace std;

int digits[10] = {};
int cnt = 0;

void integer_to_digits(int n) {
    if (n < 10) {
        digits[cnt++] = n % 10;
        return;
    }
    integer_to_digits(n / 10);
    digits[cnt++] = n % 10;
}

int main() {
    int n;
    cin >> n;

    integer_to_digits(n);
    
    int ans = 0;
    for (int i = 0; i < cnt; i++) 
        ans = ans * 2 + digits[i];

    cout << ans << endl;
    return 0;
}