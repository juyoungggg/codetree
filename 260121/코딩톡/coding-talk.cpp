#include <iostream>
using namespace std;

int cnt[32] = {0, };

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    
    char sent[m];
    int unread[m];

    for (int i = 0; i < m; i++) {
        cin >> sent[i] >> unread[i];
        cnt[sent[i] - 'A']++;
    }
    
    if (unread[p - 1] == 0)
        return 0;

    for (int i = p - 1; i < m; i++) {
        cnt[sent[i] - 'A'] = -1;
        int j = i - 1;
        while (unread[i] == unread[j] && j >= 0) {
            cnt[sent[j] - 'A'] = -1;
            j--;
        }

        // if (unread[i] == unread[i - 1])
        //     cnt[sent[i - 1] - 'A'] = -1;
    }

    for (int i = 0; i < n; i++)
        if (cnt[i] >= 0)
            cout << (char)(i + 'A') << ' ';

    cout << endl;
    return 0;
}