#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) 
        cin >> arr[i];

    int under_max = 1, over_min = 1000;

    for (int i = 0; i < 10; i++) {
        if (arr[i] < 500 && arr[i] > under_max)
            under_max = arr[i];
        else if (arr[i] > 500 && arr[i] < over_min)
            over_min = arr[i];
    }
    cout << under_max << ' '<< over_min << endl;

    return 0;
}