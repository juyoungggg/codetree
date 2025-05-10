#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int n, h, t;
    cin >> n >> h >> t;

    // 최소한의 비용을 들여서 최소 T번 이상 H 높이로 나오게끔 하기

    int arr[n] = {0, };
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int cost, min_cost = INT_MAX;
    for (int i = 0; i < n - t + 1; i++) {
        cost = 0;
        for (int j = i; j < i + t; j++)
            cost += abs(arr[j] - h);
        if (min_cost > cost)
            min_cost = cost;
    }

    cout << min_cost << endl;

    return 0;
}