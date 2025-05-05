#include <iostream>
#include <string>
using namespace std;

class Covert {
public:
    string code;
    char location;
    int time;
    Covert();
    Covert(string code, char location, int time);
};

Covert::Covert(string code, char location, int time) {
    this->code = code;
    this->location = location;
    this->time = time;
}

int main() {
    string code;
    char location;
    int time;
    cin >> code;
    cin >> location;
    cin >> time;
    Covert agent1(code, location, time);

    cout << "secret code : " << agent1.code << endl;
    cout << "meeting point : " << agent1.location << endl;
    cout << "time : " << agent1.time << endl;
    return 0;
}