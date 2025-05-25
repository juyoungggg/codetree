#include <iostream>
#include <climits>
using namespace std;

int n;

// bool Intersecting(int x1[], int x2[]) {
//     for (int i = 1; i < n; i++) {
//         if (x2[i - 1] < x1[i] || x2[i] < x1[i - 1])
//             return false;
//     }
//     return true;
// }

int main() {
    cin >> n;

    int x1[n] = {0, };
    int x2[n] = {0, };
    
    int max_x1 = 0;
    int min_x2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        max_x1 = x1[i] > max_x1 ? x1[i] : max_x1;
        min_x2 = min_x2 > x2[i] ? x2[i] : min_x2;
    }

    if (min_x2 >= max_x1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    // if (Intersecting(x1, x2))
    //     cout << "Yes" << endl;
    // else
    //     cout << "No" << endl;
    
    return 0;
}