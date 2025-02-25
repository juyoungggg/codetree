#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1;
    cin.get();
    cin >> str2;

    cout << str1.length() + str2.length() << endl;
    return 0;
}