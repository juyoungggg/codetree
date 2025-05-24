#include <iostream>
#include <algorithm>
using namespace std;

bool Intersecting(int a, int b, int c, int d) {
    if (b < c || d < a)
        return false;
    return true;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int sum = 0;
    if (Intersecting(a, b, c, d))
        sum = max(b, d) - min(a, c);
    
    else
        sum = (b - a) + (d - c);

    cout << sum << endl;
    return 0;
}
