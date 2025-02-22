#include <iostream>
using namespace std;

int main() {
    int a_math, a_eng;
    int b_math, b_eng;

    cin >> a_math >> a_eng;
    cin >> b_math >> b_eng;

    if (a_math > b_math)
        cout << "A" << endl;
    else if (a_math == b_math)
        cout << (a_eng > b_eng ? "A" : "B") << endl;
    else
        cout << "B" << endl;

    return 0;
}