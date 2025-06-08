#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    list<int> l;
    string s;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "push_front") {
            cin >> a;
            l.push_front(a);
        }

        else if (s == "push_back") {
            cin >> a;
            l.push_back(a);
        }

        else if (s == "pop_front") {
            cout << l.front() << endl;
            l.pop_front();
        }

        else if (s == "pop_back") {
            cout << l.back() << endl;
            l.pop_back();
        }

        else if (s == "size")
            cout << l.size() << endl;
        
        else if (s == "empty") {
            if (l.size() == 0)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }

        else if (s == "front") 
            cout << l.front() << endl;
        
        else if (s == "back")
            cout << l.back() << endl;
    }

    return 0;
}