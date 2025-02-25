#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int arr1[n1];
    int arr2[n2];
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
    
    int idx = -1;
    bool flag = false;

    for (int i = 0; i < n1; i++) {
        if (arr1[i] == arr2[0]) {
            idx = i;
            int j;
            for (j = 0; j < n2; j++)
                if (arr1[idx + j] != arr2[j])
                    break;
                    
            if (j == n2) {
                flag = true;
                break;
            }
        }
    }
    cout << (flag ? "Yes" : "No") << endl;

    return 0;
}