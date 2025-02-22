#include <iostream>
using namespace std;

int main() {
    char a_sick, b_sick, c_sick;
    int a_temp, b_temp, c_temp;
    
    cin >> a_sick >> a_temp;
    cin.get();
    cin >> b_sick >> b_temp;
    cin.get();
    cin >> c_sick >> c_temp;

    int cnt = 0;

    if (a_sick == 'Y' && a_temp >= 37)
        cnt++;
    if (b_sick == 'Y' && b_temp >= 37)
        cnt++;
    if (c_sick == 'Y' && c_temp >= 37)
        cnt++;

    if (cnt >= 2)
        cout << 'E' << endl;
    else
        cout << 'N' << endl;

    return 0;
}