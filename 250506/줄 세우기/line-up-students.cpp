#include <iostream>
#include <algorithm>
using namespace std;

class Info {
public:
    int num, height, weight;
    Info();
    Info(int num, int height, int weight);
};

Info::Info() {}

Info::Info(int num, int height, int weight) {
    this->num = num;
    this->height = height;
    this->weight = weight;
}

bool compare(Info a, Info b) {
    if (a.height == b.height) {
        if (a.weight == b.weight)
            return a.num < b.num;
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

int main() {
    int n;
    cin >> n;

    Info info[n];
    int height, weight;
    for (int i = 0; i < n; i++) {
        cin >> height >> weight;
        info[i] = Info(i + 1, height, weight);
    }

    sort(info, info + n, compare);
    for (int i = 0; i < n; i++) {
        cout << info[i].height << ' ' << info[i].weight << ' ' << info[i].num << endl;
    }
    return 0;
}