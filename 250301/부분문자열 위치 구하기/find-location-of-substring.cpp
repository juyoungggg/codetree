#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1;
    cin.get();
    cin >> str2;

    if (str1.find(str2) == -1)
        cout << -1 << endl;
    else
        cout << str1.find(str2) << endl;

    return 0;
}