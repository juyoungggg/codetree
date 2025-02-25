#include <iostream>
using namespace std;

int main() {   
    int arr[4][4];
    int sum;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        cout << sum << endl;
        sum = 0;
    }
    
    return 0;
}