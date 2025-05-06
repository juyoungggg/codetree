#include <iostream>
#include <string>
using namespace std;

class Info {
public:
    string name;
    string address;
    string city;
    Info();
    Info(string name, string address, string city);
};

Info::Info() {}

Info::Info(string name, string address, string city) {
    this->name = name;
    this->address = address;
    this->city = city;
}

int main() {
    int n;
    cin >> n;

    Info info[n];
    string name, address, city;
    int maxidx = 0;
    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> address;
        cin >> city;
        info[i] = Info(name, address, city);
        if (info[maxidx].name < info[i].name)
            maxidx = i;
    }

    cout << "name " << info[maxidx].name << endl;
    cout << "addr " << info[maxidx].address << endl;
    cout << "city " << info[maxidx].city << endl;

    return 0;
}