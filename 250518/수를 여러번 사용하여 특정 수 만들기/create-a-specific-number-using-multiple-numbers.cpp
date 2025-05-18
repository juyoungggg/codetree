#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int num, max_num = 0;
    for (int i = 0; i <= 1000; i++)
        for (int j = 0; j <= 500; j++) {
            num = a * i + b * j;
            if (num <= c && num > max_num)
                max_num = num;
        }


    cout << max_num << endl;
    return 0;
}