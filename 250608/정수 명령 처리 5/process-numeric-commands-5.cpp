#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v;
    string s;
    int a;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "push_back") {
            cin >> a;
            v.push_back(a);
        }

        else if (s == "pop_back")
            v.pop_back();

        else if (s == "size")
            cout << v.size() << endl;
        
        else if (s == "get") {
            cin >> a;
            cout << v[a - 1] << endl;
        }
    }

    return 0;
}