#include <iostream>
using namespace std;

int main() {
    int arr[10];

    int odds = 0, evens = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i % 2 == 0) // 홀수 번째 합
            odds += arr[i];
        else            // 짝수 번째 합
            evens += arr[i];
    }
    
    cout << (odds >= evens ? odds - evens : evens - odds) << endl;

    return 0;
}