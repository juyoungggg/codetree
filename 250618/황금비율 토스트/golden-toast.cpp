#include <iostream>
#include <list>
using namespace std;

int main() {
    int n, m;
    list<char> l;

    cin >> n >> m;
    char c;
    for (int i = 0; i < n; i++) {
        cin >> c;
        l.push_back(c);
    }

    list<char>:: iterator it;    // 빵이 가리키는 위치
    it = l.end();               // 처음에는 맨 끝에 위치
    for (int i = 0; i < m; i++) {
        cin >> c;
        if (c == 'L' && it != l.begin())
            it--;

        else if (c == 'R' && it != l.end())
            it++;

        else if (c == 'D' && it != l.end())
            it = l.erase(it);   //*

        else if (c == 'P') {
            char nc;
            cin >> nc;
            l.insert(it, nc);
        }
    }

    for (it = l.begin(); it != l.end(); it++) 
        cout << *it;
    cout << endl;

    return 0;
}