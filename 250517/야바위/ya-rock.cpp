#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i];

    int score, max_score = 0;
    for (int i = 1; i <= 3; i++) {
        score = 0;
        int pebble = i;
        for (int j = 0; j < n; j++) {
            if (a[j] == pebble)
                pebble = b[j];
            else if (b[j] == pebble)
                pebble = a[j];

            if (pebble == c[j])
                score++;
        }
        max_score = (score > max_score ? score : max_score);
    }

    cout << max_score << endl;

    return 0;
}