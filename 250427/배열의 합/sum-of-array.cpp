#include <iostream>
using namespace std;

int main() {
    int sum[4] = {0, };

    int tmp;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> tmp;
            sum[i] += tmp;
        }
    }
    
    for (int i = 0; i < 4; i++)
        cout << sum[i] << endl;
    return 0;
}