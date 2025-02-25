#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    
    int min = arr[0];
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            cnt = 1;
        }
        else if (arr[i] == min)
            cnt++;
    }
    cout << min << ' ' << cnt << endl;

    return 0;
}