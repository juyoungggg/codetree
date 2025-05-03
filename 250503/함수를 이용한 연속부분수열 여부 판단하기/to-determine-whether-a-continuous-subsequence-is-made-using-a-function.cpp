#include <iostream>
using namespace std;

int a[100] = {0, };
int b[100] = {0, };

bool Check_Subsequence(int n1, int n2) {
    int cnt;
    for (int i = 0; i <= n1 - n2; i++) {
        if (a[i] == b[0]) {
            cnt = 1;
            int tmp = i + 1, j;
            for (j = 1; j < n2; j++) {
                if (a[tmp] == b[j]) cnt++;
                else break;
                tmp++;
            }
            if (cnt == n2)
                return true;
        }
    }
    return false;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++)
        cin >> a[i];
    
    for (int i = 0; i < n2; i++)
        cin >> b[i];
    
    cout << (Check_Subsequence(n1, n2) ? "Yes" : "No") << endl;

    return 0;
}