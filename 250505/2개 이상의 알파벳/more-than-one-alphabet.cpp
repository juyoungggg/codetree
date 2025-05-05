#include <iostream>
#include <string>
using namespace std;

int CountAlphabets(string a) {
    int cnt[26] = {0, };
    for (int i = 0; i < a.length(); i++) 
        cnt[a[i] - 'a']++;

    int ans = 0;
    for (int i = 0; i < 26; i++)
        if (cnt[i] >= 1)
            ans++;
    return ans;
}

int main() {
    string a;
    cin >> a;

    cout << (CountAlphabets(a) >= 2 ? "Yes" : "No") << endl;
    return 0;
}