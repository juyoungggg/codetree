#include <iostream>
using namespace std;

class Credentials {
    string id;
    int level;
public:
    Credentials();
    Credentials(string id, int level);
    string getID() { return id; }
    int getLevel() { return level; }
};

Credentials::Credentials(string id, int level) {
    this->id = id;
    this->level = level;
}

int main() {
    Credentials c1 = Credentials("codetree", 10);

    string id;
    int level;
    cin >> id;
    cin >> level;

    Credentials c2 = Credentials(id, level);

    cout << "user " << c1.getID() << " lv " << c1.getLevel() << endl;
    cout << "user " << c2.getID() << " lv " << c2.getLevel()` << endl;

    return 0;
}