#include <iostream>
using namespace std;

int main() {
    int a, b, c, min;
    cin >> a >> b >> c;

    if (a <= b)
        min = (a <= c ? a : c);
    else if (b <= c)
        min = (b <= a ? b : a);
    else if (c <= a)
        min = (c <= b ? c : b);
    
    cout << min << endl;
    
    return 0;
}