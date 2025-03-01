#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    char c;
    cin >> c;
    
    if (s.find(c) == -1)
        cout << "No" << endl;
    else
        cout << s.find(c) << endl;

    return 0;
}