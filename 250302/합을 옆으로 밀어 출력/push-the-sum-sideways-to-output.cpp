#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
    }

    string s = to_string(sum);
    s = s.substr(1) + s.substr(0, 1);

    cout << s << endl;
    return 0;
}