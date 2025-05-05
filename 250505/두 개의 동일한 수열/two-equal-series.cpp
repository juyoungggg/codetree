#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr1[n];
    int arr2[n];

    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    for (int i = 0; i < n; i++)
        if (arr1[i] != arr2[i]) {
            cout << "No" << endl;
            return 0;
        }

    cout << "Yes" << endl;
    return 0;
}