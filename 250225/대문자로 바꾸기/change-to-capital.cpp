#include <iostream>
using namespace std;

int main() {
    char arr[5][3];
    char ans[5][3];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            ans[i][j] = toupper(arr[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++)
            cout << ans[i][j] << ' ';
        cout << endl;
    }
    
    return 0;
}