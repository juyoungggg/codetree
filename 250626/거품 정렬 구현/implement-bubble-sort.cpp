#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> v;

    cin >> n;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }

    int cnt;
    while (1) {
        cnt = 0;
        for (int i = 0; i < n - 1; i++)
            if (v[i] > v[i + 1]) {
                cnt++;
                int tmp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = tmp;
            }
        if (cnt == 0)
            break;
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << endl;

    return 0;
}