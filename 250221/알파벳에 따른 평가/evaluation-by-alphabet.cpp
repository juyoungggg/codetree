#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (c == 'S')
        cout << "Superior" << endl;
    
    else if (c == 'A')
        cout << "Excellent" << endl;
    
    else if (c == 'B')
        cout << "Good" << endl;
    
    else if (c == 'C')
        cout << "Usually" << endl;
    
    else if (c == 'D')
        cout << "Effort" << endl;
    
    else
        cout << "Faliure" << endl;
        
    return 0;
}