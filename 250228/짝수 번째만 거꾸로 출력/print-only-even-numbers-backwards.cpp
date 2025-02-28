#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    if (str.length() % 2 == 0)
        for (int i = str.length() - 1; i >= 0; i -= 2)
            cout << str[i];
    else
        for (int i = str.length() - 2; i >= 0; i -= 2)
            cout << str[i];
    
    return 0;
}