#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int question, num1, num2;
    for (int i = 0; i < q; i++) {
        cin >> question;
        if (question == 1) {
            cin >> num1;
            cout << arr[num1 - 1] << endl;
        }
        else if (question == 2) {
            cin >> num1;
            int idx = -1;
            for (int i = 0; i < n; i++) {
                if (arr[i] == num1) {
                    idx = i;
                    break;
                }
            }
            cout << (idx == -1 ? 0 : idx + 1) << endl;
        }
        else if (question == 3) {
            cin >> num1 >> num2;
            for (int i = num1 - 1; i <= num2 - 1; i++)
                cout << arr[i] << ' ';
            cout << endl;
        }
    }
    return 0;
}