#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt[1000 + 1] = {0, };
    int num;
    for (int i = 0 ; i < n; i++) { // 숫자 n개 입력, 입력과 동시에 카운트 진행
        cin >> num;
        cnt[num]++;
    }

    int max = -1;
    for (int i = 1000; i >= 1; i--)
        if (cnt[i] == 1)
            max = i;

    cout << max << endl;

    return 0;
}