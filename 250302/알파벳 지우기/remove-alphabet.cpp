#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string a_digit, b_digit;
    for (int i = 0; i < a.length(); i++)
        if (isdigit(a[i]))
            a_digit += a[i];
    
    for (int i = 0; i < b.length(); i++)
        if (isdigit(b[i]))
            b_digit += b[i];

    int sum = stoi(a_digit) + stoi(b_digit);
    cout << sum << endl;

    return 0;
}