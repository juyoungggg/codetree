#include <iostream>
#include <string>

using namespace std;
int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int len1 = str1.length();
    int len2 = str2.length();

    if (len1 == len2)
        cout << "same" << endl;
    else 
        cout << (len1 > len2 ? str1 : str2) << ' ' << (len1 > len2 ? len1 : len2) << endl;
    
    return 0;
}