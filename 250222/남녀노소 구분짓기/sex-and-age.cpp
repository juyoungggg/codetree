#include <iostream>
using namespace std;

int main() {
    int gender, age;
    cin >> gender;
    cin.get();
    cin >> age;

    if (gender == 0) {
        if (age >= 19)
            cout << "MAN" << endl;
        else
            cout << "BOY" << endl;
    }

    else if (gender == 1) {
        if (age >= 19)
            cout << "WOMAN" << endl;
        else
            cout << "GIRL" << endl;
    }

    return 0;
}