#include <iostream>
#include <algorithm>
using namespace std;

class Arr {
public:
    int idx;
    int sortidx;
    int num;
    Arr();
    Arr(int idx, int sortidx, int num);
};

Arr::Arr() {}

Arr::Arr(int idx, int sortidx, int num) {
    this->idx = idx;
    this->sortidx = sortidx;
    this->num = num;
}

bool compare(Arr a, Arr b) {
    if (a.num == b.num)
        return a.idx < b.idx;
    return a.num < b.num;
}

int main() {
    int n;
    cin >> n;

    Arr arr[n];
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr[i] = Arr(i + 1, 0, num);
    }

    sort(arr, arr + n, compare);

    for (int i = 0; i < n; i++) {
        arr[i].sortidx = i + 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++)
            if (arr[j].idx == i) {
                cout << arr[j].sortidx << ' ';
                break;
            }
    }
        
    return 0;
}