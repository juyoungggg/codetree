#include <iostream>
#include <string>
using namespace std;

class Bomb {
public:
    string defuse;
    char line;
    int second;
    Bomb();
    Bomb(string defuse, char line, int second);
};

Bomb::Bomb() {}
Bomb::Bomb(string defuse, char line, int second) {
    this->defuse = defuse;
    this->line = line;
    this->second = second;
}

int main() {
    string defuse;
    char line;
    int second;
    cin >> defuse;
    cin >> line;
    cin >> second;

    Bomb bomb(defuse, line, second);
    cout << "code : " << bomb.defuse << endl;
    cout << "color : " << bomb.line << endl;
    cout << "second : " << bomb.second << endl;

    return 0;
}