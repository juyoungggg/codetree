#include <iostream>
using namespace std;

int main() {
    double eyesight;
    cin >> eyesight;

    if (eyesight >= 1.0)
        cout << "High" << endl;
    
    else if (eyesight >= 0.5)
        cout << "Middle" << endl;
    
    else
        cout << "Low" << endl;
        
    return 0;
}