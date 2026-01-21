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
    
    for (int i = p - 1; i < m; i++) 
        cnt[sent[i] - 'A'] = -1;

    for (int i = 0; i < n; i++)
        if (cnt[i] >= 0)
            cout << (char)(i + 'A') << ' ';

    cout << endl;
    return 0;
}