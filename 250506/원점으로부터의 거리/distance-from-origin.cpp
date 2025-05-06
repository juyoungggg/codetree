#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Point {
public:
    int num, x, y;
    Point();
    Point(int num, int x, int y);
};

Point::Point() {}

Point::Point(int num, int x, int y) {
    this->num = num;
    this->x = x;
    this->y = y;
}

bool compare(Point a, Point b) {
    if (abs(a.x) + abs(a.y) == abs(b.x) + abs(b.y))
        return a.num < b.num;
    return abs(a.x) + abs(a.y) < abs(b.x) + abs(b.y);
}

int main() {
    int n;
    cin >> n;

    Point point[n];
    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        point[i] = Point(i + 1, x, y);
    }

    sort(point, point + n, compare);
    for (int i = 0; i < n; i++)
        cout << point[i].num << endl;

    return 0;
}