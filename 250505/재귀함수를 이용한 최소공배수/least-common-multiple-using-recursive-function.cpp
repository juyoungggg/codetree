#include <iostream>
using namespace std;

int GetGCD(int a, int b) {
    while (a % b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return b;
}

int GetLCM(int a, int b) {
    return a * b / GetGCD(a, b);
}

int main() {
    int n;
    cin >> n;
    
    int arr[n] = {0, };
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int lcm;
    if (n == 1) lcm = arr[0];
    else {
        lcm = GetLCM(arr[0], arr[1]);
        for (int i = 2; i < n; i++)
            lcm = GetLCM(lcm, arr[i]);
    }

    cout << lcm << endl;
    return 0;
}