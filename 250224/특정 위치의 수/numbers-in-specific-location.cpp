#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    
    int sum = 0;
    sum = arr[2] + arr[4] + arr[9];
    cout << sum << endl;

    return 0;
}