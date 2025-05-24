#include <iostream>
using namespace std;

int n;

bool Intersecting(int x1[], int x2[]) {
    for (int i = 1; i < n; i++) {
        if (x2[i - 1] < x1[i] || x2[i] < x1[i - 1])
            return false;
    }
    return true;
}

int main() {
    cin >> n;

    int x1[n] = {0, };
    int x2[n] = {0, };
    
    for (int i = 0; i < n; i++)
        cin >> x1[i] >> x2[i];

    if (Intersecting(x1, x2))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}