#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s;

    while (s.length() != 1) {
        cin >> n;
        if (n >= s.length())
            s.erase(s.length() - 1, 1);
        else
            s.erase(n, 1);
        
        cout << s << endl;
    }
    
    return 0;
}