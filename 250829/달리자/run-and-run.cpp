#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n] = {0, };
    int b[n] = {0, };

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = n - 1; i >= 0; i--) {
        
    }

    return 0;
}

/*
5 4 3 1
5 4 0 4: 3
5 3 0 5: 5
5 0 3 5: 8
3 2 3 5: 10

3 2 3 5

7 2 4 9 3
6 4 5 6 7


*/