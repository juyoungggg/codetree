#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100] = {};
    int maxheight = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (maxheight < arr[i])
            maxheight = arr[i];
    }
    
    int cnt, max = 0;
    for (int i = 1; i <= maxheight; i++) {
        cnt = 0;
        for (int j = 0; j < n; j++)
            if (arr[j] > 0)
                arr[j]--;
        
        // for (int j = 0; j < n; j++)
        //     cout << arr[j] << endl;
        // cout << endl;

        for (int j = 1; j < n; j++)
            if (arr[j] == 0 && arr[j - 1] != 0)
                cnt++;
        
        if (arr[n - 1] != 0)
            cnt++;

        if (max < cnt)
            max = cnt;
    }

    cout << max << endl;
    return 0;
}