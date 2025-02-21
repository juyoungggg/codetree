#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1)
        cout << "John" << endl;
    
    else if (n == 2)
        cout << "Tom" << endl;
    
    else if (n == 3)
        cout << "Paul" << endl;
    
    else
        cout << "Vacancy" << endl;

    return 0;
}