#include <iostream>
#include <string>

using namespace std;
int main() {
    string str1, str2, str3;
    cin >> str1;
    cin >> str2;
    cin >> str3;

    int arr[3];
    arr[0] = str1.length();
    arr[1] = str2.length();
    arr[2] = str3.length();

    int max = arr[0], min = arr[0];
    for (int i = 0; i < 3; i++) {
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    }
    cout << max - min << endl;

    return 0;
}