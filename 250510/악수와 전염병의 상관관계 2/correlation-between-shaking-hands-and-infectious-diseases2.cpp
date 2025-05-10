#include <iostream>
#include <algorithm>
using namespace std;

class Hands {
public:
    int t;
    int x;
    int y;
    Hands();
    Hands(int t, int x, int y);
};

Hands::Hands() {}

Hands::Hands(int t, int x, int y) {
    this->t = t;
    this->x = x;
    this->y = y;
}

bool compare(Hands a, Hands b) {
    return a.t < b.t;
}

int main() {
    int n, k, p, t;
    cin >> n >> k >> p >> t;

    // n: 개발자 수
    // k: 악수로 전염시킬 수 있는 최대 횟수 (변동 없음)
    // p: 초기감염 개발자 번호
    // t: 악수 정황 횟수 (반복문 횟수)

    int devs[n] = {0, };
    devs[k - 1] = 1;

    int handshakes[n] = {0, };
    int time, x, y;
    Hands hands[t];
    for (int i = 0; i < t; i++) {
        cin >> time >> x >> y;
        hands[i] = Hands(time, x, y);
    }

    sort(hands, hands + t, compare);

    for (int i = 0; i < t; i++) {
        if (devs[hands[i].x - 1] == 1 || devs[hands[i].y - 1] == 1) {
            if (handshakes[hands[i].x - 1] < k && handshakes[hands[i].y - 1] < k) {
                handshakes[hands[i].x - 1]++;
                handshakes[hands[i].y - 1]++;
                devs[hands[i].x - 1] = 1;
                devs[hands[i].y - 1] = 1;
            }
            else if (handshakes[hands[i].x - 1] < k) {
                handshakes[hands[i].x - 1]++;
                devs[hands[i].y - 1] = 1;
            }
            else if (handshakes[hands[i].y - 1] < k) {
                handshakes[hands[i].y - 1]++;
                devs[hands[i].x - 1] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << devs[i];
    cout << endl;
    return 0;
}