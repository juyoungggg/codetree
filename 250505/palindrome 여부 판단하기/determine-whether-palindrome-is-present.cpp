#include <iostream>
#include <string>
using namespace std;

bool CheckPalindrome(string str) {
    string tmp;
    for (int i = str.length() - 1; i >= 0; i--)
        tmp += str[i];
    
    return (str == tmp);
}

int main() {
    string str;
    cin >> str;
    
    cout << (CheckPalindrome(str) ? "Yes" : "No") << endl;
    return 0;
}