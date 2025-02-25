#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n];
    int num = 1;
    
    for (int j = 0; j < n; j++) 
        for (int i = 0; i < n; i++) {
            arr[i][j] = num;
            num++;
        }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}