#include <iostream>
using namespace std;

#define GRAY 0
#define WHITE 1
#define BLACK 2

#define MAX_SZ 100000

int arr[MAX_SZ] = {0, };

int main() {
    int n;
    cin >> n;

    int x;
    char dir;
    int start_loc = MAX_SZ / 2;
    int loc = start_loc;

    for (int i = 0; i < n; i++) {
        cin >> x >> dir;

        if (dir == 'L') {
            for (int j = loc; j >= loc - x + 1; j--) {
                arr[j] = WHITE;
            }
            loc = loc - x + 1;
        }

        else if (dir == 'R') {
            for (int j = loc; j < loc + x; j++) {
                arr[j] = BLACK;
            }
            loc = loc + x - 1;
        }
    }

    int whites, blacks;
    whites = blacks = 0;
    for (int i = 0; i < MAX_SZ; i++) {
        if (arr[i] == WHITE)
            whites++;
        else if (arr[i] == BLACK)
            blacks++;
    }

    cout << whites << ' ' << blacks << endl;
    return 0;
}