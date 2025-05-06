#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Info {
public:
    string name;
    int height, weight;
    Info();
    Info(string name, int height, int weight);
};

Info::Info() {}

Info::Info(string name, int height, int weight) {
    this->name = name;
    this->height = height;
    this->weight = weight;
}

bool compare(Info a, Info b) {
    if (a.height == b.height)
        return a.weight > b.weight;
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;

    Info info[n];
    string name;
    int height, weight;

    for (int i = 0; i < n; i++) {
        cin >> name >> height >> weight;
        info[i] = Info(name, height, weight);
    }
    
    sort(info, info + n, compare);
    for (int i = 0; i < n; i++)
        cout << info[i].name << ' ' << info[i].height << ' ' << info[i].weight << endl;
    return 0;
}