#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    char arr[10000 + 1] = {};
    int loc;
    char sign;
    int max_idx = 0;

    for (int i = 0; i < n; i++) {
        cin >> loc >> sign;
        arr[loc] = sign;
        if (max_idx < loc)
            max_idx = loc;
    }

    int sum = 0, max = 0;
    for (int i = 1; i <= max_idx + 1 - k; i++) {
        sum = 0;
        for (int j = i; j <= i + k; j++) {
            if (arr[j] == 'G')
                sum++;
            else if (arr[j] == 'H')
                sum += 2;
        }
        if (max < sum) 
            max = sum;
    }

    cout << max << endl;
    
    return 0;
}