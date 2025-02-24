#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    int div, cnt = 0;

    for (int i = start; i <= end; i++) {
        div = 0;
        int j;
        for (j = 1; j <= i; j++)
            if (i % j == 0)
                div++;
        if (div == 3)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}
