#include <iostream>
#include <string>
using namespace std;

string str1;
string str2;

int m, n;

int FindString() {
    int cnt, tmp = 0;
    for (int i = 0; i < m; i++)
        if (str1[i] == str2[0]) {
            tmp = i;
            cnt = 0;
            for (int j = 0; j < n; j++) {
                if (str1[tmp++] != str2[j])
                    break;
                else
                    cnt++;
            }
            if (cnt == n)
                return i;
        }
    return -1;
}

int main() {
    cin >> str1;
    cin >> str2;

    m = str1.size();
    n = str2.size();

    cout << FindString() << endl;
    return 0;
}