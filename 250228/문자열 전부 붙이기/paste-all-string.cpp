#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string arr[n];
    string ans;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        ans += arr[i];
    }    

    cout << ans << endl;
    return 0;
}