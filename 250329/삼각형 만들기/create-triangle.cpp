#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int x[100] = {};
int y[100] = {};

bool Check_X(int i, int j, int k) {
    int cnt = 0;
    if (x[i] != x[j] && y[i] == y[j]) cnt++;
    if (x[j] != x[k] && y[j] == y[k]) cnt++;
    if (x[k] != x[i] && y[k] == y[i]) cnt++;

    return (cnt == 1 ? true : false);
}

bool Check_Y(int i, int j, int k) {
    int cnt = 0;
    if (x[i] == x[j] && y[i] != y[j]) cnt++;
    if (x[j] == x[k] && y[j] != y[k]) cnt++;
    if (x[k] == x[i] && y[k] != y[i]) cnt++;

    return (cnt == 1 ? true : false);
}

bool Check(int i, int j, int k) { // 삼각형 가능 조건 and x축 및 y축 평행 조건
    double s1 = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
    double s2 = sqrt((x[j] - x[k]) * (x[j] - x[k]) + (y[j] - y[k]) * (y[j] - y[k]));
    double s3 = sqrt((x[k] - x[i]) * (x[k] - x[i]) + (y[k] - y[i]) * (y[k] - y[i]));
    double max_side = max(max(s1, s2), s3);
    
    if (s1 + s2 + s3 - max_side > max_side && Check_X(i, j, k) && Check_Y(i, j, k))
        return true;
    return false;
}

double GetArea(int i, int j, int k) {
    int a = x[i] * y[j] + x[j] * y[k] + x[k] * y[i];
    int b = x[j] * y[i] + x[k] * y[j] + x[i] * y[k];
    
    return 0.5 * abs(a - b);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    double area, ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++) {
                if (Check(i, j, k)) {
                    area = GetArea(i, j, k);
                    ans = max(area, ans);
                }
            }
    
    cout << ans * 2 << endl;
    return 0;
}