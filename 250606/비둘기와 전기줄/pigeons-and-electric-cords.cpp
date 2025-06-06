#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int loc, bird;
    int arr[10 + 1];
    for (int i = 1; i <= 10; i++)
        arr[i] = -1;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> bird >> loc;
        if ((arr[bird] == 0 || arr[bird] == 1) && arr[bird] != loc) {
            cnt++;
        }
        arr[bird] = loc;

    }
    cout << cnt << endl;

    return 0;
}


/*
1. 새는 10마리, n번 관찰할 예정
2. n번동안 몇번 비둘기가 어디있는지 관찰
3. 비둘기들이 최소 몇 번 도로를 건너갔는지 구해야 함
*/