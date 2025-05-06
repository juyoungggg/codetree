#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Info {
public:
    string name;
    int height;
    double weight;
    Info();
    Info(string name, int height, double weight);
};

Info::Info() {}

Info::Info(string name, int height, double weight) {
    this->name = name;
    this->height = height;
    this->weight = weight;
}

bool compare_name(Info a, Info b) {
    return a.name < b.name;
}

bool compare_height(Info a, Info b) {
    return a.height > b.height;
}

int main() {
    Info info[5];

    string name;
    int height;
    double weight;
    for (int i = 0; i < 5; i++) {
        cin >> name >> height >> weight;
        info[i] = Info(name, height, weight);
    }

    cout << fixed;
    cout.precision(1);

    sort(info, info + 5, compare_name);
    cout << "name" << endl;
    for (int i = 0; i < 5; i++) 
        cout << info[i].name << ' ' << info[i].height << ' ' << info[i].weight << endl;
    
    cout << endl;
    
    sort(info, info + 5, compare_height);
    cout << "height" << endl;
    for (int i = 0; i < 5; i++) 
        cout << info[i].name << ' ' << info[i].height << ' ' << info[i].weight << endl;
    return 0;
}