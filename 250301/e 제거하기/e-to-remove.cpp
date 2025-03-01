#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    s.erase(s.find('e'), 1);

    cout << s << endl;
    return 0;
}