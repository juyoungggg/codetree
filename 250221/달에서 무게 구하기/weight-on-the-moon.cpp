#include <iostream>
using namespace std;

int main() {
    int weight = 13;
    double gravity = 0.165000;

    cout << fixed;

    cout << weight << " * " << gravity << " = " << weight * gravity << endl;
    
    /*
    cout.precision(6);
    cout << gravity;
    cout << " = ";

    cout.precision(6);
    cout << weight * gravity;
    cout << endl;
    */
    return 0;
}