#include <iostream>
using namespace std;

int main() {
    int arr[5];
    
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        cout << (char)arr[i] << ' ';
    }

    cout << endl;
    return 0;
}