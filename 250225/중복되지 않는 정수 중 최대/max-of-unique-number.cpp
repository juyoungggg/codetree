#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt[1000 + 1] = {0, };
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        cnt[num]++;
    }

    int max = -1;
    for (int i = 1000; i >= 1; i--)
        if (cnt[i] == 1) {
            max = i;
            break; //*
        }

    cout << max << endl;

    return 0;
}