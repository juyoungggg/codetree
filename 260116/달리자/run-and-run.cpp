#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int a[n] = {0, };
    int b[n] = {0, };

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int ans = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == b[i])
            continue;
        
        for (int j = i - 1; j >= 0; j--) {
            while (a[i] != b[i]) {
                a[j]--;
                a[i]++;
                ans += (i - j);
                if (a[j] == 0)
                    break;
            }
            if (a[i] == b[i])
                break;
        }

    }   
    
    cout << ans << endl;
    return 0;
}
/*
5 4 3 1
i = 3, j = 2
a[i] == b[i], 혹은 a[j] == 0 될 때까지 a[j]--, a[i]++, ans += (i - j)
5 4 0 4 : 3
a[3] = 0, j = 1 
5 3 0 5 : 5
5 0 3 5 : 8
3 2 3 5
3 2 3 5 : 10
*/