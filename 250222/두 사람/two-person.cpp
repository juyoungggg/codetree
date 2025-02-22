#include <iostream>
using namespace std;

int main() {
    int a_age, b_age;
    char a_gender, b_gender;

    cin >> a_age >> a_gender;
    cin.get();
    cin >> b_age >> b_gender;

    if ((a_age >= 19 && a_gender == 'M') || (b_age >= 19 && b_gender == 'M'))
        cout << 1 << endl;
    
    else
        cout << 0 << endl;

    return 0;
}