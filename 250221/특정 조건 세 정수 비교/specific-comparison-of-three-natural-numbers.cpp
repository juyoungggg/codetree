#include <iostream>
using namespace std;

int main() {
    int a, b, c, min;
    cin >> a >> b >> c;

    // a가 최소일 때
    if (a <= b && a <= c)
        cout << 1;
    // b가 최소, a와 b가 같을 때
    else if (b <= a && b <= c && a == b)
        cout << 1;
    // c가 최소, a와 c가 같을 때
    else if (c <= a && c <= b && a == c)
        cout << 1;
    
    else
        cout << 0;

    cout << " ";

    cout << (a == b && b == c) << endl;

    return 0;
}