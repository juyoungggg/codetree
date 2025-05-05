#include <iostream>
using namespace std;

int n, m;

int arr[100] = {0, };

int GetSum() {
    int sum = 0;
    while (m != 0) {
        sum += arr[m - 1];
        if (m % 2 == 0)
            m /= 2;
        else
            m--;
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << GetSum() << endl;
    return 0;
}