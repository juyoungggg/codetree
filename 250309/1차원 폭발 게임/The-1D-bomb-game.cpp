#include <iostream>
using namespace std;

int n, m;
int arr[100] = {};


int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int cnt = 1;
    int i = 1;
    while (1) {
        if (arr[0] == 0 || n == 0 || i > n)
            break;
        if (arr[i - 1] == arr[i])
            cnt++;
        else if (arr[i - 1] != arr[i] && cnt >= m || i == n && cnt >= m) {
            for (int j = i - cnt; j < i; j++)
                arr[j] = 0;
            
            int idx = 0;
            int temp[n];
            for (int k = 0; k < n; k++)
                if (arr[k] != 0)
                    temp[idx++] = arr[k];
            for (int k = 0; k < idx; k++)
                arr[k] = temp[k];
            n -= cnt;
            i = i - cnt - 1;
            cnt = 1;
        }
        i++;
    }

    cout << n << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    return 0;
}